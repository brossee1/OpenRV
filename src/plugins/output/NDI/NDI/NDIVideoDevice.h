//
// Copyright (C) 2023  Autodesk, Inc. All Rights Reserved. 
// 
// SPDX-License-Identifier: Apache-2.0 
//

#ifndef __NDI__NDIVideoDevice__h__
#define __NDI__NDIVideoDevice__h__

#include <TwkGLF/GLVideoDevice.h>
#include <TwkGLF/GL.h>
#include <TwkUtil/Timer.h>
#include <boost/thread.hpp>
#include <cstddef>

#ifdef PLATFORM_WINDOWS
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glu.h>
#include <pthread.h>
#include <windows.h>
#include <process.h>
#endif

#if defined(PLATFORM_LINUX)
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glx.h>
#include <GL/glxext.h>
#include <GL/glu.h>
#endif

#if defined(PLATFORM_DARWIN)
#include <TwkGLF/GL.h>
#endif

#include <TwkGLF/GLFBO.h>
#include <TwkGLF/GLFence.h>

#include <Processing.NDI.Lib.h>

#include <iostream>
#include <stl_ext/thread_group.h>
#include <deque>

namespace NDI {
    class NDIModule;

    typedef boost::mutex::scoped_lock ScopedLock;
    typedef boost::mutex              Mutex;
    typedef boost::condition_variable Condition;
    typedef unsigned char             NDIVideoFrame;

    struct NDIDataFormat
    {
        const char*                             desc;
        TwkApp::VideoDevice::InternalDataFormat iformat;
        NDIlib_FourCC_video_type_e              ndiFormat;
        bool                                    rgb;
    };

    struct NDIVideoFormat
    {
        int             width;
        int             height;
        float           pa;
        float           hz;
        int             frame_rate_N;
        int             frame_rate_D;
        const char*     desc;
    };

    struct NDIAudioFormat
    {
        double             hz;
        TwkAudio::Format   prec;
        size_t             numChannels;
        TwkAudio::Layout   layout;
        const char*        desc;
    };

    typedef std::vector<NDIVideoFormat> NDIVideoFormatVector;
    typedef std::vector<NDIDataFormat>  NDIDataFormatVector;

    class NDIVideoDevice : public TwkGLF::GLBindableVideoDevice {
        friend class PinnedMemoryAllocator;
        public:
            typedef TwkUtil::Timer                          Timer;
            typedef TwkGLF::GLFence                         GLFence;
            typedef TwkGLF::GLFBO                           GLFBO;
            typedef std::vector<unsigned char*>             BufferVector;
            typedef stl_ext::thread_group                   ThreadGroup;
            typedef std::vector<int>                        AudioBuffer;
            typedef std::deque<NDIVideoFrame*>              DLVideoFrameDeque;
            struct PBOData
            {
                enum State { Mapped, Transferring, NeedsUnmap, Ready };

                PBOData(GLuint g);
                ~PBOData();

                void lockData();
                void unlockData();
                void lockState();
                void unlockState();

                GLuint          globject;
                void*           mappedPointer;
                State           state;
                GLFence*        fence;
                const GLFBO*    fbo;

            private:
                pthread_mutex_t mutex;
                pthread_mutex_t stateMutex;
            };
            struct FrameData
            {
                FrameData(): audioData(nullptr), videoFrame(nullptr) {}
                ~FrameData() {}
                void*                   audioData;
                void*                   videoFrame;
            };

            typedef std::deque<PBOData*>                    PBOQueue;

            NDIVideoDevice(NDIModule* ndiModule, const std::string& name);
            virtual ~NDIVideoDevice() override;

            virtual size_t asyncMaxMappedBuffers() const override;
            virtual Time deviceLatency() const override;

            virtual size_t numVideoFormats() const override;
            virtual VideoFormat videoFormatAtIndex(size_t) const override;
            virtual void setVideoFormat(size_t) override;
            virtual size_t currentVideoFormat() const override;

            virtual size_t numAudioFormats() const override;
            virtual AudioFormat audioFormatAtIndex(size_t) const override;
            virtual void setAudioFormat(size_t) override;
            virtual size_t currentAudioFormat() const override;

            virtual size_t numDataFormats() const override;
            virtual DataFormat dataFormatAtIndex(size_t) const override;
            virtual void setDataFormat(size_t) override;
            virtual size_t currentDataFormat() const override;

            virtual size_t numSyncSources() const override;
            virtual SyncSource syncSourceAtIndex(size_t) const override;
            virtual size_t currentSyncSource() const override;

            virtual size_t numSyncModes() const override;
            virtual SyncMode syncModeAtIndex(size_t) const override;
            virtual void setSyncMode(size_t) override;
            virtual size_t currentSyncMode() const override;

            virtual bool isStereo() const override;
            virtual bool isDualStereo() const override;

            virtual bool readyForTransfer() const override;
            virtual void transfer(const TwkGLF::GLFBO*) const override;
            virtual void transfer2(const TwkGLF::GLFBO*, const TwkGLF::GLFBO*) const override;
            virtual void transferAudio(void* interleavedData, size_t n) const override;
            virtual bool willBlockOnTransfer() const override;

            virtual size_t width() const override { return m_frameWidth; }
            virtual size_t height() const override { return m_frameHeight; }
            virtual void open(const StringVector& args) override;
            virtual void close() override;
            virtual bool isOpen() const override;
            virtual void makeCurrent() const;
            virtual void clearCaches() const override;
            virtual void syncBuffers() const override;
            virtual VideoFormat format() const override;
            virtual Timing timing() const override;

            virtual void unbind() const override;
            virtual void bind(const TwkGLF::GLVideoDevice*) const override;
            virtual void bind2(const TwkGLF::GLVideoDevice*, const TwkGLF::GLVideoDevice*) const override;
            virtual void audioFrameSizeSequence(AudioFrameSizeVector&) const override;

        private:
            void initialize();
            bool transferChannel(size_t i, const TwkGLF::GLFBO*) const;
            void transferChannelPBO(size_t i, const TwkGLF::GLFBO*, NDIVideoFrame*, NDIVideoFrame*) const;
            void transferChannelReadPixels(size_t i, const TwkGLF::GLFBO*, NDIVideoFrame*, NDIVideoFrame*) const;

            NDIVideoFormatVector                m_ndiVideoFormats;
            NDIDataFormatVector                 m_ndiDataFormats;
            NDIlib_send_instance_t              m_ndiSender{nullptr};
            mutable NDIlib_video_frame_v2_t     m_ndiVideoFrame;
            mutable NDIVideoFrame*              m_readyFrame;
            mutable NDIVideoFrame*              m_readyStereoFrame;
            mutable DLVideoFrameDeque           m_DLOutputVideoFrameQueue;
            mutable DLVideoFrameDeque           m_DLReadbackVideoFrameQueue; // only rgb formats
            mutable bool                        m_needsFrameConverter;
            mutable bool                        m_hasAudio;
            mutable PBOQueue                    m_pboQueue;
            mutable PBOData*                    m_lastPboData;
            mutable PBOData*                    m_secondLastPboData;  // use of stereo formats; stores left eye.
            void*                               m_audioData[2];
            mutable int                         m_audioDataIndex;
            bool                                m_initialized;
            mutable bool                        m_bound;
            bool                                m_asyncSDISend; 
            bool                                m_pbos;
            size_t                              m_pboSize;
            size_t                              m_videoFrameBufferSize;
            bool                                m_open;  
            bool                                m_stereo;
            size_t                              m_frameWidth;
            size_t                              m_frameHeight;
            mutable size_t                      m_totalPlayoutFrames;
            mutable int                         m_transferTextureID;        
            size_t                              m_internalAudioFormat;
            size_t                              m_internalVideoFormat;
            size_t                              m_internalDataFormat;
            size_t                              m_internalSyncMode;
            unsigned long                       m_framesPerSecond;
            unsigned long                       m_audioBufferSampleLength;
            unsigned long                       m_audioSamplesPerFrame;
            mutable bool                        m_frameCompleted;
            unsigned long                       m_audioChannelCount;
            TwkAudio::Format                    m_audioFormat;
            GLenum                              m_textureFormat;
            GLenum                              m_textureType;
            static bool                         m_infoFeedback;
    };

} // NDI

#endif  // __NDI__NDIVideoDevice__h__

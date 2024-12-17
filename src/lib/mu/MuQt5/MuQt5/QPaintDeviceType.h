//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QPaintDeviceType__h__
#define __MuQt5__QPaintDeviceType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{
    class MuQt_QPaintDevice;

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QPaintDeviceType : public Class
    {
    public:
        struct Struct
        {
            QPaintDevice* object;
        };

        typedef MuQt_QPaintDevice MuQtType;
        typedef QPaintDevice QtType;

        //
        //  Constructors
        //

        QPaintDeviceType(Context* context, const char* name,
                         Class* superClass = 0);
        virtual ~QPaintDeviceType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[1];
    };

    // Inheritable object

    class MuQt_QPaintDevice : public QPaintDevice
    {
    public:
        virtual ~MuQt_QPaintDevice();

    protected:
        MuQt_QPaintDevice(Pointer muobj, const CallEnvironment*);
        virtual int metric(QPaintDevice::PaintDeviceMetric metric_) const;

    public:
        int metric_pub(QPaintDevice::PaintDeviceMetric metric_) const
        {
            return metric(metric_);
        }

        int metric_pub_parent(QPaintDevice::PaintDeviceMetric metric_) const
        {
            return QPaintDevice::metric(metric_);
        }

    public:
        const QPaintDeviceType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QPaintDeviceType::cachedInstance(const QPaintDeviceType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt5__QPaintDeviceType__h__

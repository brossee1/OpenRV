//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QCoreApplicationType__h__
#define __MuQt5__QCoreApplicationType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{
    class MuQt_QCoreApplication;

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QCoreApplicationType : public Class
    {
    public:
        typedef MuQt_QCoreApplication MuQtType;
        typedef QCoreApplication QtType;

        //
        //  Constructors
        //

        QCoreApplicationType(Context* context, const char* name,
                             Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QCoreApplicationType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[5];
    };

    // Inheritable object

    class MuQt_QCoreApplication : public QCoreApplication
    {
    public:
        virtual ~MuQt_QCoreApplication();
        virtual bool notify(QObject* receiver, QEvent* event);

    protected:
        virtual bool event(QEvent* e);

    public:
        virtual bool eventFilter(QObject* watched, QEvent* event);

    protected:
        virtual void customEvent(QEvent* event);
        virtual void timerEvent(QTimerEvent* event);

    public:
        bool event_pub(QEvent* e) { return event(e); }

        bool event_pub_parent(QEvent* e) { return QCoreApplication::event(e); }

        void customEvent_pub(QEvent* event) { customEvent(event); }

        void customEvent_pub_parent(QEvent* event)
        {
            QCoreApplication::customEvent(event);
        }

        void timerEvent_pub(QTimerEvent* event) { timerEvent(event); }

        void timerEvent_pub_parent(QTimerEvent* event)
        {
            QCoreApplication::timerEvent(event);
        }

    public:
        const QCoreApplicationType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance* QCoreApplicationType::cachedInstance(
        const QCoreApplicationType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QCoreApplicationType__h__

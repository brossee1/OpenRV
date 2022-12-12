//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QNetworkCookieJarType__h__
#define __MuQt5__QNetworkCookieJarType__h__
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

namespace Mu {
class MuQt_QNetworkCookieJar;

//
//  NOTE: file generated by qt2mu.py
//

class QNetworkCookieJarType : public Class
{
  public:

    typedef MuQt_QNetworkCookieJar MuQtType;
    typedef QNetworkCookieJar QtType;

    //
    //  Constructors
    //

    QNetworkCookieJarType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QNetworkCookieJarType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[10];
};

// Inheritable object

class MuQt_QNetworkCookieJar : public QNetworkCookieJar
{
  public:
    virtual ~MuQt_QNetworkCookieJar();
    MuQt_QNetworkCookieJar(Pointer muobj, const CallEnvironment*, QObject * parent) ;
    virtual QList<QNetworkCookie> cookiesForUrl(const QUrl & url) const;
    virtual bool deleteCookie(const QNetworkCookie & cookie) ;
    virtual bool insertCookie(const QNetworkCookie & cookie) ;
    virtual bool setCookiesFromUrl(const QList<QNetworkCookie> & cookieList, const QUrl & url) ;
    virtual bool updateCookie(const QNetworkCookie & cookie) ;
  protected:
    virtual bool validateCookie(const QNetworkCookie & cookie, const QUrl & url) const;
  public:
    virtual bool event(QEvent * e) ;
    virtual bool eventFilter(QObject * watched, QEvent * event) ;
  protected:
    virtual void customEvent(QEvent * event) ;
    virtual void timerEvent(QTimerEvent * event) ;
  public:
    QList<QNetworkCookie> allCookies_pub() const { return allCookies(); }
    QList<QNetworkCookie> allCookies_pub_parent() const { return QNetworkCookieJar::allCookies(); }
    void setAllCookies_pub(const QList<QNetworkCookie> & cookieList)  { setAllCookies(cookieList); }
    void setAllCookies_pub_parent(const QList<QNetworkCookie> & cookieList)  { QNetworkCookieJar::setAllCookies(cookieList); }
    bool validateCookie_pub(const QNetworkCookie & cookie, const QUrl & url) const { return validateCookie(cookie, url); }
    bool validateCookie_pub_parent(const QNetworkCookie & cookie, const QUrl & url) const { return QNetworkCookieJar::validateCookie(cookie, url); }
    void customEvent_pub(QEvent * event)  { customEvent(event); }
    void customEvent_pub_parent(QEvent * event)  { QNetworkCookieJar::customEvent(event); }
    void timerEvent_pub(QTimerEvent * event)  { timerEvent(event); }
    void timerEvent_pub_parent(QTimerEvent * event)  { QNetworkCookieJar::timerEvent(event); }
  public:
    const QNetworkCookieJarType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QNetworkCookieJarType::cachedInstance(const QNetworkCookieJarType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QNetworkCookieJarType__h__

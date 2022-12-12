//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QAbstractScrollAreaType__h__
#define __MuQt5__QAbstractScrollAreaType__h__
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
class MuQt_QAbstractScrollArea;

//
//  NOTE: file generated by qt2mu.py
//

class QAbstractScrollAreaType : public Class
{
  public:

    typedef MuQt_QAbstractScrollArea MuQtType;
    typedef QAbstractScrollArea QtType;

    //
    //  Constructors
    //

    QAbstractScrollAreaType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QAbstractScrollAreaType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[21];
};

// Inheritable object

class MuQt_QAbstractScrollArea : public QAbstractScrollArea
{
  public:
    virtual ~MuQt_QAbstractScrollArea();
    MuQt_QAbstractScrollArea(Pointer muobj, const CallEnvironment*, QWidget * parent) ;
    virtual void setupViewport(QWidget * viewport) ;
    virtual QSize minimumSizeHint() const;
    virtual QSize sizeHint() const;
  protected:
    virtual void scrollContentsBy(int dx, int dy) ;
    virtual bool viewportEvent(QEvent * event) ;
    virtual QSize viewportSizeHint() const;
    virtual void contextMenuEvent(QContextMenuEvent * e) ;
    virtual void dragEnterEvent(QDragEnterEvent * event) ;
    virtual void dragLeaveEvent(QDragLeaveEvent * event) ;
    virtual void dragMoveEvent(QDragMoveEvent * event) ;
    virtual void dropEvent(QDropEvent * event) ;
    virtual bool event(QEvent * event_) ;
    virtual void keyPressEvent(QKeyEvent * e) ;
    virtual void mouseDoubleClickEvent(QMouseEvent * e) ;
    virtual void mouseMoveEvent(QMouseEvent * e) ;
    virtual void mousePressEvent(QMouseEvent * e) ;
    virtual void mouseReleaseEvent(QMouseEvent * e) ;
    virtual void paintEvent(QPaintEvent * event) ;
    virtual void resizeEvent(QResizeEvent * event) ;
    virtual void wheelEvent(QWheelEvent * e) ;
    virtual void changeEvent(QEvent * ev) ;
  public:
    void scrollContentsBy_pub(int dx, int dy)  { scrollContentsBy(dx, dy); }
    void scrollContentsBy_pub_parent(int dx, int dy)  { QAbstractScrollArea::scrollContentsBy(dx, dy); }
    void setViewportMargins_pub(int left, int top, int right, int bottom)  { setViewportMargins(left, top, right, bottom); }
    void setViewportMargins_pub_parent(int left, int top, int right, int bottom)  { QAbstractScrollArea::setViewportMargins(left, top, right, bottom); }
    void setViewportMargins_pub(const QMargins & margins)  { setViewportMargins(margins); }
    void setViewportMargins_pub_parent(const QMargins & margins)  { QAbstractScrollArea::setViewportMargins(margins); }
    bool viewportEvent_pub(QEvent * event)  { return viewportEvent(event); }
    bool viewportEvent_pub_parent(QEvent * event)  { return QAbstractScrollArea::viewportEvent(event); }
    QMargins viewportMargins_pub() const { return viewportMargins(); }
    QMargins viewportMargins_pub_parent() const { return QAbstractScrollArea::viewportMargins(); }
    QSize viewportSizeHint_pub() const { return viewportSizeHint(); }
    QSize viewportSizeHint_pub_parent() const { return QAbstractScrollArea::viewportSizeHint(); }
    void contextMenuEvent_pub(QContextMenuEvent * e)  { contextMenuEvent(e); }
    void contextMenuEvent_pub_parent(QContextMenuEvent * e)  { QAbstractScrollArea::contextMenuEvent(e); }
    void dragEnterEvent_pub(QDragEnterEvent * event)  { dragEnterEvent(event); }
    void dragEnterEvent_pub_parent(QDragEnterEvent * event)  { QAbstractScrollArea::dragEnterEvent(event); }
    void dragLeaveEvent_pub(QDragLeaveEvent * event)  { dragLeaveEvent(event); }
    void dragLeaveEvent_pub_parent(QDragLeaveEvent * event)  { QAbstractScrollArea::dragLeaveEvent(event); }
    void dragMoveEvent_pub(QDragMoveEvent * event)  { dragMoveEvent(event); }
    void dragMoveEvent_pub_parent(QDragMoveEvent * event)  { QAbstractScrollArea::dragMoveEvent(event); }
    void dropEvent_pub(QDropEvent * event)  { dropEvent(event); }
    void dropEvent_pub_parent(QDropEvent * event)  { QAbstractScrollArea::dropEvent(event); }
    bool event_pub(QEvent * event_)  { return event(event_); }
    bool event_pub_parent(QEvent * event_)  { return QAbstractScrollArea::event(event_); }
    void keyPressEvent_pub(QKeyEvent * e)  { keyPressEvent(e); }
    void keyPressEvent_pub_parent(QKeyEvent * e)  { QAbstractScrollArea::keyPressEvent(e); }
    void mouseDoubleClickEvent_pub(QMouseEvent * e)  { mouseDoubleClickEvent(e); }
    void mouseDoubleClickEvent_pub_parent(QMouseEvent * e)  { QAbstractScrollArea::mouseDoubleClickEvent(e); }
    void mouseMoveEvent_pub(QMouseEvent * e)  { mouseMoveEvent(e); }
    void mouseMoveEvent_pub_parent(QMouseEvent * e)  { QAbstractScrollArea::mouseMoveEvent(e); }
    void mousePressEvent_pub(QMouseEvent * e)  { mousePressEvent(e); }
    void mousePressEvent_pub_parent(QMouseEvent * e)  { QAbstractScrollArea::mousePressEvent(e); }
    void mouseReleaseEvent_pub(QMouseEvent * e)  { mouseReleaseEvent(e); }
    void mouseReleaseEvent_pub_parent(QMouseEvent * e)  { QAbstractScrollArea::mouseReleaseEvent(e); }
    void paintEvent_pub(QPaintEvent * event)  { paintEvent(event); }
    void paintEvent_pub_parent(QPaintEvent * event)  { QAbstractScrollArea::paintEvent(event); }
    void resizeEvent_pub(QResizeEvent * event)  { resizeEvent(event); }
    void resizeEvent_pub_parent(QResizeEvent * event)  { QAbstractScrollArea::resizeEvent(event); }
    void wheelEvent_pub(QWheelEvent * e)  { wheelEvent(e); }
    void wheelEvent_pub_parent(QWheelEvent * e)  { QAbstractScrollArea::wheelEvent(e); }
    void changeEvent_pub(QEvent * ev)  { changeEvent(ev); }
    void changeEvent_pub_parent(QEvent * ev)  { QAbstractScrollArea::changeEvent(ev); }
  public:
    const QAbstractScrollAreaType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QAbstractScrollAreaType::cachedInstance(const QAbstractScrollAreaType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QAbstractScrollAreaType__h__

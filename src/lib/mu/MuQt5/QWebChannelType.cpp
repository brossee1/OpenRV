//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QWebChannelType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QTimerEventType.h>
#include <MuQt5/QObjectType.h>
#include <MuQt5/QEventType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QWebChannel::~MuQt_QWebChannel()
{
    if (_obj)
    {
        *_obj->data<Pointer>() = Pointer(0);
        _obj->releaseExternal();
    }
    _obj = 0;
    _env = 0;
    _baseType = 0;
}

MuQt_QWebChannel::MuQt_QWebChannel(Pointer muobj, const CallEnvironment* ce, QObject * parent) 
 : QWebChannel(parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QWebChannelType>(c->internName("qt.QWebChannel"));
}

bool MuQt_QWebChannel::event(QEvent * e) 
{
    if (!_env) return QWebChannel::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QWebChannel::event(e);
    }
}

bool MuQt_QWebChannel::eventFilter(QObject * watched, QEvent * event) 
{
    if (!_env) return QWebChannel::eventFilter(watched, event);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(3);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeinstance<QObjectType>(c,watched,"qt.QObject"));
        args[2] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QWebChannel::eventFilter(watched, event);
    }
}

void MuQt_QWebChannel::customEvent(QEvent * event) 
{
    if (!_env) { QWebChannel::customEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[2];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QWebChannel::customEvent(event);
    }
}

void MuQt_QWebChannel::timerEvent(QTimerEvent * event) 
{
    if (!_env) { QWebChannel::timerEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[3];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QTimerEventType>(c,event,"qt.QTimerEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QWebChannel::timerEvent(event);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QWebChannelType::QWebChannelType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QWebChannelType::~QWebChannelType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QWebChannel_QWebChannel_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QWebChannel* w = object<QWebChannel>(widget))
    {
        QWebChannelType* type = 
            c->findSymbolOfTypeByQualifiedName<QWebChannelType>(c->internName("qt.QWebChannel"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setobject(o, w);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromObject, Pointer)
{
    NODE_RETURN( QWebChannel_QWebChannel_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

Pointer qt_QWebChannel_QWebChannel_QWebChannel_QWebChannel_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QObject * arg1 = object<QObject>(param_parent);
    setobject(param_this, new MuQt_QWebChannel(param_this, NODE_THREAD.process()->callEnv(), arg1));
    return param_this;
}

void qt_QWebChannel_deregisterObject_void_QWebChannel_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_object)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    QObject * arg1 = object<QObject>(param_object);
    arg0->deregisterObject(arg1);
}

void qt_QWebChannel_registerObject_void_QWebChannel_string_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_id, Pointer param_object)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    const QString  arg1 = qstring(param_id);
    QObject * arg2 = object<QObject>(param_object);
    arg0->registerObject(arg1, arg2);
}

bool qt_QWebChannel_event_bool_QWebChannel_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? arg0->QWebChannel::event(arg1) : arg0->event(arg1);
}

bool qt_QWebChannel_eventFilter_bool_QWebChannel_QObject_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_watched, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    QObject * arg1 = object<QObject>(param_watched);
    QEvent * arg2 = getqpointer<QEventType>(param_event);
    return isMuQtObject(arg0) ? arg0->QWebChannel::eventFilter(arg1, arg2) : arg0->eventFilter(arg1, arg2);
}

void qt_QWebChannel_customEvent_void_QWebChannel_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QWebChannel*)arg0)->customEvent_pub_parent(arg1);
    else ((MuQt_QWebChannel*)arg0)->customEvent_pub(arg1);
}

void qt_QWebChannel_timerEvent_void_QWebChannel_QTimerEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebChannel* arg0 = object<QWebChannel>(param_this);
    QTimerEvent * arg1 = getqpointer<QTimerEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QWebChannel*)arg0)->timerEvent_pub_parent(arg1);
    else ((MuQt_QWebChannel*)arg0)->timerEvent_pub(arg1);
}


static NODE_IMPLEMENTATION(_n_QWebChannel0, Pointer)
{
    NODE_RETURN(qt_QWebChannel_QWebChannel_QWebChannel_QWebChannel_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_deregisterObject0, void)
{
    qt_QWebChannel_deregisterObject_void_QWebChannel_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_registerObject0, void)
{
    qt_QWebChannel_registerObject_void_QWebChannel_string_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QWebChannel_event_bool_QWebChannel_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
{
    NODE_RETURN(qt_QWebChannel_eventFilter_bool_QWebChannel_QObject_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_customEvent0, void)
{
    qt_QWebChannel_customEvent_void_QWebChannel_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_timerEvent0, void)
{
    qt_QWebChannel_timerEvent_void_QWebChannel_QTimerEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}



void
QWebChannelType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),


               new Function(c, tn, castFromObject, Cast,
                            Compiled, QWebChannel_QWebChannel_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "QWebChannel", _n_QWebChannel0, None, Compiled, qt_QWebChannel_QWebChannel_QWebChannel_QWebChannel_QObject, Return, "qt.QWebChannel", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "parent", "qt.QObject"), End),
    // PROP: blockUpdates (bool; QWebChannel this)
    new Function(c, "deregisterObject", _n_deregisterObject0, None, Compiled, qt_QWebChannel_deregisterObject_void_QWebChannel_QObject, Return, "void", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "object", "qt.QObject"), End),
    new Function(c, "registerObject", _n_registerObject0, None, Compiled, qt_QWebChannel_registerObject_void_QWebChannel_string_QObject, Return, "void", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "id", "string"), new Param(c, "object", "qt.QObject"), End),
    // MISSING: registerObjects (void; QWebChannel this, "const QHash<QString, QObject * > &" objects)
    // MISSING: registeredObjects ("QHash<QString, QObject * >"; QWebChannel this)
    // PROP: setBlockUpdates (void; QWebChannel this, bool block)
    _func[0] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QWebChannel_event_bool_QWebChannel_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "e", "qt.QEvent"), End),
    _func[1] = new MemberFunction(c, "eventFilter", _n_eventFilter0, None, Compiled, qt_QWebChannel_eventFilter_bool_QWebChannel_QObject_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "watched", "qt.QObject"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: metaObject ("const QMetaObject *"; QWebChannel this)
    // MISSING: childEvent (void; QWebChannel this, "QChildEvent *" event) // protected
    // MISSING: connectNotify (void; QWebChannel this, "const QMetaMethod &" signal) // protected
    _func[2] = new MemberFunction(c, "customEvent", _n_customEvent0, None, Compiled, qt_QWebChannel_customEvent_void_QWebChannel_QEvent, Return, "void", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: disconnectNotify (void; QWebChannel this, "const QMetaMethod &" signal) // protected
    _func[3] = new MemberFunction(c, "timerEvent", _n_timerEvent0, None, Compiled, qt_QWebChannel_timerEvent_void_QWebChannel_QTimerEvent, Return, "void", Parameters, new Param(c, "this", "qt.QWebChannel"), new Param(c, "event", "qt.QTimerEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QWebChannel::staticMetaObject, propExclusions);
}

} // Mu

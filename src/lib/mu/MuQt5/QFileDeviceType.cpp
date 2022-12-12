//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QFileDeviceType.h>
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

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QFileDevice::~MuQt_QFileDevice()
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

QString MuQt_QFileDevice::fileName() const
{
    if (!_env) return QFileDevice::fileName();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return qstring(rval._Pointer);
    }
    else
    {
        return QFileDevice::fileName();
    }
}

QFileDevice::Permissions MuQt_QFileDevice::permissions() const
{
    if (!_env) return QFileDevice::permissions();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (QFileDevice::Permission)(rval._int);
    }
    else
    {
        return QFileDevice::permissions();
    }
}

bool MuQt_QFileDevice::resize(qint64 sz) 
{
    if (!_env) return QFileDevice::resize(sz);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[2];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(sz);
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::resize(sz);
    }
}

bool MuQt_QFileDevice::setPermissions(QFileDevice::Permissions permissions) 
{
    if (!_env) return QFileDevice::setPermissions(permissions);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[3];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(int(permissions));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::setPermissions(permissions);
    }
}

bool MuQt_QFileDevice::atEnd() const
{
    if (!_env) return QFileDevice::atEnd();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[4];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::atEnd();
    }
}

void MuQt_QFileDevice::close() 
{
    if (!_env) { QFileDevice::close(); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[5];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
    }
    else
    {
        QFileDevice::close();
    }
}

bool MuQt_QFileDevice::isSequential() const
{
    if (!_env) return QFileDevice::isSequential();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[6];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::isSequential();
    }
}

qint64 MuQt_QFileDevice::pos() const
{
    if (!_env) return QFileDevice::pos();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[7];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (int64)(rval._int64);
    }
    else
    {
        return QFileDevice::pos();
    }
}

bool MuQt_QFileDevice::seek(qint64 pos) 
{
    if (!_env) return QFileDevice::seek(pos);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[8];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(pos);
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::seek(pos);
    }
}

qint64 MuQt_QFileDevice::size() const
{
    if (!_env) return QFileDevice::size();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[9];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (int64)(rval._int64);
    }
    else
    {
        return QFileDevice::size();
    }
}

qint64 MuQt_QFileDevice::bytesAvailable() const
{
    if (!_env) return QFileDevice::bytesAvailable();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[10];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (int64)(rval._int64);
    }
    else
    {
        return QFileDevice::bytesAvailable();
    }
}

qint64 MuQt_QFileDevice::bytesToWrite() const
{
    if (!_env) return QFileDevice::bytesToWrite();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[11];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (int64)(rval._int64);
    }
    else
    {
        return QFileDevice::bytesToWrite();
    }
}

bool MuQt_QFileDevice::canReadLine() const
{
    if (!_env) return QFileDevice::canReadLine();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[12];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::canReadLine();
    }
}

bool MuQt_QFileDevice::open(QIODevice::OpenMode mode) 
{
    if (!_env) return QFileDevice::open(mode);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[13];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(int(mode));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::open(mode);
    }
}

bool MuQt_QFileDevice::reset() 
{
    if (!_env) return QFileDevice::reset();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[14];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::reset();
    }
}

bool MuQt_QFileDevice::waitForBytesWritten(int msecs) 
{
    if (!_env) return QFileDevice::waitForBytesWritten(msecs);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[15];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(msecs);
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::waitForBytesWritten(msecs);
    }
}

bool MuQt_QFileDevice::waitForReadyRead(int msecs) 
{
    if (!_env) return QFileDevice::waitForReadyRead(msecs);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[16];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(msecs);
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QFileDevice::waitForReadyRead(msecs);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QFileDeviceType::QFileDeviceType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QFileDeviceType::~QFileDeviceType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QFileDevice_QFileDevice_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QFileDevice* w = object<QFileDevice>(widget))
    {
        QFileDeviceType* type = 
            c->findSymbolOfTypeByQualifiedName<QFileDeviceType>(c->internName("qt.QFileDevice"), false);
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
    NODE_RETURN( QFileDevice_QFileDevice_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

int qt_QFileDevice_error_int_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return int(arg0->error());
}

Pointer qt_QFileDevice_fileName_string_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? makestring(c,arg0->QFileDevice::fileName()) : makestring(c,arg0->fileName());
}

bool qt_QFileDevice_flush_bool_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return arg0->flush();
}

int qt_QFileDevice_handle_int_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return arg0->handle();
}

int qt_QFileDevice_permissions_int_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::permissions() : arg0->permissions();
}

bool qt_QFileDevice_resize_bool_QFileDevice_int64(Mu::Thread& NODE_THREAD, Pointer param_this, int64 param_sz)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    qint64 arg1 = (int64)(param_sz);
    return isMuQtObject(arg0) ? arg0->QFileDevice::resize(arg1) : arg0->resize(arg1);
}

bool qt_QFileDevice_setPermissions_bool_QFileDevice_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_permissions)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    QFileDevice::Permissions arg1 = (QFileDevice::Permissions)(param_permissions);
    return isMuQtObject(arg0) ? arg0->QFileDevice::setPermissions(arg1) : arg0->setPermissions(arg1);
}

void qt_QFileDevice_unsetError_void_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    arg0->unsetError();
}

bool qt_QFileDevice_atEnd_bool_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::atEnd() : arg0->atEnd();
}

void qt_QFileDevice_close_void_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    if (isMuQtObject(arg0)) arg0->QFileDevice::close();
    else arg0->close();
}

bool qt_QFileDevice_isSequential_bool_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::isSequential() : arg0->isSequential();
}

int64 qt_QFileDevice_pos_int64_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::pos() : arg0->pos();
}

bool qt_QFileDevice_seek_bool_QFileDevice_int64(Mu::Thread& NODE_THREAD, Pointer param_this, int64 param_pos)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    qint64 arg1 = (int64)(param_pos);
    return isMuQtObject(arg0) ? arg0->QFileDevice::seek(arg1) : arg0->seek(arg1);
}

int64 qt_QFileDevice_size_int64_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::size() : arg0->size();
}

int64 qt_QFileDevice_bytesAvailable_int64_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::bytesAvailable() : arg0->bytesAvailable();
}

int64 qt_QFileDevice_bytesToWrite_int64_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::bytesToWrite() : arg0->bytesToWrite();
}

bool qt_QFileDevice_canReadLine_bool_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::canReadLine() : arg0->canReadLine();
}

bool qt_QFileDevice_open_bool_QFileDevice_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_mode)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    QIODevice::OpenMode arg1 = (QIODevice::OpenMode)(param_mode);
    return isMuQtObject(arg0) ? arg0->QFileDevice::open(arg1) : arg0->open(arg1);
}

bool qt_QFileDevice_reset_bool_QFileDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    return isMuQtObject(arg0) ? arg0->QFileDevice::reset() : arg0->reset();
}

bool qt_QFileDevice_waitForBytesWritten_bool_QFileDevice_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    int arg1 = (int)(param_msecs);
    return isMuQtObject(arg0) ? arg0->QFileDevice::waitForBytesWritten(arg1) : arg0->waitForBytesWritten(arg1);
}

bool qt_QFileDevice_waitForReadyRead_bool_QFileDevice_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileDevice* arg0 = object<QFileDevice>(param_this);
    int arg1 = (int)(param_msecs);
    return isMuQtObject(arg0) ? arg0->QFileDevice::waitForReadyRead(arg1) : arg0->waitForReadyRead(arg1);
}


static NODE_IMPLEMENTATION(_n_error0, int)
{
    NODE_RETURN(qt_QFileDevice_error_int_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_fileName0, Pointer)
{
    NODE_RETURN(qt_QFileDevice_fileName_string_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_flush0, bool)
{
    NODE_RETURN(qt_QFileDevice_flush_bool_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_handle0, int)
{
    NODE_RETURN(qt_QFileDevice_handle_int_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_permissions0, int)
{
    NODE_RETURN(qt_QFileDevice_permissions_int_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_resize0, bool)
{
    NODE_RETURN(qt_QFileDevice_resize_bool_QFileDevice_int64(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int64)));
}

static NODE_IMPLEMENTATION(_n_setPermissions0, bool)
{
    NODE_RETURN(qt_QFileDevice_setPermissions_bool_QFileDevice_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_unsetError0, void)
{
    qt_QFileDevice_unsetError_void_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_atEnd0, bool)
{
    NODE_RETURN(qt_QFileDevice_atEnd_bool_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_close0, void)
{
    qt_QFileDevice_close_void_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_isSequential0, bool)
{
    NODE_RETURN(qt_QFileDevice_isSequential_bool_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_pos0, int64)
{
    NODE_RETURN(qt_QFileDevice_pos_int64_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_seek0, bool)
{
    NODE_RETURN(qt_QFileDevice_seek_bool_QFileDevice_int64(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int64)));
}

static NODE_IMPLEMENTATION(_n_size0, int64)
{
    NODE_RETURN(qt_QFileDevice_size_int64_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_bytesAvailable0, int64)
{
    NODE_RETURN(qt_QFileDevice_bytesAvailable_int64_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_bytesToWrite0, int64)
{
    NODE_RETURN(qt_QFileDevice_bytesToWrite_int64_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_canReadLine0, bool)
{
    NODE_RETURN(qt_QFileDevice_canReadLine_bool_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_open0, bool)
{
    NODE_RETURN(qt_QFileDevice_open_bool_QFileDevice_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_reset0, bool)
{
    NODE_RETURN(qt_QFileDevice_reset_bool_QFileDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_waitForBytesWritten0, bool)
{
    NODE_RETURN(qt_QFileDevice_waitForBytesWritten_bool_QFileDevice_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_waitForReadyRead0, bool)
{
    NODE_RETURN(qt_QFileDevice_waitForReadyRead_bool_QFileDevice_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}



void
QFileDeviceType::load()
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
                            Compiled, QFileDevice_QFileDevice_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    new Alias(c, "FileError", "int"),
      new SymbolicConstant(c, "NoError", "int", Value(int(QFileDevice::NoError))),
      new SymbolicConstant(c, "ReadError", "int", Value(int(QFileDevice::ReadError))),
      new SymbolicConstant(c, "WriteError", "int", Value(int(QFileDevice::WriteError))),
      new SymbolicConstant(c, "FatalError", "int", Value(int(QFileDevice::FatalError))),
      new SymbolicConstant(c, "ResourceError", "int", Value(int(QFileDevice::ResourceError))),
      new SymbolicConstant(c, "OpenError", "int", Value(int(QFileDevice::OpenError))),
      new SymbolicConstant(c, "AbortError", "int", Value(int(QFileDevice::AbortError))),
      new SymbolicConstant(c, "TimeOutError", "int", Value(int(QFileDevice::TimeOutError))),
      new SymbolicConstant(c, "UnspecifiedError", "int", Value(int(QFileDevice::UnspecifiedError))),
      new SymbolicConstant(c, "RemoveError", "int", Value(int(QFileDevice::RemoveError))),
      new SymbolicConstant(c, "RenameError", "int", Value(int(QFileDevice::RenameError))),
      new SymbolicConstant(c, "PositionError", "int", Value(int(QFileDevice::PositionError))),
      new SymbolicConstant(c, "ResizeError", "int", Value(int(QFileDevice::ResizeError))),
      new SymbolicConstant(c, "PermissionsError", "int", Value(int(QFileDevice::PermissionsError))),
      new SymbolicConstant(c, "CopyError", "int", Value(int(QFileDevice::CopyError))),
    new Alias(c, "FileHandleFlag", "int"),
    new Alias(c, "FileHandleFlags", "int"),
      new SymbolicConstant(c, "AutoCloseHandle", "int", Value(int(QFileDevice::AutoCloseHandle))),
      new SymbolicConstant(c, "DontCloseHandle", "int", Value(int(QFileDevice::DontCloseHandle))),
    new Alias(c, "MemoryMapFlags", "int"),
      new SymbolicConstant(c, "NoOptions", "int", Value(int(QFileDevice::NoOptions))),
      new SymbolicConstant(c, "MapPrivateOption", "int", Value(int(QFileDevice::MapPrivateOption))),
    new Alias(c, "Permission", "int"),
    new Alias(c, "Permissions", "int"),
      new SymbolicConstant(c, "ReadOwner", "int", Value(int(QFileDevice::ReadOwner))),
      new SymbolicConstant(c, "WriteOwner", "int", Value(int(QFileDevice::WriteOwner))),
      new SymbolicConstant(c, "ExeOwner", "int", Value(int(QFileDevice::ExeOwner))),
      new SymbolicConstant(c, "ReadUser", "int", Value(int(QFileDevice::ReadUser))),
      new SymbolicConstant(c, "WriteUser", "int", Value(int(QFileDevice::WriteUser))),
      new SymbolicConstant(c, "ExeUser", "int", Value(int(QFileDevice::ExeUser))),
      new SymbolicConstant(c, "ReadGroup", "int", Value(int(QFileDevice::ReadGroup))),
      new SymbolicConstant(c, "WriteGroup", "int", Value(int(QFileDevice::WriteGroup))),
      new SymbolicConstant(c, "ExeGroup", "int", Value(int(QFileDevice::ExeGroup))),
      new SymbolicConstant(c, "ReadOther", "int", Value(int(QFileDevice::ReadOther))),
      new SymbolicConstant(c, "WriteOther", "int", Value(int(QFileDevice::WriteOther))),
      new SymbolicConstant(c, "ExeOther", "int", Value(int(QFileDevice::ExeOther))),
    // member functions
    new Function(c, "error", _n_error0, None, Compiled, qt_QFileDevice_error_int_QFileDevice, Return, "int", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[0] = new MemberFunction(c, "fileName", _n_fileName0, None, Compiled, qt_QFileDevice_fileName_string_QFileDevice, Return, "string", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    new Function(c, "flush", _n_flush0, None, Compiled, qt_QFileDevice_flush_bool_QFileDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    new Function(c, "handle", _n_handle0, None, Compiled, qt_QFileDevice_handle_int_QFileDevice, Return, "int", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    // MISSING: map ("uchar *"; QFileDevice this, int64 offset, int64 size, flags QFileDevice::MemoryMapFlags flags)
    _func[1] = new MemberFunction(c, "permissions", _n_permissions0, None, Compiled, qt_QFileDevice_permissions_int_QFileDevice, Return, "int", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[2] = new MemberFunction(c, "resize", _n_resize0, None, Compiled, qt_QFileDevice_resize_bool_QFileDevice_int64, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "sz", "int64"), End),
    _func[3] = new MemberFunction(c, "setPermissions", _n_setPermissions0, None, Compiled, qt_QFileDevice_setPermissions_bool_QFileDevice_int, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "permissions", "int"), End),
    // MISSING: unmap (bool; QFileDevice this, "uchar *" address)
    new Function(c, "unsetError", _n_unsetError0, None, Compiled, qt_QFileDevice_unsetError_void_QFileDevice, Return, "void", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[4] = new MemberFunction(c, "atEnd", _n_atEnd0, None, Compiled, qt_QFileDevice_atEnd_bool_QFileDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[5] = new MemberFunction(c, "close", _n_close0, None, Compiled, qt_QFileDevice_close_void_QFileDevice, Return, "void", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[6] = new MemberFunction(c, "isSequential", _n_isSequential0, None, Compiled, qt_QFileDevice_isSequential_bool_QFileDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[7] = new MemberFunction(c, "pos", _n_pos0, None, Compiled, qt_QFileDevice_pos_int64_QFileDevice, Return, "int64", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[8] = new MemberFunction(c, "seek", _n_seek0, None, Compiled, qt_QFileDevice_seek_bool_QFileDevice_int64, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "pos", "int64"), End),
    _func[9] = new MemberFunction(c, "size", _n_size0, None, Compiled, qt_QFileDevice_size_int64_QFileDevice, Return, "int64", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    // MISSING: readData (int64; QFileDevice this, "char *" data, int64 len) // protected
    // MISSING: readLineData (int64; QFileDevice this, "char *" data, int64 maxlen) // protected
    // MISSING: writeData (int64; QFileDevice this, "const char *" data, int64 len) // protected
    _func[10] = new MemberFunction(c, "bytesAvailable", _n_bytesAvailable0, None, Compiled, qt_QFileDevice_bytesAvailable_int64_QFileDevice, Return, "int64", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[11] = new MemberFunction(c, "bytesToWrite", _n_bytesToWrite0, None, Compiled, qt_QFileDevice_bytesToWrite_int64_QFileDevice, Return, "int64", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[12] = new MemberFunction(c, "canReadLine", _n_canReadLine0, None, Compiled, qt_QFileDevice_canReadLine_bool_QFileDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[13] = new MemberFunction(c, "open", _n_open0, None, Compiled, qt_QFileDevice_open_bool_QFileDevice_int, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "mode", "int"), End),
    _func[14] = new MemberFunction(c, "reset", _n_reset0, None, Compiled, qt_QFileDevice_reset_bool_QFileDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), End),
    _func[15] = new MemberFunction(c, "waitForBytesWritten", _n_waitForBytesWritten0, None, Compiled, qt_QFileDevice_waitForBytesWritten_bool_QFileDevice_int, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "msecs", "int"), End),
    _func[16] = new MemberFunction(c, "waitForReadyRead", _n_waitForReadyRead0, None, Compiled, qt_QFileDevice_waitForReadyRead_bool_QFileDevice_int, Return, "bool", Parameters, new Param(c, "this", "qt.QFileDevice"), new Param(c, "msecs", "int"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QFileDevice::staticMetaObject, propExclusions);
}

} // Mu

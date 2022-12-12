//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QPaintDeviceType.h>
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
MuQt_QPaintDevice::~MuQt_QPaintDevice()
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

MuQt_QPaintDevice::MuQt_QPaintDevice(Pointer muobj, const CallEnvironment* ce) 
 : QPaintDevice()
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QPaintDeviceType>(c->internName("qt.QPaintDevice"));
}

int MuQt_QPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric_) const
{
    if (!_env) return QPaintDevice::metric(metric_);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(int(metric_));
        Value rval = _env->call(F, args);
        return (int)(rval._int);
    }
    else
    {
        return QPaintDevice::metric(metric_);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QPaintDeviceType::QPaintDeviceType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QPaintDeviceType::~QPaintDeviceType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QPaintDevice_QPaintDevice_QLayoutItem(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* item = reinterpret_cast<ClassInstance*>(obj);

    if (!item)
    {
        return 0;
    }
    else if (QPaintDevice* i = layoutitem<QPaintDevice>(item))
    {
        QPaintDeviceType* type = 
            c->findSymbolOfTypeByQualifiedName<QPaintDeviceType>(c->internName("qt.QPaintDevice"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setpaintdevice(o, i);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromLayoutItem, Pointer)
{
    NODE_RETURN( QPaintDevice_QPaintDevice_QLayoutItem(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

int qt_QPaintDevice_colorCount_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->colorCount();
}

int qt_QPaintDevice_depth_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->depth();
}

int qt_QPaintDevice_devicePixelRatio_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->devicePixelRatio();
}

double qt_QPaintDevice_devicePixelRatioF_double_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->devicePixelRatioF();
}

int qt_QPaintDevice_height_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->height();
}

int qt_QPaintDevice_heightMM_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->heightMM();
}

int qt_QPaintDevice_logicalDpiX_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->logicalDpiX();
}

int qt_QPaintDevice_logicalDpiY_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->logicalDpiY();
}

bool qt_QPaintDevice_paintingActive_bool_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->paintingActive();
}

int qt_QPaintDevice_physicalDpiX_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->physicalDpiX();
}

int qt_QPaintDevice_physicalDpiY_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->physicalDpiY();
}

int qt_QPaintDevice_width_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->width();
}

int qt_QPaintDevice_widthMM_int_QPaintDevice(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    return arg0->widthMM();
}

// NO FUNC: CONSTRUCTOR IS PROTECTED: QPaintDevice (QPaintDevice; QPaintDevice this) // protected
int qt_QPaintDevice_metric_int_QPaintDevice_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_metric_)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QPaintDevice* arg0 = paintdevice<QPaintDevice>(param_this);
    QPaintDevice::PaintDeviceMetric arg1 = (QPaintDevice::PaintDeviceMetric)(param_metric_);
    return isMuQtPaintDevice(arg0) ? ((MuQt_QPaintDevice*)arg0)->metric_pub_parent(arg1) : ((MuQt_QPaintDevice*)arg0)->metric_pub(arg1);
}


static NODE_IMPLEMENTATION(_n_colorCount0, int)
{
    NODE_RETURN(qt_QPaintDevice_colorCount_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_depth0, int)
{
    NODE_RETURN(qt_QPaintDevice_depth_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_devicePixelRatio0, int)
{
    NODE_RETURN(qt_QPaintDevice_devicePixelRatio_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_devicePixelRatioF0, double)
{
    NODE_RETURN(qt_QPaintDevice_devicePixelRatioF_double_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_height0, int)
{
    NODE_RETURN(qt_QPaintDevice_height_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_heightMM0, int)
{
    NODE_RETURN(qt_QPaintDevice_heightMM_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_logicalDpiX0, int)
{
    NODE_RETURN(qt_QPaintDevice_logicalDpiX_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_logicalDpiY0, int)
{
    NODE_RETURN(qt_QPaintDevice_logicalDpiY_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_paintingActive0, bool)
{
    NODE_RETURN(qt_QPaintDevice_paintingActive_bool_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_physicalDpiX0, int)
{
    NODE_RETURN(qt_QPaintDevice_physicalDpiX_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_physicalDpiY0, int)
{
    NODE_RETURN(qt_QPaintDevice_physicalDpiY_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_width0, int)
{
    NODE_RETURN(qt_QPaintDevice_width_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_widthMM0, int)
{
    NODE_RETURN(qt_QPaintDevice_widthMM_int_QPaintDevice(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

// NO NODE: CONSTRUCTOR IS PROTECTED: QPaintDevice (QPaintDevice; QPaintDevice this) // protected
static NODE_IMPLEMENTATION(_n_metric0, int)
{
    NODE_RETURN(qt_QPaintDevice_metric_int_QPaintDevice_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}



void
QPaintDeviceType::load()
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


               new Function(c, tn, castFromLayoutItem, Cast,
                            Compiled, QPaintDevice_QPaintDevice_QLayoutItem,
                            Return, ftn,
                            Parameters,
                            new Param(c, "layoutItem", "qt.QLayoutItem"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "colorCount", _n_colorCount0, None, Compiled, qt_QPaintDevice_colorCount_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "depth", _n_depth0, None, Compiled, qt_QPaintDevice_depth_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "devicePixelRatio", _n_devicePixelRatio0, None, Compiled, qt_QPaintDevice_devicePixelRatio_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "devicePixelRatioF", _n_devicePixelRatioF0, None, Compiled, qt_QPaintDevice_devicePixelRatioF_double_QPaintDevice, Return, "double", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "height", _n_height0, None, Compiled, qt_QPaintDevice_height_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "heightMM", _n_heightMM0, None, Compiled, qt_QPaintDevice_heightMM_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "logicalDpiX", _n_logicalDpiX0, None, Compiled, qt_QPaintDevice_logicalDpiX_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "logicalDpiY", _n_logicalDpiY0, None, Compiled, qt_QPaintDevice_logicalDpiY_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    // MISSING: paintEngine ("QPaintEngine *"; QPaintDevice this)
    new Function(c, "paintingActive", _n_paintingActive0, None, Compiled, qt_QPaintDevice_paintingActive_bool_QPaintDevice, Return, "bool", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "physicalDpiX", _n_physicalDpiX0, None, Compiled, qt_QPaintDevice_physicalDpiX_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "physicalDpiY", _n_physicalDpiY0, None, Compiled, qt_QPaintDevice_physicalDpiY_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "width", _n_width0, None, Compiled, qt_QPaintDevice_width_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    new Function(c, "widthMM", _n_widthMM0, None, Compiled, qt_QPaintDevice_widthMM_int_QPaintDevice, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), End),
    // CONSTRUCTOR IS PROTECTED: QPaintDevice (QPaintDevice; QPaintDevice this) // protected
    _func[0] = new MemberFunction(c, "metric", _n_metric0, None, Compiled, qt_QPaintDevice_metric_int_QPaintDevice_int, Return, "int", Parameters, new Param(c, "this", "qt.QPaintDevice"), new Param(c, "metric_", "int"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);

}

} // Mu

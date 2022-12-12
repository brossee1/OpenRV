//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QKeyEventType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
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

QKeyEventType::QKeyEventType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QKeyEventType::~QKeyEventType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

int qt_QKeyEvent_count_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->count();
}

bool qt_QKeyEvent_isAutoRepeat_bool_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->isAutoRepeat();
}

int qt_QKeyEvent_key_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->key();
}

bool qt_QKeyEvent_matches_bool_QKeyEvent_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_key)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    QKeySequence::StandardKey arg1 = (QKeySequence::StandardKey)(param_key);
    return arg0->matches(arg1);
}

int qt_QKeyEvent_modifiers_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return int(arg0->modifiers());
}

int qt_QKeyEvent_nativeModifiers_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->nativeModifiers();
}

int qt_QKeyEvent_nativeScanCode_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->nativeScanCode();
}

int qt_QKeyEvent_nativeVirtualKey_int_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return arg0->nativeVirtualKey();
}

Pointer qt_QKeyEvent_text_string_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QKeyEvent * arg0 = getqpointer<QKeyEventType>(param_this);
    return makestring(c,arg0->text());
}


static NODE_IMPLEMENTATION(_n_count0, int)
{
    NODE_RETURN(qt_QKeyEvent_count_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isAutoRepeat0, bool)
{
    NODE_RETURN(qt_QKeyEvent_isAutoRepeat_bool_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_key0, int)
{
    NODE_RETURN(qt_QKeyEvent_key_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_matches0, bool)
{
    NODE_RETURN(qt_QKeyEvent_matches_bool_QKeyEvent_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_modifiers0, int)
{
    NODE_RETURN(qt_QKeyEvent_modifiers_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_nativeModifiers0, int)
{
    NODE_RETURN(qt_QKeyEvent_nativeModifiers_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_nativeScanCode0, int)
{
    NODE_RETURN(qt_QKeyEvent_nativeScanCode_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_nativeVirtualKey0, int)
{
    NODE_RETURN(qt_QKeyEvent_nativeVirtualKey_int_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_text0, Pointer)
{
    NODE_RETURN(qt_QKeyEvent_text_string_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}



void
QKeyEventType::load()
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

               new MemberVariable(c, "native", "qt.NativeObject"),

               EndArguments );


addSymbols(
    EndArguments);

addSymbols(
    // enums
    // member functions
    // MISSING: QKeyEvent (QKeyEvent; QKeyEvent this, "Type" type, int key, flags Qt::KeyboardModifiers modifiers, string text, bool autorep, "ushort" count)
    // MISSING: QKeyEvent (QKeyEvent; QKeyEvent this, "Type" type, int key, flags Qt::KeyboardModifiers modifiers, int nativeScanCode, int nativeVirtualKey, int nativeModifiers, string text, bool autorep, "ushort" count)
    new Function(c, "count", _n_count0, None, Compiled, qt_QKeyEvent_count_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "isAutoRepeat", _n_isAutoRepeat0, None, Compiled, qt_QKeyEvent_isAutoRepeat_bool_QKeyEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "key", _n_key0, None, Compiled, qt_QKeyEvent_key_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "matches", _n_matches0, None, Compiled, qt_QKeyEvent_matches_bool_QKeyEvent_int, Return, "bool", Parameters, new Param(c, "this", "qt.QKeyEvent"), new Param(c, "key", "int"), End),
    new Function(c, "modifiers", _n_modifiers0, None, Compiled, qt_QKeyEvent_modifiers_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "nativeModifiers", _n_nativeModifiers0, None, Compiled, qt_QKeyEvent_nativeModifiers_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "nativeScanCode", _n_nativeScanCode0, None, Compiled, qt_QKeyEvent_nativeScanCode_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "nativeVirtualKey", _n_nativeVirtualKey0, None, Compiled, qt_QKeyEvent_nativeVirtualKey_int_QKeyEvent, Return, "int", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    new Function(c, "text", _n_text0, None, Compiled, qt_QKeyEvent_text_string_QKeyEvent, Return, "string", Parameters, new Param(c, "this", "qt.QKeyEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);

}

} // Mu

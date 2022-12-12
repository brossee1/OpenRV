//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QHoverEventType__h__
#define __MuQt5__QHoverEventType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QHoverEventType : public Class
{
  public:
    //
    //  Types
    //

    typedef QHoverEvent ValueType;

    struct Struct
    {
        QHoverEvent* object;
    };

    //
    //  Constructors
    //

    QHoverEventType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QHoverEventType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QHoverEventType__h__

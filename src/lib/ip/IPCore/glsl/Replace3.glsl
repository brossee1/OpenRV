//
// Copyright (C) 2023  Autodesk, Inc. All Rights Reserved. 
// 
// SPDX-License-Identifier: Apache-2.0 
//
//
//  Premultiplied Over 
//

vec4 main(const in vec4 i0, const in vec4 i1, const in vec4 i2)
{
    vec4 c = i0;

    if (i0.a == -1.0) 
        c = i1;

    if (i1.a == -1.0)
        c = i2;

    return c;
}

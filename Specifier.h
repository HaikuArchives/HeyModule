// Specifier
//
// The Specifier object is used by heymodule to target specific properties
// of an application.
//
// Copyright © 1998 Chris Herborth (chrish@kagi.com)
//                  Arcane Dragon Software
//
// Chris has ok'd this to be released under the Zlib License:
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:

// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//
// $Id: Specifier.h,v 1.1.1.1 1999/06/08 12:49:38 chrish Exp $

#ifndef PyHey_Specifier_H
#define PyHey_Specifier_H

#include "Python.h"

#include <app/Message.h>

// The object:
typedef struct {
	PyObject_HEAD
	BMessage *msg;
} SpecifierObject;

// The object's type:
extern PyTypeObject Specifier_Type;

// Macro for checking the type:
#define SpecifierObject_Check(v) ((v)->ob_type == &Specifier_Type)

// Methods you can use.
SpecifierObject *newSpecifierObject( PyObject *arg );

#endif

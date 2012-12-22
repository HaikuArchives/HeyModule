// Hey
//
// The Hey object is used by heymodule to exchange scripting messages
// with an application.
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
// $Id: Hey.h,v 1.1.1.1 1999/06/08 12:49:37 chrish Exp $

#ifndef PyHey_Hey_H
#define PyHey_Hey_H

#include "Python.h"

#include <app/Messenger.h>

// The object:
typedef struct {
	PyObject_HEAD
	BMessenger *target;
} HeyObject;

// The object's type:
extern PyTypeObject Hey_Type;

// Macro for checking the type:
#define HeyObject_Check(v)	((v)->ob_type == &Hey_Type)

// Methods you can use.
HeyObject *newHeyObject( PyObject *arg );

#endif

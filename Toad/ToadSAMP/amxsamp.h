/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*/

#pragma once

#include "amx.h"
#include "getch.h"
#include "plugincommon.h"
//#include "sclinux.h"

char* _amx_GetString(AMX *amx, const cell str, char *dest, int size);//BY Mk124
cell amx_CallNativeFunc(AMX *amx, const char * funcName, const char * typeList, ...);

extern AMX *gAMX;
extern void *pAMXFunctions;
extern AMX_NATIVE_INFO RegisterCallBack[];
#pragma once

#include <string.h>
#include <stdarg.h>

#include "amx.h"
#include "getch.h"
#include "plugincommon.h"
//#include "sclinux.h"

void (*printfln)(char* format, ...);
char* _amx_GetString(AMX *amx, const cell str, char *dest, int size);//BY Mk124
cell amx_CallNativeFunc(AMX *amx, const char * funcName, const char * typeList, ...);
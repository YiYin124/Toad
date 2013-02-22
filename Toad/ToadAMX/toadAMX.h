#pragma once

#include <string.h>
#include <stdarg.h>

#include "amx.h"
#include "getch.h"
#include "plugincommon.h"
//#include "sclinux.h"

cell amx_CallNativeFunc(AMX *amx, const char * funcName, const char * typeList, ...);
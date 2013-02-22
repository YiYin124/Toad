#include "toadSAMP.h"

int println(const char string[])
{
	return amx_CallNativeFunc(gAMX, "print", "s", string);
}

int DisableInteriorEnterExits()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
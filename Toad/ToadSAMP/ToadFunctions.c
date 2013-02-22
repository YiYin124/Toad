#include "toadSAMP.h"

int print(const char string[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", string);
}
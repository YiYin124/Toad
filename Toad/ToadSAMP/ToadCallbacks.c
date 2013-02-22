#include "toadSAMP.h"

static cell AMX_NATIVE_CALL ToadOnGameModeInit(AMX *amx, const cell *params)
{
	return OnGameModeInit();
}

AMX_NATIVE_INFO PluginNatives[] =
{
	{"ToadOnGameModeInit", ToadOnGameModeInit},
	{NULL, NULL}
};
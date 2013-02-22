#include "toadSAMP.h"

AMX *gAMX = NULL;
void (*printf)(char* format, ...);

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT int PLUGIN_CALL Load(void **ppData) 
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	printf = (void (*)(char*, ...))ppData[PLUGIN_DATA_LOGPRINTF];

	printf(" * Toad plugin was loaded.");
	OnLoadPlugin();
	return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	printf(" * Toad plugin was unloaded.");
	OnUnloadPlugin();
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad( AMX *amx ) 
{
	if (amx_Register(amx, PluginNatives, -1) == AMX_ERR_NOTFOUND)
		printf("[ERR] 'AMX_ERR_NOTFOUND'");
	gAMX = amx;
	return AMX_ERR_NONE;
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload( AMX *amx ) 
{
	return AMX_ERR_NONE;
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick()
{
	OnProcessTick();
}
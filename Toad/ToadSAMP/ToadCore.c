#include "toadSAMP.h"

AMX *gAMX = NULL;

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT int PLUGIN_CALL Load(void **ppData) 
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	printfln = (void (*)(char*, ...))ppData[PLUGIN_DATA_LOGPRINTF];
	return OnLoadPlugin();
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	OnUnloadPlugin();
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad( AMX *amx ) 
{
	int index;
	if (amx_FindPublic(amx, "OnRegisterFunctions", &index) == AMX_ERR_NOTFOUND)
	{
		printfln("['ToadGM.pwn'ERR] 'AMX_ERR_NOTFOUND'");
		return AMX_ERR_NOTFOUND;
	}

	if (amx_Register(amx, PluginNatives, -1) == AMX_ERR_NOTFOUND)
	{
		printfln("['Native'ERR] 'AMX_ERR_NOTFOUND'");
		return AMX_ERR_NOTFOUND;
	}
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
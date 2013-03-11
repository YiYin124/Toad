/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#include "amxsamp.h"
#include "core.h"
#include "../Y_List/y_list.h"

extern int InitEventPool();

AMX *gAMX = NULL;

samp_printf sampprintf;

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT int PLUGIN_CALL Load(void **ppData) 
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	sampprintf = (samp_printf)ppData[PLUGIN_DATA_LOGPRINTF];
	if (InitEventPool() == -1)
	{
		sampprintf("['Event Pool'ERR] 'Init'");
	}
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
		sampprintf("['OnRegisterFunctions'ERR] 'AMX_ERR_NOTFOUND'");
		return AMX_ERR_NOTFOUND;
	}

	if (amx_Register(amx, RegisterCallBack, -1) == AMX_ERR_NOTFOUND)
	{
		sampprintf("['GMCallBack'ERR] 'AMX_ERR_NOTFOUND'");
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
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

#include "toadSAMP.h"
#include "a_toad.h"

AMX_NATIVE_INFO ToadCallBack[1024];

AMX *gAMX = NULL;
void (*printfln)(char* format, ...);

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
		printfln("['OnRegisterFunctions'ERR] 'AMX_ERR_NOTFOUND'");
		return AMX_ERR_NOTFOUND;
	}

	if (amx_Register(amx, GMCallBack, -1) == AMX_ERR_NOTFOUND)
	{
		printfln("['GMCallBack'ERR] 'AMX_ERR_NOTFOUND'");
		return AMX_ERR_NOTFOUND;
	}
	//if (amx_Register(amx, NPCCallBack, -1) == AMX_ERR_NOTFOUND)
	//{
	//	printfln("['NPCCallBack'ERR] 'AMX_ERR_NOTFOUND'");
	//	return AMX_ERR_NOTFOUND;
	//}
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
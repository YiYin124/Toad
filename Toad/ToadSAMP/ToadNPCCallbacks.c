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

#include "a_npc.h"
#include "toadSAMP.h"

static cell AMX_NATIVE_CALL NPC_OnNPCModeInit(AMX *amx, const cell *params)
{
	return OnNPCModeInit();
}

static cell AMX_NATIVE_CALL NPC_OnNPCModeExit(AMX *amx, const cell *params)
{
	return OnNPCModeExit();
}

static cell AMX_NATIVE_CALL NPC_OnNPCConnect(AMX *amx, const cell *params)
{
	return OnNPCConnect(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnNPCDisconnect(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[1], text, sizeof(text));
	return OnNPCDisconnect(text);
}

static cell AMX_NATIVE_CALL NPC_OnNPCSpawn(AMX *amx, const cell *params)
{
	return OnNPCSpawn();
}

static cell AMX_NATIVE_CALL NPC_OnNPCEnterVehicle(AMX *amx, const cell *params)
{
	return OnNPCEnterVehicle(params[1], params[2]);
}

static cell AMX_NATIVE_CALL NPC_OnNPCExitVehicle(AMX *amx, const cell *params)
{
	return OnNPCExitVehicle();
}

static cell AMX_NATIVE_CALL NPC_OnClientMessage(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnClientMessage(params[1], text);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerDeath(AMX *amx, const cell *params)
{
	return OnPlayerDeath(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnPlayerText(params[1], text);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerStreamIn(AMX *amx, const cell *params)
{
	return OnPlayerStreamIn(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerStreamOut(AMX *amx, const cell *params)
{
	return OnPlayerStreamOut(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnVehicleStreamIn(AMX *amx, const cell *params)
{
	return OnVehicleStreamIn(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnVehicleStreamOut(AMX *amx, const cell *params)
{
	return OnVehicleStreamOut(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnRecordingPlaybackEnd(AMX *amx, const cell *params)
{
	return OnRecordingPlaybackEnd();
}

AMX_NATIVE_INFO NPCCallBack[] = 
{
	{"NPC_OnNPCModeInit",						NPC_OnNPCModeInit			},
	{"NPC_OnNPCModeExit",						NPC_OnNPCModeExit			},
	{"NPC_OnNPCConnect",						NPC_OnNPCConnect			},
	{"NPC_OnNPCDisconnect",						NPC_OnNPCDisconnect			},
	{"NPC_OnNPCSpawn",							NPC_OnNPCSpawn				},
	{"NPC_OnNPCEnterVehicle",					NPC_OnNPCEnterVehicle		},
	{"NPC_OnNPCExitVehicle",					NPC_OnNPCExitVehicle		},
	{"NPC_OnClientMessage",						NPC_OnClientMessage			},
	{"NPC_OnPlayerDeath",						NPC_OnPlayerDeath			},
	{"NPC_OnPlayerText",						NPC_OnPlayerText			},
	{"NPC_OnPlayerStreamIn",					NPC_OnPlayerStreamIn		},
	{"NPC_OnPlayerStreamOut",					NPC_OnPlayerStreamOut		},
	{"NPC_OnVehicleStreamIn",					NPC_OnVehicleStreamIn		},
	{"NPC_OnVehicleStreamOut",					NPC_OnVehicleStreamOut		},
	{"NPC_OnRecordingPlaybackEnd",				NPC_OnRecordingPlaybackEnd	},
	{NULL,										NULL						},
};
#include "a_samp.h"
#include "toadSAMP.h"

static cell AMX_NATIVE_CALL FS_OnFilterScriptInit(AMX *amx, const cell *params)
{
	return OnFilterScriptInit();
}

static cell AMX_NATIVE_CALL FS_OnFilterScriptExit(AMX *amx, const cell *params)
{
	return OnFilterScriptExit();
}

static cell AMX_NATIVE_CALL FS_OnRconCommand(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[1], text, sizeof(text));
	return OnRconCommand(text);
}

static cell AMX_NATIVE_CALL GM_OnGameModeInit(AMX *amx, const cell *params)
{
	return OnGameModeInit();
}

static cell AMX_NATIVE_CALL GM_OnGameModeExit(AMX *amx, const cell *params)
{
	return OnGameModeExit();
}

static cell AMX_NATIVE_CALL GM_OnPlayerConnect(AMX *amx, const cell *params)
{
	return OnPlayerConnect(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerDisconnect(AMX *amx, const cell *params)
{
	return OnPlayerDisconnect(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerSpawn(AMX *amx, const cell *params)
{
	return OnPlayerSpawn(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerDeath(AMX *amx, const cell *params)
{
	return OnPlayerDeath(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleSpawn(AMX *amx, const cell *params)
{
	return OnVehicleSpawn(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleDeath(AMX *amx, const cell *params)
{
	return OnVehicleDeath(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnPlayerText(params[1], text);
}

static cell AMX_NATIVE_CALL GM_OnPlayerCommandText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnPlayerCommandText(params[1], text);
}

static cell AMX_NATIVE_CALL GM_OnPlayerRequestClass(AMX *amx, const cell *params)
{
	return OnPlayerRequestClass(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterVehicle(AMX *amx, const cell *params)
{
	return OnPlayerEnterVehicle(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerExitVehicle(AMX *amx, const cell *params)
{
	return OnPlayerExitVehicle(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStateChange(AMX *amx, const cell *params)
{
	return OnPlayerStateChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterCheckpoint(AMX *amx, const cell *params)
{
	return OnPlayerEnterCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerLeaveCheckpoint(AMX *amx, const cell *params)
{
	return OnPlayerLeaveCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterRaceCheckpoint(AMX *amx, const cell *params)
{
	return OnPlayerEnterRaceCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerLeaveRaceCheckpoint(AMX *amx, const cell *params)
{
	return OnPlayerLeaveRaceCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerRequestSpawn(AMX *amx, const cell *params)
{
	return OnPlayerRequestClass(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnObjectMoved(AMX *amx, const cell *params)
{
	return OnObjectMoved(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerObjectMoved(AMX *amx, const cell *params)
{
	return OnPlayerObjectMoved(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerPickUpPickup(AMX *amx, const cell *params)
{
	return OnPlayerPickUpPickup(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleMod(AMX *amx, const cell *params)
{
	return OnVehicleMod(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnEnterExitModShop(AMX *amx, const cell *params)
{
	return OnEnterExitModShop(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehiclePaintjob(AMX *amx, const cell *params)
{
	return OnVehiclePaintjob(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleRespray(AMX *amx, const cell *params)
{
	return OnVehicleRespray(params[1], params[2], params[3], params[4]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleDamageStatusUpdate(AMX *amx, const cell *params)
{
	return OnVehicleDamageStatusUpdate(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnUnoccupiedVehicleUpdate(AMX *amx, const cell *params)
{
	return OnUnoccupiedVehicleUpdate(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerSelectedMenuRow(AMX *amx, const cell *params)
{
	return OnPlayerSelectedMenuRow(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerExitedMenu(AMX *amx, const cell *params)
{
	return OnPlayerExitedMenu(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerInteriorChange(AMX *amx, const cell *params)
{
	return OnPlayerInteriorChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerKeyStateChange(AMX *amx, const cell *params)
{
	return OnPlayerKeyStateChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnRconLoginAttempt(AMX *amx, const cell *params)
{
	char ip[1024], password[1024];
	_amx_GetString(amx, params[1], ip, sizeof(ip));
	_amx_GetString(amx, params[2], password, sizeof(password));
	return OnRconLoginAttempt(ip, password, params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerUpdate(AMX *amx, const cell *params)
{
	return OnPlayerUpdate(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStreamIn(AMX *amx, const cell *params)
{
	return OnPlayerStreamIn(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStreamOut(AMX *amx, const cell *params)
{
	return OnPlayerStreamOut(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleStreamIn(AMX *amx, const cell *params)
{
	return OnVehicleStreamIn(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleStreamOut(AMX *amx, const cell *params)
{
	return OnVehicleStreamOut(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnDialogResponse(AMX *amx, const cell *params)
{
	char inputtext[1024];
	_amx_GetString(amx, params[5], inputtext, sizeof(inputtext));
	return OnDialogResponse(params[1], params[2], params[3], params[4], inputtext);
}

static cell AMX_NATIVE_CALL GM_OnPlayerTakeDamage(AMX *amx, const cell *params)
{
	return OnPlayerTakeDamage(params[1], params[2], amx_ctof(params[3]), params[4]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerGiveDamage(AMX *amx, const cell *params)
{
	return OnPlayerGiveDamage(params[1], params[2], amx_ctof(params[3]), params[4]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickMap(AMX *amx, const cell *params)
{
	return OnPlayerClickMap(params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4])); 
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickTextDraw(AMX *amx, const cell *params)
{
	return OnPlayerClickTextDraw(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickPlayerTextDraw(AMX *amx, const cell *params)
{
	return OnPlayerClickPlayerTextDraw(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickPlayer(AMX *amx, const cell *params)
{
	return OnPlayerClickPlayer(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEditObject(AMX *amx, const cell *params)
{
	return OnPlayerEditObject(params[1], params[2], params[3], params[4], amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8]), amx_ctof(params[9]), amx_ctof(params[10]));
}

static cell AMX_NATIVE_CALL GM_OnPlayerEditAttachedObject(AMX *amx, const cell *params)
{
	return OnPlayerEditAttachedObject(params[1], params[2], params[3], params[4], params[5], amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8]), amx_ctof(params[9]), amx_ctof(params[10]), amx_ctof(params[11]), amx_ctof(params[12]), amx_ctof(params[13]), amx_ctof(params[14]));
}

static cell AMX_NATIVE_CALL GM_OnPlayerSelectObject(AMX *amx, const cell *params)
{
	return OnPlayerSelectObject(params[1], params[2], params[3], params[4], amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7]));
}

AMX_NATIVE_INFO PluginNatives[] = 
{
	{"FS_OnFilterScriptInit",						FS_OnFilterScriptInit				},
	{"FS_OnFilterScriptExit",						FS_OnFilterScriptExit				},
	{"FS_OnRconCommand",							FS_OnRconCommand					},
	{"GM_OnGameModeInit",							GM_OnGameModeInit					},
	{"GM_OnGameModeExit",							GM_OnGameModeExit					},
	{"GM_OnPlayerConnect",							GM_OnPlayerConnect					},
	{"GM_OnPlayerDisconnect",						GM_OnPlayerDisconnect				},
	{"GM_OnPlayerSpawn",							GM_OnPlayerSpawn					},
	{"GM_OnPlayerDeath",							GM_OnPlayerDeath					},
	{"GM_OnVehicleSpawn",							GM_OnVehicleSpawn					},
	{"GM_OnVehicleDeath",							GM_OnVehicleDeath					},
	{"GM_OnPlayerText",								GM_OnPlayerText						},
	{"GM_OnPlayerCommandText",						GM_OnPlayerCommandText				},
	{"GM_OnPlayerRequestClass",						GM_OnPlayerRequestClass				},
	{"GM_OnPlayerEnterVehicle",						GM_OnPlayerEnterVehicle				},
	{"GM_OnPlayerExitVehicle",						GM_OnPlayerExitVehicle				},
	{"GM_OnPlayerStateChange",						GM_OnPlayerStateChange				},
	{"GM_OnPlayerEnterCheckpoint",					GM_OnPlayerEnterCheckpoint			},
	{"GM_OnPlayerLeaveCheckpoint",					GM_OnPlayerLeaveCheckpoint			},
	{"GM_OnPlayerEnterRaceCheckpoint",				GM_OnPlayerEnterRaceCheckpoint		},
	{"GM_OnPlayerLeaveRaceCheckpoint",				GM_OnPlayerLeaveRaceCheckpoint		},
	{"GM_OnPlayerRequestSpawn",						GM_OnPlayerRequestSpawn				},
	{"GM_OnObjectMoved",							GM_OnObjectMoved					},
	{"GM_OnPlayerObjectMoved",						GM_OnPlayerObjectMoved				},
	{"GM_OnPlayerPickUpPickup",						GM_OnPlayerPickUpPickup				},
	{"GM_OnVehicleMod",								GM_OnVehicleMod						},
	{"GM_OnEnterExitModShop",						GM_OnEnterExitModShop				},
	{"GM_OnVehiclePaintjob",						GM_OnVehiclePaintjob				},
	{"GM_OnVehicleRespray",							GM_OnVehicleRespray					},
	{"GM_OnVehicleDamageStatusUpdate",				GM_OnVehicleDamageStatusUpdate		},
	{"GM_OnUnoccupiedVehicleUpdate",				GM_OnUnoccupiedVehicleUpdate		},
	{"GM_OnPlayerSelectedMenuRow",					GM_OnPlayerSelectedMenuRow			},
	{"GM_OnPlayerExitedMenu",						GM_OnPlayerExitedMenu				},
	{"GM_OnPlayerInteriorChange",					GM_OnPlayerInteriorChange			},
	{"GM_OnPlayerKeyStateChange",					GM_OnPlayerKeyStateChange			},
	{"GM_OnRconLoginAttempt",						GM_OnRconLoginAttempt				},
	{"GM_OnPlayerUpdate",							GM_OnPlayerUpdate					},
	{"GM_OnPlayerStreamIn",							GM_OnPlayerStreamIn					},
	{"GM_OnPlayerStreamOut",						GM_OnPlayerStreamOut				},
	{"GM_OnVehicleStreamIn",						GM_OnVehicleStreamIn				},
	{"GM_OnVehicleStreamOut",						GM_OnVehicleStreamOut				},
	{"GM_OnDialogResponse",							GM_OnDialogResponse					},
	{"GM_OnPlayerTakeDamage",						GM_OnPlayerTakeDamage				},
	{"GM_OnPlayerGiveDamage",						GM_OnPlayerGiveDamage				},
	{"GM_OnPlayerClickMap",							GM_OnPlayerClickMap					},
	{"GM_OnPlayerClickTextDraw",					GM_OnPlayerClickTextDraw			},
	{"GM_OnPlayerClickPlayerTextDraw",				GM_OnPlayerClickPlayerTextDraw		},
	{"GM_OnPlayerClickPlayer",						GM_OnPlayerClickPlayer				},
	{"GM_OnPlayerEditObject",						GM_OnPlayerEditObject				},
	{"GM_OnPlayerEditAttachedObject",				GM_OnPlayerEditAttachedObject		},
	{"GM_OnPlayerSelectObject",						GM_OnPlayerSelectObject				},
	{NULL,											NULL								},
};
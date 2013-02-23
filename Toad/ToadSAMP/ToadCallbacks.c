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

#include "a_samp.h"
#include "toadSAMP.h"

static int DefaultOnGameModeInit() { return 0; }

static int DefaultOnGameModeExit() { return 0; }

static int DefaultOnFilterScriptInit() { return 0; }

static int DefaultOnFilterScriptExit() { return 0; }

static int DefaultOnPlayerConnect(int playerid) { return 0; }

static int DefaultOnPlayerDisconnect(int playerid, int reason) { return 0; }

static int DefaultOnPlayerSpawn(int playerid) { return 0; }

static int DefaultOnPlayerDeath(int playerid, int killerid, int reason) { return 0; }

static int DefaultOnVehicleSpawn(int vehicleid) { return 0; }

static int DefaultOnVehicleDeath(int vehicleid, int killerid) { return 0; }

static int DefaultOnPlayerText(int playerid, char text[]) { return 0; }

static int DefaultOnPlayerCommandText(int playerid, char cmdtext[]) { return 0; }

static int DefaultOnPlayerRequestClass(int playerid, int classid) { return 0; }

static int DefaultOnPlayerEnterVehicle(int playerid, int vehicleid, int ispassenger) { return 0; }

static int DefaultOnPlayerExitVehicle(int playerid, int vehicleid) { return 0; }

static int DefaultOnPlayerStateChange(int playerid, int newstate, int oldstate) { return 0; }

static int DefaultOnPlayerEnterCheckpoint(int playerid) { return 0; }

static int DefaultOnPlayerLeaveCheckpoint(int playerid) { return 0; }

static int DefaultOnPlayerEnterRaceCheckpoint(int playerid) { return 0; }

static int DefaultOnPlayerLeaveRaceCheckpoint(int playerid) { return 0; }

static int DefaultOnRconCommand(char cmd[]) { return 0; }

static int DefaultOnPlayerRequestSpawn(int playerid) { return 0; }

static int DefaultOnObjectMoved(int objectid) { return 0; }

static int DefaultOnPlayerObjectMoved(int playerid, int objectid) { return 0; }

static int DefaultOnPlayerPickUpPickup(int playerid, int pickupid) { return 0; }

static int DefaultOnVehicleMod(int playerid, int vehicleid, int componentid) { return 0; }

static int DefaultOnEnterExitModShop(int playerid, int enterexit, int interiorid) { return 0; }

static int DefaultOnVehiclePaintjob(int playerid, int vehicleid, int paintjobid) { return 0; }

static int DefaultOnVehicleRespray(int playerid, int vehicleid, int color1, int color2) { return 0; }

static int DefaultOnVehicleDamageStatusUpdate(int vehicleid, int playerid) { return 0; }

static int DefaultOnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat) { return 0; }

static int DefaultOnPlayerSelectedMenuRow(int playerid, int row) { return 0; }

static int DefaultOnPlayerExitedMenu(int playerid) { return 0; }

static int DefaultOnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid) { return 0; }

static int DefaultOnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys) { return 0; }

static int DefaultOnRconLoginAttempt(char ip[], char password[], int success) { return 0; }

static int DefaultOnPlayerUpdate(int playerid) { return 0; }

static int DefaultOnPlayerStreamIn(int playerid, int forplayerid) { return 0; }

static int DefaultOnPlayerStreamOut(int playerid, int forplayerid) { return 0; }

static int DefaultOnVehicleStreamIn(int vehicleid, int forplayerid) { return 0; }

static int DefaultOnVehicleStreamOut(int vehicleid, int forplayerid) { return 0; }

static int DefaultOnDialogResponse(int playerid, int dialogid, int response, int listitem, char inputtext[]) { return 0; }

static int DefaultOnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid) { return 0; }

static int DefaultOnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid)  { return 0; }

static int DefaultOnPlayerClickMap(int playerid, float fX, float fY, float fZ)  { return 0; }

static int DefaultOnPlayerClickTextDraw(int playerid, Text clickedid)  { return 0; }

static int DefaultOnPlayerClickPlayerTextDraw(int playerid, PlayerText playertextid)  { return 0; }

static int DefaultOnPlayerClickPlayer(int playerid, int clickedplayerid, int source)  { return 0; }

static int DefaultOnPlayerEditObject(int playerid, int playerobject, int objectid, int response, 
									 float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ ) { return 0; }

static int DefaultOnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid,
											 float fOffsetX, float fOffsetY, float fOffsetZ,
											 float fRotX, float fRotY, float fRotZ,
											 float fScaleX, float fScaleY, float fScaleZ) { return 0; }

static int DefaultOnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ) { return 0; }


_OnGameModeInit pOnGameModeInit = DefaultOnGameModeInit;
_OnGameModeExit pOnGameModeExit = DefaultOnGameModeExit;
_OnFilterScriptInit pOnFilterScriptInit = DefaultOnFilterScriptInit;
_OnFilterScriptExit pOnFilterScriptExit = DefaultOnFilterScriptExit;
_OnPlayerConnect pOnPlayerConnect = DefaultOnPlayerConnect;
_OnPlayerDisconnect pOnPlayerDisconnect = DefaultOnPlayerDisconnect;
_OnPlayerSpawn pOnPlayerSpawn = DefaultOnPlayerSpawn;
_OnPlayerDeath pOnPlayerDeath = DefaultOnPlayerDeath;
_OnVehicleSpawn pOnVehicleSpawn = DefaultOnVehicleSpawn;
_OnVehicleDeath pOnVehicleDeath = DefaultOnVehicleDeath;
_OnPlayerText pOnPlayerText = DefaultOnPlayerText;
_OnPlayerCommandText pOnPlayerCommandText = DefaultOnPlayerCommandText;
_OnPlayerRequestClass pOnPlayerRequestClass = DefaultOnPlayerRequestClass;
_OnPlayerEnterVehicle pOnPlayerEnterVehicle = DefaultOnPlayerEnterVehicle;
_OnPlayerExitVehicle pOnPlayerExitVehicle = DefaultOnPlayerExitVehicle;
_OnPlayerStateChange pOnPlayerStateChange = DefaultOnPlayerStateChange;
_OnPlayerEnterCheckpoint pOnPlayerEnterCheckpoint = DefaultOnPlayerEnterCheckpoint;
_OnPlayerLeaveCheckpoint pOnPlayerLeaveCheckpoint = DefaultOnPlayerLeaveCheckpoint;
_OnPlayerEnterRaceCheckpoint pOnPlayerEnterRaceCheckpoint = DefaultOnPlayerEnterRaceCheckpoint;
_OnPlayerLeaveRaceCheckpoint pOnPlayerLeaveRaceCheckpoint = DefaultOnPlayerLeaveRaceCheckpoint;
_OnRconCommand pOnRconCommand = DefaultOnRconCommand;
_OnPlayerRequestSpawn pOnPlayerRequestSpawn = DefaultOnPlayerRequestSpawn;
_OnObjectMoved pOnObjectMoved = DefaultOnObjectMoved;
_OnPlayerObjectMoved pOnPlayerObjectMoved = DefaultOnPlayerObjectMoved;
_OnPlayerPickUpPickup pOnPlayerPickUpPickup = DefaultOnPlayerPickUpPickup;
_OnVehicleMod pOnVehicleMod = DefaultOnVehicleMod;
_OnEnterExitModShop pOnEnterExitModShop = DefaultOnEnterExitModShop;
_OnVehiclePaintjob pOnVehiclePaintjob = DefaultOnVehiclePaintjob;
_OnVehicleRespray pOnVehicleRespray = DefaultOnVehicleRespray;
_OnVehicleDamageStatusUpdate pOnVehicleDamageStatusUpdate = DefaultOnVehicleDamageStatusUpdate;
_OnUnoccupiedVehicleUpdate pOnUnoccupiedVehicleUpdate = DefaultOnUnoccupiedVehicleUpdate;
_OnPlayerSelectedMenuRow pOnPlayerSelectedMenuRow = DefaultOnPlayerSelectedMenuRow;
_OnPlayerExitedMenu pOnPlayerExitedMenu = DefaultOnPlayerExitedMenu;
_OnPlayerInteriorChange pOnPlayerInteriorChange = DefaultOnPlayerInteriorChange;
_OnPlayerKeyStateChange pOnPlayerKeyStateChange = DefaultOnPlayerKeyStateChange;
_OnRconLoginAttempt pOnRconLoginAttempt = DefaultOnRconLoginAttempt;
_OnPlayerUpdate pOnPlayerUpdate = DefaultOnPlayerUpdate;
_OnPlayerStreamIn pOnPlayerStreamIn = DefaultOnPlayerStreamIn;
_OnPlayerStreamOut pOnPlayerStreamOut = DefaultOnPlayerStreamOut;
_OnVehicleStreamIn pOnVehicleStreamIn = DefaultOnVehicleStreamIn;
_OnVehicleStreamOut pOnVehicleStreamOut = DefaultOnVehicleStreamOut;
_OnDialogResponse pOnDialogResponse = DefaultOnDialogResponse;
_OnPlayerTakeDamage pOnPlayerTakeDamage = DefaultOnPlayerTakeDamage;
_OnPlayerGiveDamage pOnPlayerGiveDamage = DefaultOnPlayerGiveDamage;
_OnPlayerClickMap pOnPlayerClickMap = DefaultOnPlayerClickMap;
_OnPlayerClickTextDraw pOnPlayerClickTextDraw = DefaultOnPlayerClickTextDraw;
_OnPlayerClickPlayerTextDraw pOnPlayerClickPlayerTextDraw = DefaultOnPlayerClickPlayerTextDraw;
_OnPlayerClickPlayer pOnPlayerClickPlayer = DefaultOnPlayerClickPlayer;
_OnPlayerEditObject pOnPlayerEditObject = DefaultOnPlayerEditObject;
_OnPlayerEditAttachedObject pOnPlayerEditAttachedObject = DefaultOnPlayerEditAttachedObject;
_OnPlayerSelectObject pOnPlayerSelectObject = DefaultOnPlayerSelectObject;


static cell AMX_NATIVE_CALL FS_OnFilterScriptInit(AMX *amx, const cell *params)
{
	return pOnFilterScriptInit();
}

static cell AMX_NATIVE_CALL FS_OnFilterScriptExit(AMX *amx, const cell *params)
{
	return pOnFilterScriptExit();
}

static cell AMX_NATIVE_CALL FS_OnRconCommand(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[1], text, sizeof(text));
	return pOnRconCommand(text);
}

static cell AMX_NATIVE_CALL GM_OnGameModeInit(AMX *amx, const cell *params)
{
	return pOnGameModeInit();
}

static cell AMX_NATIVE_CALL GM_OnGameModeExit(AMX *amx, const cell *params)
{
	return pOnGameModeExit();
}

static cell AMX_NATIVE_CALL GM_OnPlayerConnect(AMX *amx, const cell *params)
{
	return pOnPlayerConnect(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerDisconnect(AMX *amx, const cell *params)
{
	return pOnPlayerDisconnect(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerSpawn(AMX *amx, const cell *params)
{
	return pOnPlayerSpawn(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerDeath(AMX *amx, const cell *params)
{
	return pOnPlayerDeath(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleSpawn(AMX *amx, const cell *params)
{
	return pOnVehicleSpawn(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleDeath(AMX *amx, const cell *params)
{
	return pOnVehicleDeath(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return pOnPlayerText(params[1], text);
}

static cell AMX_NATIVE_CALL GM_OnPlayerCommandText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return pOnPlayerCommandText(params[1], text);
}

static cell AMX_NATIVE_CALL GM_OnPlayerRequestClass(AMX *amx, const cell *params)
{
	return pOnPlayerRequestClass(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterVehicle(AMX *amx, const cell *params)
{
	return pOnPlayerEnterVehicle(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerExitVehicle(AMX *amx, const cell *params)
{
	return pOnPlayerExitVehicle(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStateChange(AMX *amx, const cell *params)
{
	return pOnPlayerStateChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterCheckpoint(AMX *amx, const cell *params)
{
	return pOnPlayerEnterCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerLeaveCheckpoint(AMX *amx, const cell *params)
{
	return pOnPlayerLeaveCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEnterRaceCheckpoint(AMX *amx, const cell *params)
{
	return pOnPlayerEnterRaceCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerLeaveRaceCheckpoint(AMX *amx, const cell *params)
{
	return pOnPlayerLeaveRaceCheckpoint(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerRequestSpawn(AMX *amx, const cell *params)
{
	return pOnPlayerRequestClass(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnObjectMoved(AMX *amx, const cell *params)
{
	return pOnObjectMoved(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerObjectMoved(AMX *amx, const cell *params)
{
	return pOnPlayerObjectMoved(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerPickUpPickup(AMX *amx, const cell *params)
{
	return pOnPlayerPickUpPickup(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleMod(AMX *amx, const cell *params)
{
	return pOnVehicleMod(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnEnterExitModShop(AMX *amx, const cell *params)
{
	return pOnEnterExitModShop(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehiclePaintjob(AMX *amx, const cell *params)
{
	return pOnVehiclePaintjob(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleRespray(AMX *amx, const cell *params)
{
	return pOnVehicleRespray(params[1], params[2], params[3], params[4]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleDamageStatusUpdate(AMX *amx, const cell *params)
{
	return pOnVehicleDamageStatusUpdate(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnUnoccupiedVehicleUpdate(AMX *amx, const cell *params)
{
	return pOnUnoccupiedVehicleUpdate(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerSelectedMenuRow(AMX *amx, const cell *params)
{
	return pOnPlayerSelectedMenuRow(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerExitedMenu(AMX *amx, const cell *params)
{
	return pOnPlayerExitedMenu(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerInteriorChange(AMX *amx, const cell *params)
{
	return pOnPlayerInteriorChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerKeyStateChange(AMX *amx, const cell *params)
{
	return pOnPlayerKeyStateChange(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnRconLoginAttempt(AMX *amx, const cell *params)
{
	char ip[1024], password[1024];
	_amx_GetString(amx, params[1], ip, sizeof(ip));
	_amx_GetString(amx, params[2], password, sizeof(password));
	return pOnRconLoginAttempt(ip, password, params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerUpdate(AMX *amx, const cell *params)
{
	return pOnPlayerUpdate(params[1]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStreamIn(AMX *amx, const cell *params)
{
	return pOnPlayerStreamIn(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerStreamOut(AMX *amx, const cell *params)
{
	return pOnPlayerStreamOut(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleStreamIn(AMX *amx, const cell *params)
{
	return pOnVehicleStreamIn(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnVehicleStreamOut(AMX *amx, const cell *params)
{
	return pOnVehicleStreamOut(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnDialogResponse(AMX *amx, const cell *params)
{
	char inputtext[1024];
	_amx_GetString(amx, params[5], inputtext, sizeof(inputtext));
	return pOnDialogResponse(params[1], params[2], params[3], params[4], inputtext);
}

static cell AMX_NATIVE_CALL GM_OnPlayerTakeDamage(AMX *amx, const cell *params)
{
	return pOnPlayerTakeDamage(params[1], params[2], amx_ctof(params[3]), params[4]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerGiveDamage(AMX *amx, const cell *params)
{
	return pOnPlayerGiveDamage(params[1], params[2], amx_ctof(params[3]), params[4]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickMap(AMX *amx, const cell *params)
{
	return pOnPlayerClickMap(params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4])); 
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickTextDraw(AMX *amx, const cell *params)
{
	return pOnPlayerClickTextDraw(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickPlayerTextDraw(AMX *amx, const cell *params)
{
	return pOnPlayerClickPlayerTextDraw(params[1], params[2]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerClickPlayer(AMX *amx, const cell *params)
{
	return pOnPlayerClickPlayer(params[1], params[2], params[3]);
}

static cell AMX_NATIVE_CALL GM_OnPlayerEditObject(AMX *amx, const cell *params)
{
	return pOnPlayerEditObject(params[1], params[2], params[3], params[4], amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8]), amx_ctof(params[9]), amx_ctof(params[10]));
}

static cell AMX_NATIVE_CALL GM_OnPlayerEditAttachedObject(AMX *amx, const cell *params)
{
	return pOnPlayerEditAttachedObject(params[1], params[2], params[3], params[4], params[5], amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8]), amx_ctof(params[9]), amx_ctof(params[10]), amx_ctof(params[11]), amx_ctof(params[12]), amx_ctof(params[13]), amx_ctof(params[14]));
}

static cell AMX_NATIVE_CALL GM_OnPlayerSelectObject(AMX *amx, const cell *params)
{
	return pOnPlayerSelectObject(params[1], params[2], params[3], params[4], amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7]));
}

AMX_NATIVE_INFO GMCallBack[] = 
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
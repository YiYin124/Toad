#include "../ToadSAMP/toadSAMP.h"

int OnLoadPlugin()
{
	printfln("[TEST] OnLoadPlugin");
	return 1;
}


void OnUnloadPlugin()
{
	printfln("[TEST] OnUnloadPlugin");
}


void OnProcessTick()
{
	//printf("[TEST] OnProcessTick");
}

int OnGameModeInit()
{
	//printfln("[DEBUG] OnGameModeInit");
	return 1;
}

int OnGameModeExit()
{
	//printfln("[DEBUG] OnGameModeExit");
	return 1;
}

int OnFilterScriptInit()
{
	//printfln("[DEBUG] OnFilterScriptInit");
	return 1;
}

int OnFilterScriptExit()
{
	//printfln("[DEBUG] OnFilterScriptExit");
	return 1;
}

int OnPlayerConnect(int playerid)
{
	//printfln("[DEBUG] OnPlayerConnect playerid[%d]", playerid);
	return 1;
}

int OnPlayerDisconnect(int playerid, int reason)
{

	return 1;
}

int OnPlayerSpawn(int playerid)
{

	return 1;
}

int OnPlayerDeath(int playerid, int killerid, int reason)
{

	return 1;
}

int OnVehicleSpawn(int vehicleid)
{

	return 1;
}

int OnVehicleDeath(int vehicleid, int killerid)
{

	return 1;
}

int OnPlayerText(int playerid, char text[])
{

	return 1;
}

int OnPlayerCommandText(int playerid, char cmdtext[])
{

	return 1;
}

int OnPlayerRequestClass(int playerid, int classid)
{

	return 1;
}

int OnPlayerEnterVehicle(int playerid, int vehicleid, int ispassenger)
{

	return 1;
}

int OnPlayerExitVehicle(int playerid, int vehicleid)
{

	return 1;
}

int OnPlayerStateChange(int playerid, int newstate, int oldstate)
{

	return 1;
}

int OnPlayerEnterCheckpoint(int playerid)
{

	return 1;
}

int OnPlayerLeaveCheckpoint(int playerid)
{

	return 1;
}

int OnPlayerEnterRaceCheckpoint(int playerid)
{

	return 1;
}

int OnPlayerLeaveRaceCheckpoint(int playerid)
{

	return 1;
}

int OnRconCommand(char cmd[])
{

	return 1;
}

int OnPlayerRequestSpawn(int playerid)
{

	return 1;
}

int OnObjectMoved(int objectid)
{

	return 1;
}

int OnPlayerObjectMoved(int playerid, int objectid)
{

	return 1;
}

int OnPlayerPickUpPickup(int playerid, int pickupid)
{

	return 1;
}

int OnVehicleMod(int playerid, int vehicleid, int componentid)
{

	return 1;
}

int OnEnterExitModShop(int playerid, int enterexit, int interiorid)
{

	return 1;
}

int OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid)
{

	return 1;
}

int OnVehicleRespray(int playerid, int vehicleid, int color1, int color2)
{

	return 1;
}

int OnVehicleDamageStatusUpdate(int vehicleid, int playerid)
{

	return 1;
}

int OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat)
{

	return 1;
}

int OnPlayerSelectedMenuRow(int playerid, int row)
{

	return 1;
}

int OnPlayerExitedMenu(int playerid)
{

	return 1;
}

int OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid)
{

	return 1;
}

int OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys)
{

	return 1;
}

int OnRconLoginAttempt(char ip[], char password[], int success)
{

	return 1;
}

int OnPlayerUpdate(int playerid)
{

	return 1;
}

int OnPlayerStreamIn(int playerid, int forplayerid)
{

	return 1;
}

int OnPlayerStreamOut(int playerid, int forplayerid)
{

	return 1;
}

int OnVehicleStreamIn(int vehicleid, int forplayerid)
{

	return 1;
}

int OnVehicleStreamOut(int vehicleid, int forplayerid)
{

	return 1;
}

int OnDialogResponse(int playerid, int dialogid, int response, int listitem, char inputtext[])
{

	return 1;
}

int OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid)
{

	return 1;
}

int OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid)
{

	return 1;
}

int OnPlayerClickMap(int playerid, float fX, float fY, float fZ)
{

	return 1;
}

int OnPlayerClickTextDraw(int playerid, Text clickedid)
{

	return 1;
}

int OnPlayerClickPlayerTextDraw(int playerid, PlayerText playertextid)
{

	return 1;
}

int OnPlayerClickPlayer(int playerid, int clickedplayerid, int source)
{

	return 1;
}

int OnPlayerEditObject(int playerid, int playerobject, int objectid, int response, 
					   float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ )
{

	return 1;
}

int OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid,
							   float fOffsetX, float fOffsetY, float fOffsetZ,
							   float fRotX, float fRotY, float fRotZ,
							   float fScaleX, float fScaleY, float fScaleZ)
{

	return 1;
}

int OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ)
{

	return 1;
}
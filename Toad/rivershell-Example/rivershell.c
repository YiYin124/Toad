//---------------------------------------------------------
//
// Rivershell by Kye - 2006
//
// Updated 2009 for SA-MP 0.3
//
//---------------------------------------------------------

#include "../ToadSAMP/a_samp.h"

// Global stuff and defines for our gamemode.

static int gTeam[MAX_PLAYERS]; // Tracks the team assignment for each player

#define OBJECTIVE_VEHICLE_GREEN 2
#define OBJECTIVE_VEHICLE_BLUE 1
#define TEAM_GREEN 1
#define TEAM_BLUE 2
#define OBJECTIVE_COLOR 0xE2C063FF
#define TEAM_GREEN_COLOR 0x77CC77FF
#define TEAM_BLUE_COLOR 0x7777DDFF
#define CAPS_TO_WIN 3

int gObjectiveReached = 0; // Stops the winner logic reentering itself.
int gObjectiveGreenPlayer=(-1); // Tracks which green player has the vehicle.
int gObjectiveBluePlayer=(-1); // Tracks which blue player has the vehicle.

// number of times the vehicle has been captured by each team
int gGreenTimesCapped=0;
int gBlueTimesCapped=0;

// forward declarations for the PAWN compiler (not really needed, but there for the sake of clarity)
void SetPlayerToTeamColor(int playerid);
void SetupPlayerForClassSelection(int playerid);
void SetPlayerTeamFromClass(int playerid, int classid);
void ExitTheGameMode();

//C make
void PlaySoundForAll(int soundid, float x, float y, float z);
//---------------------------------------------------------

int OnLoadPlugin()
{
	printfln("\n----------------------------------");
	printfln("  Rivershell by Kye 2006\n");
	printfln("----------------------------------\n");
	return 1;
}
//---------------------------------------------------------

void SetPlayerToTeamColor(int playerid)
{
	if(gTeam[playerid] == TEAM_GREEN) {
		SetPlayerColor(playerid,TEAM_GREEN_COLOR); // green
	} else if(gTeam[playerid] == TEAM_BLUE) {
		SetPlayerColor(playerid,TEAM_BLUE_COLOR); // blue
	}
}
//---------------------------------------------------------

void SetupPlayerForClassSelection(int playerid)
{
	// Set the player's orientation when they're selecting a class.
	SetPlayerPos(playerid,1984.4445f,157.9501f,55.9384f);
	SetPlayerCameraPos(playerid,1984.4445f,160.9501f,55.9384f);
	SetPlayerCameraLookAt(playerid,1984.4445f,157.9501f,55.9384f,CAMERA_CUT);
	SetPlayerFacingAngle(playerid,0.0f);
}

//---------------------------------------------------------

void SetPlayerTeamFromClass(int playerid, int classid)
{
	// Set their team number based on the class they selected.
	if(classid == 0 || classid == 1) {
		gTeam[playerid] = TEAM_GREEN;
	} else if(classid == 2 || classid == 3) {
		gTeam[playerid] = TEAM_BLUE;
	}
}

//---------------------------------------------------------

void ExitTheGameMode()
{
	PlaySoundForAll(1186, 0.0, 0.0, 0.0); // Stops the music
	//printf("Exiting Game Mode");
	GameModeExit();
}

//---------------------------------------------------------

int OnPlayerStateChange(int playerid, int newstate, int oldstate)
{
	int vehicleid;

	if(newstate == PLAYER_STATE_DRIVER)
	{
		vehicleid = GetPlayerVehicleID(playerid);

		if(gTeam[playerid] == TEAM_GREEN && vehicleid == OBJECTIVE_VEHICLE_GREEN)
		{ // It's the objective vehicle
			SetPlayerColor(playerid,OBJECTIVE_COLOR);
			GameTextForPlayer(playerid,"~w~Take the ~y~boat ~w~back to the ~r~spawn!",3000,5);
			SetPlayerCheckpoint(playerid, 1982.6150f, -220.6680f, -0.2432f, 7.0f);
			gObjectiveGreenPlayer = playerid;
		}

		if(gTeam[playerid] == TEAM_BLUE && vehicleid == OBJECTIVE_VEHICLE_BLUE)
		{ // It's the objective vehicle
			SetPlayerColor(playerid,OBJECTIVE_COLOR);
			GameTextForPlayer(playerid,"~w~Take the ~y~boat ~w~back to the ~r~spawn!",3000,5);
			SetPlayerCheckpoint(playerid, 2328.2935f, 531.8324f, 0.0094f, 7.0f);
			gObjectiveBluePlayer = playerid;
		}
	}
	else if(newstate == PLAYER_STATE_ONFOOT)
	{
		if(playerid == gObjectiveGreenPlayer) {
			gObjectiveGreenPlayer = (-1);
			SetPlayerToTeamColor(playerid);
			DisablePlayerCheckpoint(playerid);
		}

		if(playerid == gObjectiveBluePlayer) {
			gObjectiveBluePlayer = (-1);
			SetPlayerToTeamColor(playerid);
			DisablePlayerCheckpoint(playerid);
		}
	}

	return 1;
}

//---------------------------------------------------------

int OnGameModeInit()
{
	SetGameModeText("Rivershell");

	ShowPlayerMarkers(0);
	ShowNameTags(1);
	SetWorldTime(17);

	// GREEN CLASSES
	AddPlayerClass(162, 1980.0054f, -266.6487f, 2.9653f, 348.9788f, 0, 0, 31, 400, 29, 400);
	AddPlayerClass(157, 1980.0054f, -266.6487f, 2.9653f, 348.9788f, 0, 0, 31, 400, 29, 400);

	// BLUE CLASSES
	AddPlayerClass(154, 2359.2703f, 540.5911f, 1.7969f, 180.6476f, 0, 0, 31, 400, 29, 400);
	AddPlayerClass(138, 2294.0413f, 541.8565f, 1.7944f, 188.6283f, 0, 0, 31, 400, 29, 400);

	// OBJECTIVE VEHICLES
	AddStaticVehicle(453, 2057.0154f, -236.5598f, -0.2621f, 359.4377f, 114, 1); // gr reefer
	AddStaticVehicle(453, 2381.9685f, 532.4496f, 0.2574f, 183.2029f, 79, 7); // b reefer

	// GREEN VEHICLES
	AddStaticVehicle(473, 2023.5109f, -246.4161f, -0.1514f, 351.0038f, 114, 1); // gr dhin
	AddStaticVehicle(473, 1949.2490f, -259.5398f, -0.2794f, 13.3247f, 114, 1); // gr ding2fix
	AddStaticVehicle(473, 2003.7256f, -248.4939f, -0.2243f, 5.1752f, 114, 1); // gr ding
	AddStaticVehicle(473, 1982.4832f, -252.4811f, -0.3006f, 358.3696f, 114, 1); // gr ding
	AddStaticVehicle(473, 1927.7894f, -249.3088f, -0.2893f, 320.7715f, 114, 1); // gr ding
	AddStaticVehicle(473, 1907.6969f, -230.4202f, -0.2585f, 306.0136f, 114, 1); // gr ding
	AddStaticVehicle(487, 1913.0819f, -376.2350f, 21.4819f, 350.9412f, 114, 1); // gr mav

	// BLUE VEHICLES
	AddStaticVehicle(473, 2289.7571f, 518.4412f, -0.2167f, 178.8301f, 79, 7); // b ding
	AddStaticVehicle(473, 2294.3599f, 519.1021f, -0.1391f, 177.1416f, 79, 7); // b ding
	AddStaticVehicle(473, 2298.8411f, 518.4229f, -0.2333f, 181.1228f, 79, 7); // b ding
	AddStaticVehicle(473, 2369.9839f, 519.0364f, -0.3190f, 187.9187f, 79, 7); // b ding
	AddStaticVehicle(473, 2359.9417f, 519.1055f, -0.2271f, 183.8014f, 79, 7); // b ding
	AddStaticVehicle(473, 2351.4617f, 519.1046f, -0.1172f, 182.8623f, 79, 7); // b ding
	AddStaticVehicle(487, 2324.4399f, 573.1667f, 7.9578f, 177.6699f, 79, 7); // b mav

	return 1;
}

//---------------------------------------------------------

int OnPlayerConnect(int playerid)
{
	SetPlayerColor(playerid,0x888888FF);
	GameTextForPlayer(playerid,"~r~SA-MP:~w~Rivershell",2000,5);
	return 1;
}

//---------------------------------------------------------

int OnPlayerRequestClass(int playerid, int classid)
{
	SetupPlayerForClassSelection(playerid);
	SetPlayerTeamFromClass(playerid,classid);

	if(classid == 0 || classid == 1) {
		GameTextForPlayer(playerid,"~g~GREEN ~w~TEAM",1000,5);
	} else if(classid == 2 || classid == 3) {
		GameTextForPlayer(playerid,"~b~BLUE ~w~TEAM",1000,5);
	}

	return 1;
}

//---------------------------------------------------------

int OnPlayerSpawn(int playerid)
{
	SetPlayerToTeamColor(playerid);

	if(gTeam[playerid] == TEAM_GREEN) {
		SetPlayerWorldBounds(playerid, 2444.4185f, 1687.5696f, 631.2963f, -454.9898f);
		GameTextForPlayer(playerid,
			"Defend the ~g~GREEN ~w~team's ~y~Reefer~n~~w~Capture the ~b~BLUE ~w~team's ~y~Reefer",
			6000,5);
	}
	else if(gTeam[playerid] == TEAM_BLUE) {
		SetPlayerWorldBounds(playerid, 2444.4185f, 1687.5696f, 631.2963f, -454.9898f);
		GameTextForPlayer(playerid,
			"Defend the ~b~BLUE ~w~team's ~y~Reefer~n~~w~Capture the ~g~GREEN ~w~team's ~y~Reefer",
			6000,5);
	}

	return 1;
}

//---------------------------------------------------------

int OnPlayerEnterCheckpoint(int playerid)
{
	int playervehicleid = GetPlayerVehicleID(playerid);

	if(gObjectiveReached) return 1;

	if(playervehicleid == OBJECTIVE_VEHICLE_GREEN && gTeam[playerid] == TEAM_GREEN)
	{   // Green OBJECTIVE REACHED.
		gGreenTimesCapped++;
		SetPlayerScore(playerid,GetPlayerScore(playerid)+5);

		if(gGreenTimesCapped==CAPS_TO_WIN) {
			GameTextForAll("~g~GREEN ~w~team wins!",3000,5);
			gObjectiveReached = 1;	PlaySoundForAll(1185, 0.0, 0.0, 0.0);
			//SetTimer("ExitTheGameMode", 6000, 0); // Set up a timer to exit this mode.
			ExitTheGameMode();
		} else {
			GameTextForAll("~g~GREEN ~w~team captured the ~y~boat!",3000,5);
			SetVehicleToRespawn(OBJECTIVE_VEHICLE_GREEN);
		}
		return 1;
	}
	else if(playervehicleid == OBJECTIVE_VEHICLE_BLUE && gTeam[playerid] == TEAM_BLUE)
	{   // Blue OBJECTIVE REACHED.
		gBlueTimesCapped++;
		SetPlayerScore(playerid,GetPlayerScore(playerid)+5);

		if(gBlueTimesCapped==CAPS_TO_WIN) {
			GameTextForAll("~b~BLUE ~w~team wins!",3000,5);
			gObjectiveReached = 1;	PlaySoundForAll(1185, 0.0, 0.0, 0.0);
			//SetTimer("ExitTheGameMode", 6000, 0); // Set up a timer to exit this mode.
			ExitTheGameMode();
		} else {
			GameTextForAll("~b~BLUE ~w~team captured the ~y~boat!",3000,5);
			SetVehicleToRespawn(OBJECTIVE_VEHICLE_BLUE);
		}
		return 1;
	}

	return 1;
}

//---------------------------------------------------------

int OnPlayerDeath(int playerid, int killerid, int reason)
{
	if(killerid == INVALID_PLAYER_ID) {
		SendDeathMessage(INVALID_PLAYER_ID,playerid,reason);
	} else {
		if(gTeam[killerid] != gTeam[playerid]) {
			// Valid kill
			SendDeathMessage(killerid,playerid,reason);
			SetPlayerScore(killerid,GetPlayerScore(killerid)+1);
		}
		else {
			// Team kill
			SendDeathMessage(killerid,playerid,reason);
		}
	}
	return 1;
}


//---------------------------------

int OnVehicleStreamIn(int vehicleid, int forplayerid)
{
	// Note for SA-MP 0.3:
	// As the vehicle streams in, player team dependant params are applied. They can't be
	// applied to vehicles that don't exist in the player's world.

	if(vehicleid == OBJECTIVE_VEHICLE_BLUE) {
		if(gTeam[forplayerid] == TEAM_GREEN) {
			SetVehicleParamsForPlayer(OBJECTIVE_VEHICLE_BLUE,forplayerid,1,1); // objective; locked
		}
		else if(gTeam[forplayerid] == TEAM_BLUE) {
			SetVehicleParamsForPlayer(OBJECTIVE_VEHICLE_BLUE,forplayerid,1,0); // objective; unlocked
		}
	}
	else if(vehicleid == OBJECTIVE_VEHICLE_GREEN) {
		if(gTeam[forplayerid] == TEAM_BLUE) {
			SetVehicleParamsForPlayer(OBJECTIVE_VEHICLE_GREEN,forplayerid,1,1); // objective; locked
		}
		else if(gTeam[forplayerid] == TEAM_GREEN) {
			SetVehicleParamsForPlayer(OBJECTIVE_VEHICLE_GREEN,forplayerid,1,0); // objective; unlocked
		}
	}

	return 1;
	//printf("GameMode: VehicleStreamIn(%d,%d)",vehicleid,forplayerid);
}

//---------------------------------

int OnVehicleStreamOut(int vehicleid, int forplayerid)
{
	return 1;
	//printf("GameMode: VehicleStreamOut(%d,%d)",vehicleid,forplayerid);
}

//---------------------------------

void PlaySoundForAll(int soundid, float x, float y, float z)
{
	int i;
	for (i=0; i<MAX_PLAYERS; i++)
	{
		if (IsPlayerConnected(i))
		{
			PlayerPlaySound(i, soundid, x, y, z);
		}
	}
}

//---------------------------------

//Plugin Callback
//int OnLoadPlugin() { return 1; }

void OnUnloadPlugin() {}

void OnProcessTick() {}

//Game Callback

//int OnGameModeInit() { return 0; }

int OnGameModeExit() { return 0; }

int OnFilterScriptInit() { return 0; }

int OnFilterScriptExit() { return 0; }

//int OnPlayerConnect(int playerid) { return 0; }

int OnPlayerDisconnect(int playerid, int reason) { return 0; }

//int OnPlayerSpawn(int playerid) { return 0; }

//int OnPlayerDeath(int playerid, int killerid, int reason) { return 0; }

int OnVehicleSpawn(int vehicleid) { return 0; }

int OnVehicleDeath(int vehicleid, int killerid) { return 0; }

int OnPlayerText(int playerid, char text[]) { return 0; }

int OnPlayerCommandText(int playerid, char cmdtext[]) { return 0; }

//int OnPlayerRequestClass(int playerid, int classid) { return 0; }

int OnPlayerEnterVehicle(int playerid, int vehicleid, int ispassenger) { return 0; }

int OnPlayerExitVehicle(int playerid, int vehicleid) { return 0; }

//int OnPlayerStateChange(int playerid, int newstate, int oldstate) { return 0; }

//int OnPlayerEnterCheckpoint(int playerid) { return 0; }

int OnPlayerLeaveCheckpoint(int playerid) { return 0; }

int OnPlayerEnterRaceCheckpoint(int playerid) { return 0; }

int OnPlayerLeaveRaceCheckpoint(int playerid) { return 0; }

int OnRconCommand(char cmd[]) { return 0; }

int OnPlayerRequestSpawn(int playerid) { return 0; }

int OnObjectMoved(int objectid) { return 0; }

int OnPlayerObjectMoved(int playerid, int objectid) { return 0; }

int OnPlayerPickUpPickup(int playerid, int pickupid) { return 0; }

int OnVehicleMod(int playerid, int vehicleid, int componentid) { return 0; }

int OnEnterExitModShop(int playerid, int enterexit, int interiorid) { return 0; }

int OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid) { return 0; }

int OnVehicleRespray(int playerid, int vehicleid, int color1, int color2) { return 0; }

int OnVehicleDamageStatusUpdate(int vehicleid, int playerid) { return 0; }

int OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat) { return 0; }

int OnPlayerSelectedMenuRow(int playerid, int row) { return 0; }

int OnPlayerExitedMenu(int playerid) { return 0; }

int OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid) { return 0; }

int OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys) { return 0; }

int OnRconLoginAttempt(char ip[], char password[], int success) { return 0; }

int OnPlayerUpdate(int playerid) { return 0; }

int OnPlayerStreamIn(int playerid, int forplayerid) { return 0; }

int OnPlayerStreamOut(int playerid, int forplayerid) { return 0; }

//int OnVehicleStreamIn(int vehicleid, int forplayerid) { return 0; }
//
//int OnVehicleStreamOut(int vehicleid, int forplayerid) { return 0; }

int OnDialogResponse(int playerid, int dialogid, int response, int listitem, char inputtext[]) { return 0; }

int OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid) { return 0; }

int OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid) { return 0; }

int OnPlayerClickMap(int playerid, float fX, float fY, float fZ) { return 0; }

int OnPlayerClickTextDraw(int playerid, Text clickedid) { return 0; }

int OnPlayerClickPlayerTextDraw(int playerid, PlayerText playertextid) { return 0; }

int OnPlayerClickPlayer(int playerid, int clickedplayerid, int source) { return 0; }

int OnPlayerEditObject(int playerid, int playerobject, int objectid, int response, 
					   float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ ) { return 0; }

int OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid,
							   float fOffsetX, float fOffsetY, float fOffsetZ,
							   float fRotX, float fRotY, float fRotZ,
							   float fScaleX, float fScaleY, float fScaleZ) { return 0; }

int OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ) { return 0; }
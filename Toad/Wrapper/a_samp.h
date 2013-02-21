/*  SA-MP Functions
 *
 *  (c) Copyright 2005-2012, SA-MP Team
 *
 */

//#include <core>
//#include <float>
//#include <string>
//#include <file>
//#include <time>
//#include <datagram>
//#include <a_players>
//#include <a_vehicles>
//#include <a_objects>
//#include <a_sampdb>

// Limits and internal constants
#define MAX_PLAYER_NAME							(24)
#define MAX_PLAYERS								(500)
#define MAX_VEHICLES							(2000)
#define INVALID_PLAYER_ID						(0xFFFF)
#define INVALID_VEHICLE_ID						(0xFFFF)
#define NO_TEAM									(255)
#define MAX_OBJECTS								(1000)
#define INVALID_OBJECT_ID						(0xFFFF)
#define MAX_GANG_ZONES							(1024)
#define MAX_TEXT_DRAWS							(2048)
#define MAX_PLAYER_TEXT_DRAWS					(256)
#define MAX_MENUS								(128)
#define MAX_3DTEXT_GLOBAL						(1024)
#define MAX_3DTEXT_PLAYER						(1024)
#define MAX_PICKUPS								(4096)
#define INVALID_MENU							(0xFF)
#define INVALID_TEXT_DRAW						(0xFFFF)
#define INVALID_GANG_ZONE						(-1)
#define INVALID_3DTEXT_ID						(0xFFFF)

// --------------------------------------------------
// Natives
// --------------------------------------------------

// Util
//native print(const string[]);
//native printf(const format[], {Float,_}:...);
//native format(output[], len, const format[], {Float,_}:...);
int SendClientMessage(int playerid, int color, const char message[]);
int SendClientMessageToAll(int color, const char message[]);
int SendPlayerMessageToPlayer(int playerid, int senderid, const char message[]);
int SendPlayerMessageToAll(int senderid, const char message[]);
int SendDeathMessage(int killer, int killee, int weapon);
int GameTextForAll(const char string[], int time, int style);
int GameTextForPlayer(int playerid, const char string[], int time, int style);
int SetTimer(char funcname[], int interval, int repeating);
//int SetTimerEx(char funcname[], int interval, int repeating, const char format[], {Float,_}:...);
int KillTimer(int timerid);
int GetTickCount();
int GetMaxPlayers();
//int CallRemoteFunction(const char function[], const char format[], {Float,_}:...);
//int CallLocalFunction(const function[], const format[], {Float,_}:...);
float asin(float value);
float acos(float value);
float atan(float value);
float atan2(float x, float y);

// Game
int SetGameModeText(const char string[]);
int SetTeamCount(int count);
int AddPlayerClass(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
int AddPlayerClassEx(int teamid, int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
int AddStaticVehicle(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2);
int AddStaticVehicleEx(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2, int respawn_delay);
int AddStaticPickup(int model, int type, float X, float Y, float Z, int virtualworld = 0);
int CreatePickup(int model, int type, float X, float Y, float Z, int virtualworld = 0);
int DestroyPickup(int pickup);
int ShowNameTags(int show);
int ShowPlayerMarkers(int mode);
int GameModeExit();
int SetWorldTime(int hour);
int GetWeaponName(int weaponid, const char weapon[], int len);
int EnableTirePopping(int enable); // deprecated function
int EnableVehicleFriendlyFire();
int AllowInteriorWeapons(int allow);
int SetWeather(int weatherid);
int SetGravity(float gravity);
int AllowAdminTeleport(float allow);
int SetDeathDropAmount(int amount);
int CreateExplosion(float X, float Y, float Z, int type, float Radius);
int EnableZoneNames(int enable);
int UsePlayerPedAnims();		// Will cause the players to use CJ running/walking animations
int DisableInteriorEnterExits();  // will disable all interior enter/exits in the game.
int SetNameTagDrawDistance(float distance); // Distance at which nametags will start rendering on the client.
int DisableNameTagLOS(); // Disables the nametag Line-Of-Sight checking
int LimitGlobalChatRadius(float chat_radius);
int LimitPlayerMarkerRadius(float marker_radius);

// Npc
int ConnectNPC(char name[], char script[]);
int IsPlayerNPC(int playerid);

// Admin
int IsPlayerAdmin(int playerid);
int Kick(int playerid);
int Ban(int playerid);
int BanEx(int playerid, const char reason[]);
int SendRconCommand(char command[]);
int GetServerVarAsString(const char varname[], char buffer[], int len);
int GetServerVarAsInt(const char varname[]);
int GetServerVarAsBool(const char varname[]);
int GetPlayerNetworkStats(int playerid, char retstr[], int retstr_size);
int GetNetworkStats(char retstr[], int retstr_size);
int GetPlayerVersion(int playerid, const char version[], int len); // Returns the SA-MP client revision as reported by the player


// Menu
typedef int Menu;
Menu CreateMenu(const char title[], int columns, float x, float y, float col1width, float col2width = 0.0);
Menu DestroyMenu(Menu menuid);
int AddMenuItem(Menu menuid, int column, const char menutext[]);
int SetMenuColumnHeader(Menu menuid, int column, const char columnheader[]);
int ShowMenuForPlayer(Menu menuid, int playerid);
int HideMenuForPlayer(Menu menuid, int playerid);
int IsValidMenu(Menu menuid);
int DisableMenu(Menu menuid);
int DisableMenuRow(Menu menuid, int row);
Menu GetPlayerMenu(int playerid);

// Text Draw
#define TEXT_DRAW_FONT_SPRITE_DRAW	 4
#define TEXT_DRAW_FONT_MODEL_PREVIEW 5

typedef int Text;
Text TextDrawCreate(float x, float y, char text[]);
int TextDrawDestroy(Text text);
int TextDrawLetterSize(Text text, float x, float y);
int TextDrawTextSize(Text text, float x, float y);
int TextDrawAlignment(Text text, int alignment);
int TextDrawColor(Text text, int color);
int TextDrawUseBox(Text text, int use);
int TextDrawBoxColor(Text text, int color);
int TextDrawSetShadow(Text text, int size);
int TextDrawSetOutline(Text text, int size);
int TextDrawBackgroundColor(Text text, int color);
int TextDrawFont(Text text, int font);
int TextDrawSetProportional(Text text, int set);
int TextDrawSetSelectable(Text text, int set);
int TextDrawShowForPlayer(int playerid, Text text);
int TextDrawHideForPlayer(int playerid, Text text);
int TextDrawShowForAll(Text text);
int TextDrawHideForAll(Text text);
int TextDrawSetString(Text text, char string[]);
int TextDrawSetPreviewModel(Text text, int modelindex);
int TextDrawSetPreviewRot(Text text, float fRotX, float fRotY, float fRotZ, float fZoom = 1.0);
int TextDrawSetPreviewVehCol(Text text, int color1, int color2);

// Gang Zones
int GangZoneCreate(float minx, float miny, float maxx, float maxy);
int GangZoneDestroy(int zone);
int GangZoneShowForPlayer(int playerid, int zone, int color);
int GangZoneShowForAll(int zone, int color);
int GangZoneHideForPlayer(int playerid, int zone);
int GangZoneHideForAll(int zone);
int GangZoneFlashForPlayer(int playerid, int zone, int flashcolor);
int GangZoneFlashForAll(int zone, int flashcolor);
int GangZoneStopFlashForPlayer(int playerid, int zone);
int GangZoneStopFlashForAll(int zone);

// Global 3D Text Labels
typedef int Text3D;
Text3D Create3DTextLabel(char text[], int color, float X, float Y, float Z, float DrawDistance, int virtualworld, int testLOS=0);
int Delete3DTextLabel(Text3D id);
int Attach3DTextLabelToPlayer(Text3D id, int playerid, float OffsetX, float OffsetY, float OffsetZ);
int Attach3DTextLabelToVehicle(Text3D id, int vehicleid, float OffsetX, float OffsetY, float OffsetZ);
int Update3DTextLabelText(Text3D id, int color, char text[]);

// Per-player 3D Text Labels
typedef int PlayerText3D;
PlayerText3D CreatePlayer3DTextLabel(int playerid, char text[], int color, float X, float Y, float Z, float DrawDistance, int attachedplayer=INVALID_PLAYER_ID, int attachedvehicle=INVALID_VEHICLE_ID, int testLOS=0);
int DeletePlayer3DTextLabel(int playerid, PlayerText3D id);
int UpdatePlayer3DTextLabelText(int playerid, PlayerText3D id, int color, char text[]);

// Player GUI Dialog
#define DIALOG_STYLE_MSGBOX		0
#define DIALOG_STYLE_INPUT		1
#define DIALOG_STYLE_LIST		2
#define DIALOG_STYLE_PASSWORD	3

int ShowPlayerDialog(int playerid, int dialogid, int style, char caption[], char info[], char button1[], char button2[]);

// --------------------------------------------------
// Defines
// --------------------------------------------------

// States
#define PLAYER_STATE_NONE						(0)
#define PLAYER_STATE_ONFOOT						(1)
#define PLAYER_STATE_DRIVER						(2)
#define PLAYER_STATE_PASSENGER					(3)
#define PLAYER_STATE_EXIT_VEHICLE				(4) // (used internally)
#define PLAYER_STATE_ENTER_VEHICLE_DRIVER		(5) // (used internally)
#define PLAYER_STATE_ENTER_VEHICLE_PASSENGER	(6) // (used internally)
#define PLAYER_STATE_WASTED						(7)
#define PLAYER_STATE_SPAWNED					(8)
#define PLAYER_STATE_SPECTATING					(9)

// Marker modes used by ShowPlayerMarkers()
#define PLAYER_MARKERS_MODE_OFF			(0)
#define PLAYER_MARKERS_MODE_GLOBAL		(1)
#define PLAYER_MARKERS_MODE_STREAMED	(2)

// Weapons
#define WEAPON_BRASSKNUCKLE				(1)
#define WEAPON_GOLFCLUB					(2)
#define WEAPON_NITESTICK				(3)
#define WEAPON_KNIFE					(4)
#define WEAPON_BAT						(5)
#define WEAPON_SHOVEL					(6)
#define WEAPON_POOLSTICK				(7)
#define WEAPON_KATANA					(8)
#define WEAPON_CHAINSAW					(9)
#define WEAPON_DILDO					(10)
#define WEAPON_DILDO2					(11)
#define WEAPON_VIBRATOR					(12)
#define WEAPON_VIBRATOR2				(13)
#define WEAPON_FLOWER					(14)
#define WEAPON_CANE						(15)
#define WEAPON_GRENADE					(16)
#define WEAPON_TEARGAS					(17)
#define WEAPON_MOLTOV					(18)
#define WEAPON_COLT45					(22)
#define WEAPON_SILENCED					(23)
#define WEAPON_DEAGLE					(24)
#define WEAPON_SHOTGUN					(25)
#define WEAPON_SAWEDOFF					(26)
#define WEAPON_SHOTGSPA					(27)
#define WEAPON_UZI						(28)
#define WEAPON_MP5						(29)
#define WEAPON_AK47						(30)
#define WEAPON_M4						(31)
#define WEAPON_TEC9						(32)
#define WEAPON_RIFLE					(33)
#define WEAPON_SNIPER					(34)
#define WEAPON_ROCKETLAUNCHER			(35)
#define WEAPON_HEATSEEKER				(36)
#define WEAPON_FLAMETHROWER				(37)
#define WEAPON_MINIGUN					(38)
#define WEAPON_SATCHEL					(39)
#define WEAPON_BOMB						(40)
#define WEAPON_SPRAYCAN					(41)
#define WEAPON_FIREEXTINGUISHER			(42)
#define WEAPON_CAMERA					(43)
#define WEAPON_PARACHUTE				(46)
#define WEAPON_VEHICLE					(49)
#define WEAPON_DROWN					(53)
#define WEAPON_COLLISION				(54)

// Keys
#define KEY_ACTION				(1)
#define KEY_CROUCH				(2)
#define KEY_FIRE				(4)
#define KEY_SPRINT				(8)
#define KEY_SECONDARY_ATTACK	(16)
#define KEY_JUMP				(32)
#define KEY_LOOK_RIGHT			(64)
#define KEY_HANDBRAKE			(128)
#define KEY_LOOK_LEFT			(256)
#define KEY_SUBMISSION			(512)
#define KEY_LOOK_BEHIND			(512)
#define KEY_WALK				(1024)
#define KEY_ANALOG_UP			(2048)
#define KEY_ANALOG_DOWN			(4096)
#define KEY_ANALOG_LEFT			(8192)
#define KEY_ANALOG_RIGHT		(16384)
#define KEY_YES					(65536)
#define KEY_NO					(131072)
#define KEY_CTRL_BACK			(262144)

#define KEY_UP					(-128)
#define KEY_DOWN				(128)
#define KEY_LEFT				(-128)
#define KEY_RIGHT				(128)

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnGameModeInit();
int OnGameModeExit();
int OnFilterScriptInit();
int OnFilterScriptExit();
int OnPlayerConnect(int playerid);
int OnPlayerDisconnect(int playerid, int reason);
int OnPlayerSpawn(int playerid);
int OnPlayerDeath(int playerid, int killerid, int reason);
int OnVehicleSpawn(int vehicleid);
int OnVehicleDeath(int vehicleid, int killerid);
int OnPlayerText(int playerid, char text[]);
int OnPlayerCommandText(int playerid, char cmdtext[]);
int OnPlayerRequestClass(int playerid, int classid);
int OnPlayerEnterVehicle(int playerid, int vehicleid, int ispassenger);
int OnPlayerExitVehicle(int playerid, int vehicleid);
int OnPlayerStateChange(int playerid, int newstate, int oldstate);
int OnPlayerEnterCheckpoint(int playerid);
int OnPlayerLeaveCheckpoint(int playerid);
int OnPlayerEnterRaceCheckpoint(int playerid);
int OnPlayerLeaveRaceCheckpoint(int playerid);
int OnRconCommand(char cmd[]);
int OnPlayerRequestSpawn(int playerid);
int OnObjectMoved(int objectid);
int OnPlayerObjectMoved(int playerid, int objectid);
int OnPlayerPickUpPickup(int playerid, int pickupid);
int OnVehicleMod(int playerid, int vehicleid, int componentid);
int OnEnterExitModShop(int playerid, int enterexit, int interiorid);
int OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid);
int OnVehicleRespray(int playerid, int vehicleid, int color1, int color2);
int OnVehicleDamageStatusUpdate(int vehicleid, int playerid);
int OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat);
int OnPlayerSelectedMenuRow(int playerid, int row);
int OnPlayerExitedMenu(int playerid);
int OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid);
int OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys);
int OnRconLoginAttempt(char ip[], int password[], int success);
int OnPlayerUpdate(int playerid);
int OnPlayerStreamIn(int playerid, int forplayerid);
int OnPlayerStreamOut(int playerid, int forplayerid);
int OnVehicleStreamIn(int vehicleid, int forplayerid);
int OnVehicleStreamOut(int vehicleid, int forplayerid);
int OnDialogResponse(int playerid, int dialogid, int response, int listitem, char inputtext[]);
int OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid);
int OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid);
int OnPlayerClickMap(int playerid, float fX, float fY, float fZ);
int OnPlayerClickTextDraw(int playerid, Text clickedid);
//--int OnPlayerClickPlayerTextDraw(int playerid, PlayerText:playertextid);

#define CLICK_SOURCE_SCOREBOARD		0
int OnPlayerClickPlayer(int playerid, int clickedplayerid, int source);

#define EDIT_RESPONSE_CANCEL		0
#define EDIT_RESPONSE_FINAL			1
#define EDIT_RESPONSE_UPDATE		2

int OnPlayerEditObject(int playerid, int playerobject, int objectid, int response, 
float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ );

int OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid,
float fOffsetX, float fOffsetY, float fOffsetZ,
float fRotX, float fRotY, float fRotZ,
float fScaleX, float fScaleY, float fScaleZ);

#define SELECT_OBJECT_GLOBAL_OBJECT	1
#define SELECT_OBJECT_PLAYER_OBJECT 2

int OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ);

// --------------------------------------------------
/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#pragma once

#define CARMODTYPE_SPOILER		0
#define CARMODTYPE_HOOD			1
#define CARMODTYPE_ROOF			2
#define CARMODTYPE_SIDESKIRT	3
#define CARMODTYPE_LAMPS		4
#define CARMODTYPE_NITRO		5
#define CARMODTYPE_EXHAUST		6
#define CARMODTYPE_WHEELS		7
#define CARMODTYPE_STEREO		8
#define CARMODTYPE_HYDRAULICS	9
#define CARMODTYPE_FRONT_BUMPER	10
#define CARMODTYPE_REAR_BUMPER	11
#define CARMODTYPE_VENT_RIGHT	12
#define CARMODTYPE_VENT_LEFT	13

#define VEHICLE_PARAMS_UNSET	-1
#define VEHICLE_PARAMS_OFF		0
#define VEHICLE_PARAMS_ON		1

#define VEHICLE_MODEL_INFO_SIZE				1
#define VEHICLE_MODEL_INFO_FRONTSEAT		2
#define VEHICLE_MODEL_INFO_REARSEAT			3
#define VEHICLE_MODEL_INFO_PETROLCAP		4
#define VEHICLE_MODEL_INFO_WHEELSFRONT		5
#define VEHICLE_MODEL_INFO_WHEELSREAR		6
#define VEHICLE_MODEL_INFO_WHEELSMID		7
#define VEHICLE_MODEL_INFO_FRONT_BUMPER_Z	8
#define VEHICLE_MODEL_INFO_REAR_BUMPER_Z	9

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

#define DIALOG_STYLE_MSGBOX						(0)
#define DIALOG_STYLE_INPUT						(1)
#define DIALOG_STYLE_LIST						(2)
#define DIALOG_STYLE_PASSWORD					(3)

#define TEXT_DRAW_FONT_SPRITE_DRAW				(4)
#define TEXT_DRAW_FONT_MODEL_PREVIEW			(5)

#define CLICK_SOURCE_SCOREBOARD		0

#define EDIT_RESPONSE_CANCEL		0
#define EDIT_RESPONSE_FINAL			1
#define EDIT_RESPONSE_UPDATE		2

#define SELECT_OBJECT_GLOBAL_OBJECT	1
#define SELECT_OBJECT_PLAYER_OBJECT 2

#define OBJECT_MATERIAL_SIZE_32x32		10
#define OBJECT_MATERIAL_SIZE_64x32		20
#define OBJECT_MATERIAL_SIZE_64x64		30
#define OBJECT_MATERIAL_SIZE_128x32		40
#define OBJECT_MATERIAL_SIZE_128x64		50
#define OBJECT_MATERIAL_SIZE_128x128	60
#define OBJECT_MATERIAL_SIZE_256x32		70
#define OBJECT_MATERIAL_SIZE_256x64		80
#define OBJECT_MATERIAL_SIZE_256x128	90
#define OBJECT_MATERIAL_SIZE_256x256	100
#define OBJECT_MATERIAL_SIZE_512x64		110
#define OBJECT_MATERIAL_SIZE_512x128	120
#define OBJECT_MATERIAL_SIZE_512x256	130
#define OBJECT_MATERIAL_SIZE_512x512	140
#define OBJECT_MATERIAL_TEXT_ALIGN_LEFT		0
#define OBJECT_MATERIAL_TEXT_ALIGN_CENTER	1
#define OBJECT_MATERIAL_TEXT_ALIGN_RIGHT	2

#define SPECIAL_ACTION_NONE				0
#define SPECIAL_ACTION_DUCK				1
#define SPECIAL_ACTION_USEJETPACK		2
#define SPECIAL_ACTION_ENTER_VEHICLE	3
#define SPECIAL_ACTION_EXIT_VEHICLE     4
#define SPECIAL_ACTION_DANCE1			5
#define SPECIAL_ACTION_DANCE2			6
#define SPECIAL_ACTION_DANCE3			7
#define SPECIAL_ACTION_DANCE4			8
#define SPECIAL_ACTION_HANDSUP			10
#define SPECIAL_ACTION_USECELLPHONE		11
#define SPECIAL_ACTION_SITTING			12
#define SPECIAL_ACTION_STOPUSECELLPHONE 13
#define SPECIAL_ACTION_DRINK_BEER		20
#define SPECIAL_ACTION_SMOKE_CIGGY		21
#define SPECIAL_ACTION_DRINK_WINE		22
#define SPECIAL_ACTION_DRINK_SPRUNK		23
#define SPECIAL_ACTION_CUFFED			24
#define SPECIAL_ACTION_CARRY			25

#define FIGHT_STYLE_NORMAL				4
#define FIGHT_STYLE_BOXING				5
#define FIGHT_STYLE_KUNGFU				6
#define FIGHT_STYLE_KNEEHEAD			7
#define FIGHT_STYLE_GRABKICK			15
#define FIGHT_STYLE_ELBOW				16

#define WEAPONSKILL_PISTOL 				0
#define WEAPONSKILL_PISTOL_SILENCED		1
#define WEAPONSKILL_DESERT_EAGLE		2
#define WEAPONSKILL_SHOTGUN				3
#define WEAPONSKILL_SAWNOFF_SHOTGUN		4
#define WEAPONSKILL_SPAS12_SHOTGUN		5
#define WEAPONSKILL_MICRO_UZI			6
#define WEAPONSKILL_MP5					7
#define WEAPONSKILL_AK47				8
#define WEAPONSKILL_M4					9
#define WEAPONSKILL_SNIPERRIFLE			10

#define WEAPONSTATE_UNKNOWN				-1
#define WEAPONSTATE_NO_BULLETS			0
#define WEAPONSTATE_LAST_BULLET			1
#define WEAPONSTATE_MORE_BULLETS		2
#define WEAPONSTATE_RELOADING			3

// Recording for NPC playback
#define PLAYER_RECORDING_TYPE_NONE		0
#define PLAYER_RECORDING_TYPE_DRIVER	1
#define PLAYER_RECORDING_TYPE_ONFOOT	2

#define MAX_PLAYER_ATTACHED_OBJECTS 10 // This is the number of attached indexes available ie 10 = 0-9

#define PLAYER_VARTYPE_NONE			0
#define PLAYER_VARTYPE_INT			1
#define PLAYER_VARTYPE_STRING		2
#define PLAYER_VARTYPE_FLOAT		3

#define MAX_CHATBUBBLE_LENGTH 144

#define MAPICON_LOCAL			  0 // displays in the player's local are
#define MAPICON_GLOBAL			  1 // displays always
#define MAPICON_LOCAL_CHECKPOINT  2 // displays in the player's local area and has a checkpoint marker
#define MAPICON_GLOBAL_CHECKPOINT 3 // displays always and has a checkpoint marker

#define CAMERA_CUT	2
#define CAMERA_MOVE 1

#define SPECTATE_MODE_NORMAL	1
#define SPECTATE_MODE_FIXED		2
#define SPECTATE_MODE_SIDE		3

typedef int Text;
typedef int PlayerText;

typedef int Text3D;
typedef int PlayerText3D;

typedef int Menu;

typedef int DB;
typedef int DBResult;

#include "server.h"
#include "npc.h"
#include "players.h"
#include "vehicles.h"
#include "objects.h"
#include "sampdb.h"
#include "core.h"

// 事件注册机制

#define EVENT_NULL	0xFFFFFFFF

// 事件类型
typedef enum
{
	EVENT_RCON_COMMAND,
	EVENT_GAMEMODE_INIT,
	EVENT_GAMEMODE_EXIT,
	EVENT_PLAYER_CONNECT,
	EVENT_PLAYER_DISCONNECT,
	EVENT_PLAYER_SPAWN,
	EVENT_PLAYER_DEATH,
	EVENT_VEHICLE_SPAWN,
	EVENT_VEHICLE_DEATH,
	EVENT_PLAYER_TEXT,
	EVENT_PLAYER_COMMAND_TEXT,
	EVENT_PLAYER_REQUEST_CLASS,
	EVENT_PLAYER_ENTER_VEHICLE,
	EVENT_PLAYER_EXIT_VEHICLE,
	EVENT_PLAYER_STATE_CHANGE,
	EVENT_PLAYER_ENTER_CHECKPOINT,
	EVENT_PLAYER_LEAVE_CHECKPOINT,
	EVENT_PLAYER_ENTER_RACE_CHECKPOINT,
	EVENT_PLAYER_LEAVE_RACE_CHECKPOINT,
	EVENT_PLAYER_REQUEST_SPAWN,
	EVENT_OBJECT_MOVED,
	EVENT_PLAYER_OBJECT_MOVED,
	EVENT_PLAYER_PICK_UP_PICKUP,
	EVENT_VEHICLE_MOD,
	EVENT_ENTER_EXIT_MOD_SHOP,
	EVENT_VEHICLE_PAINTJOB,
	EVENT_VEHICLE_RESPRAY,
	EVENT_VEHICLE_DAMAGE_STATUS_UPDATE,
	EVENT_UNOCCUPIED_VEHICLE_UPDATE,
	EVENT_PLAYER_SELECTED_MENU_ROW,
	EVENT_PLAYER_EXITED_MENU,
	EVENT_PLAYER_INTERIOR_CHANGE,
	EVENT_PLAYER_KEY_STATE_CHANGE,
	EVENT_RCON_LOGIN_ATTEMPT,
	EVENT_PLAYER_UPDATE,
	EVENT_PLAYER_STREAM_IN,
	EVENT_PLAYER_STREAM_OUT,
	EVENT_VEHICLE_STREAM_IN,
	EVENT_VEHICLE_STREAM_OUT,
	EVENT_DIALOG_RESPONSE,
	EVENT_PLAYER_TAKE_DAMAGE,
	EVENT_PLAYER_GIVE_DAMAGE,
	EVENT_PLAYER_CLICK_MAP,
	EVENT_PLAYER_CLICK_TEXT_DRAW,
	EVENT_PLAYER_CLICK_PLAYER_TEXT_DRAW,
	EVENT_PLAYER_CLICK_PLAYER,
	EVENT_PLAYER_EDIT_OBJECT,
	EVENT_PLAYER_EDIT_ATTACHED_OBJECT,
	EVENT_PLAYER_SELECT_OBJECT,
	EVENT_NPC_CONNECT,
	EVENT_NPC_DISCONNECT,
	EVENT_NPC_SPAWN,
	EVENT_NPC_DEATH,
	EVENT_NPC_TEXT,
	EVENT_NPC_ENTER_VEHICLE,
	EVENT_NPC_EXIT_VEHICLE,
	EVENT_NPC_STATE_CHANGE,
	EVENT_NPC_ENTER_CHECKPOINT,
	EVENT_NPC_LEAVE_CHECKPOINT,
	EVENT_NPC_ENTER_RACE_CHECKPOINT,
	EVENT_NPC_LEAVE_RACE_CHECKPOINT,
	EVENT_NPC_OBJECT_MOVED,
	EVENT_NPC_PICK_UP_PICKUP,
	EVENT_NPC_INTERIOR_CHANGE,
	EVENT_NPC_UPDATE,
	EVENT_NPC_STREAM_IN,
	EVENT_NPC_STREAM_OUT,
	EVENT_NPC_TAKE_DAMAGE,
	EVENT_NPC_GIVE_DAMAGE,
} EVENT_TYPE;

typedef enum
{
	EVENT_P_HIGH,
	EVENT_P_NORMAL,
	EVENT_P_LOW,
} EVENT_PRIORITY;

typedef struct BaseNPCConnect{ int npcid; } BaseNPCConnect;
typedef struct BaseNPCDisconnect{ int npcid; int reason; } BaseNPCDisconnect;
typedef struct BaseNPCSpawn{ int npcid; } BaseNPCSpawn;
typedef struct BaseNPCDeath{ int npcid; int killerid; int reason; } BaseNPCDeath;
typedef struct BaseNPCText{ int npcid; char *text; } BaseNPCText;
typedef struct BaseNPCEnterVehicle{ int npcid; int vehicleid; int ispassenger; } BaseNPCEnterVehicle;
typedef struct BaseNPCExitVehicle{ int npcid; int vehicleid; } BaseNPCExitVehicle;
typedef struct BaseNPCStateChange{ int npcid; int newstate; int oldstate; } BaseNPCStateChange;
typedef struct BaseNPCEnterCheckpoint{ int npcid; } BaseNPCEnterCheckpoint;
typedef struct BaseNPCLeaveCheckpoint{ int npcid; } BaseNPCLeaveCheckpoint;
typedef struct BaseNPCEnterRaceCheckpoint{ int npcid; } BaseNPCEnterRaceCheckpoint;
typedef struct BaseNPCLeaveRaceCheckpoint{ int npcid; } BaseNPCLeaveRaceCheckpoint;
typedef struct BaseNPCObjectMoved{ int npcid; int objectid; } BaseNPCObjectMoved;
typedef struct BaseNPCPickUpPickup{ int npcid; int pickupid; } BaseNPCPickUpPickup;
typedef struct BaseNPCInteriorChange{ int npcid; int newinteriorid; int oldinteriorid; } BaseNPCInteriorChange;
typedef struct BaseNPCUpdate{ int npcid; } BaseNPCUpdate;
typedef struct BaseNPCStreamIn{ int npcid; int forplayerid; } BaseNPCStreamIn;
typedef struct BaseNPCStreamOut{ int npcid; int forplayerid; } BaseNPCStreamOut;
typedef struct BaseNPCTakeDamage{ int npcid; int issuerid; float amount; int weaponid; } BaseNPCTakeDamage;
typedef struct BaseNPCGiveDamage{ int npcid; int damagedid; float amount; int weaponid; } BaseNPCGiveDamage;
typedef struct BaseObjectMoved{ int objectid; } BaseObjectMoved;
typedef struct BasePlayerConnect{ int playerid; } BasePlayerConnect;
typedef struct BasePlayerDisconnect{ int playerid; int reason; } BasePlayerDisconnect;
typedef struct BasePlayerSpawn{ int playerid; } BasePlayerSpawn;
typedef struct BasePlayerDeath{ int playerid; int killerid; int reason; } BasePlayerDeath;
typedef struct BasePlayerText{ int playerid; char *text; } BasePlayerText;
typedef struct BasePlayerCommandText{ int playerid; char *cmdtext; } BasePlayerCommandText;
typedef struct BasePlayerRequestClass{ int playerid; int classid; } BasePlayerRequestClass;
typedef struct BasePlayerEnterVehicle{ int playerid; int vehicleid; int ispassenger; } BasePlayerEnterVehicle;
typedef struct BasePlayerExitVehicle{ int playerid; int vehicleid; } BasePlayerExitVehicle;
typedef struct BasePlayerStateChange{ int playerid; int newstate; int oldstate; } BasePlayerStateChange;
typedef struct BasePlayerEnterCheckpoint{ int playerid; } BasePlayerEnterCheckpoint;
typedef struct BasePlayerLeaveCheckpoint{ int playerid; } BasePlayerLeaveCheckpoint;
typedef struct BasePlayerEnterRaceCheckpoint{ int playerid; } BasePlayerEnterRaceCheckpoint;
typedef struct BasePlayerLeaveRaceCheckpoint{ int playerid; } BasePlayerLeaveRaceCheckpoint;
typedef struct BasePlayerRequestSpawn{ int playerid; } BasePlayerRequestSpawn;
typedef struct BasePlayerObjectMoved{ int playerid; int objectid; } BasePlayerObjectMoved;
typedef struct BasePlayerPickUpPickup{ int playerid; int pickupid; } BasePlayerPickUpPickup;
typedef struct BasePlayerSelectedMenuRow{ int playerid; int row; } BasePlayerSelectedMenuRow;
typedef struct BasePlayerExitedMenu{ int playerid; } BasePlayerExitedMenu;
typedef struct BasePlayerInteriorChange{ int playerid; int newinteriorid; int oldinteriorid; } BasePlayerInteriorChange;
typedef struct BasePlayerKeyStateChange{ int playerid; int newkeys; int oldkeys; } BasePlayerKeyStateChange;
typedef struct BasePlayerUpdate{ int playerid; } BasePlayerUpdate;
typedef struct BasePlayerStreamIn{ int playerid; int forplayerid; } BasePlayerStreamIn;
typedef struct BasePlayerStreamOut{ int playerid; int forplayerid; } BasePlayerStreamOut;
typedef struct BasePlayerTakeDamage{ int playerid; int issuerid; float amount; int weaponid; } BasePlayerTakeDamage;
typedef struct BasePlayerGiveDamage{ int playerid; int damagedid; float amount; int weaponid; } BasePlayerGiveDamage;
typedef struct BasePlayerClickMap{ int playerid; float fX; float fY; float fZ; } BasePlayerClickMap;
typedef struct BasePlayerClickTextDraw{ int playerid; Text clickedid; } BasePlayerClickTextDraw;
typedef struct BasePlayerClickPlayerTextDraw{ int playerid; PlayerText playertextid; } BasePlayerClickPlayerTextDraw;
typedef struct BasePlayerClickPlayer{ int playerid; int clickedplayerid; int source; } BasePlayerClickPlayer;
typedef struct BasePlayerEditObject{ int playerid; int playerobject; int objectid; int response; float fX; float fY; float fZ; float fRotX; float fRotY; float fRotZ; } BasePlayerEditObject;
typedef struct BasePlayerEditAttachedObject{ int playerid; int response; int index; int modelid; int boneid; float fOffsetX; float fOffsetY; float fOffsetZ; float fRotX; float fRotY; float fRotZ; float fScaleX; float fScaleY; float fScaleZ; } BasePlayerEditAttachedObject;
typedef struct BasePlayerSelectObject{ int playerid; int type; int objectid; int modelid; float fX; float fY; float fZ; } BasePlayerSelectObject;
typedef struct BaseEnterExitModShop{ int playerid; int enterexit; int interiorid; } BaseEnterExitModShop;
typedef struct BaseDialogResponse{ int playerid; int dialogid; int response; int listitem; char *inputtext; } BaseDialogResponse;
// typedef struct BaseGameModeInit{ } ;
// typedef struct BaseGameModeExit{ } ;
typedef struct BaseRconCommand{ char *cmd; } BaseRconCommand;
typedef struct BaseRconLoginAttempt{ char *ip; char *password; int success; } BaseRconLoginAttempt;
typedef struct BaseVehicleSpawn{ int vehicleid; } BaseVehicleSpawn;
typedef struct BaseVehicleDeath{ int vehicleid; int killerid; } BaseVehicleDeath;
typedef struct BaseVehicleDamageStatusUpdate{ int vehicleid; int playerid; } BaseVehicleDamageStatusUpdate;
typedef struct BaseVehicleStreamIn{ int vehicleid; int forplayerid; } BaseVehicleStreamIn;
typedef struct BaseVehicleStreamOut{ int vehicleid; int forplayerid; } BaseVehicleStreamOut;
typedef struct BaseUnoccupiedVehicleUpdate{ int vehicleid; int playerid; int passenger_seat; } BaseUnoccupiedVehicleUpdate;
typedef struct BaseVehicleMod{ int playerid; int vehicleid; int componentid; } BaseVehicleMod;
typedef struct BaseVehiclePaintjob{ int playerid; int vehicleid; int paintjobid; } BaseVehiclePaintjob;
typedef struct BaseVehicleRespray{ int playerid; int vehicleid; int color1; int color2; } BaseVehicleRespray;

typedef union Base
{
	BaseRconCommand BaseRconCommand;
} Base;

typedef void (*EVENT_FUNCTION)(Base base); // base 事件源参数
typedef unsigned int EVENT_HANDLE; // 事件句柄

typedef struct
{
	EVENT_FUNCTION func; // 事件委托
	unsigned int eventID; // 事件ID 既访问句柄
} EVENT;



#include "event.h"
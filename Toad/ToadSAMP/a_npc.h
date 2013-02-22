#pragma once
/*  SA-MP NPC Functions
*
*  (c) Copyright 2009, SA-MP Team
*
*/

#include "toad_callbacks.h"
#include "toad_functions.h"

// --------------------------------------------------
// Natives
// --------------------------------------------------

// Util
int print(const char string[]);
void (*printf)(char* format, ...);
//native format(output[], len, const format[], {Float,_}:...);
//native SetTimer(funcname[], interval, repeating);
//native KillTimer(timerid);
int GetTickCount();
float asin(float value);
float acos(float value);
float atan(float value);
float atan2(float x, float y);

int SendChat(char msg[]);
int SendCommand(char commandtext[]);

int GetPlayerState(int playerid);
int GetPlayerPos(int, float *x, float *y, float *z);
int GetPlayerVehicleID(int playerid);
int GetPlayerArmedWeapon(int playerid);
float GetPlayerHealth(int playerid);
float GetPlayerSpecialAction(int playerid);
int IsPlayerStreamedIn(int playerid);
int IsVehicleStreamedIn(int vehicleid);
int GetPlayerKeys(int playerid, int *keys, int *updown, int *leftright);
int GetPlayerFacingAngle(int playerid, float *ang);
int GetMyPos(float *x, float *y, float *z);
int SetMyPos(float x, float y, float z);
int GetMyFacingAngle(float *ang);
int SetMyFacingAngle(float ang);

int GetDistanceFromMeToPoint(float X, float Y, float Z, float *Distance);
int IsPlayerInRangeOfPoint(int playerid, float range, float X, float Y, float Z);

int GetPlayerName(int playerid, const char name[], int len);
int IsPlayerConnected(int playerid);

#define PLAYER_RECORDING_TYPE_NONE		0
#define PLAYER_RECORDING_TYPE_DRIVER	1
#define PLAYER_RECORDING_TYPE_ONFOOT	2

int StartRecordingPlayback(int playbacktype, char recordname[]);
int StopRecordingPlayback();
int PauseRecordingPlayback();
int ResumeRecordingPlayback();

// --------------------------------------------------
// Defines
// --------------------------------------------------

// States
#define PLAYER_STATE_NONE						(0)
#define PLAYER_STATE_ONFOOT						(1)
#define PLAYER_STATE_DRIVER						(2)
#define PLAYER_STATE_PASSENGER					(3)
#define PLAYER_STATE_WASTED						(7)
#define PLAYER_STATE_SPAWNED					(8)
#define PLAYER_STATE_SPECTATING					(9)

// Misc
#define MAX_PLAYER_NAME							(24)
#define MAX_PLAYERS								(500)
#define MAX_VEHICLES							(2000)
#define INVALID_PLAYER_ID						(0xFFFF)
#define INVALID_VEHICLE_ID						(0xFFFF)
#define NO_TEAM									(255)
#define MAX_OBJECTS								(150)
#define INVALID_OBJECT_ID						(255)
#define MAX_GANG_ZONES							(1024)
#define MAX_TEXT_DRAWS							(1024)
#define MAX_MENUS								(128)
#define INVALID_MENU							(0xFF)
#define INVALID_TEXT_DRAW						(0xFFFF)
#define INVALID_GANG_ZONE						(-1)

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
#define KEY_ANALOG_RIGHT		(16384)
#define KEY_ANALOG_LEFT			(8192)

#define KEY_UP					(-128)
#define KEY_DOWN				(128)
#define KEY_LEFT				(-128)
#define KEY_RIGHT				(128)

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnNPCModeInit();
int OnNPCModeExit();
int OnNPCConnect(int myplayerid);
int OnNPCDisconnect(char reason[]);
int OnNPCSpawn();
int OnNPCEnterVehicle(int vehicleid, int seatid);
int OnNPCExitVehicle();
int OnClientMessage(int color, char text[]);
int OnPlayerDeath(int playerid);
int OnPlayerText(int playerid, char text[]);
int OnPlayerStreamIn(int playerid);
int OnPlayerStreamOut(int playerid);
int OnVehicleStreamIn(int vehicleid);
int OnVehicleStreamOut(int vehicleid);
int OnRecordingPlaybackEnd();

// --------------------------------------------------
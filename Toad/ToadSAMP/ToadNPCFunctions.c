#include <stdio.h>
#include "a_npc.h"

//native format(output[], len, const format[], {Float,_}:...);
//native SetTimer(funcname[], interval, repeating);
//native KillTimer(timerid);
int GetTickCount()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}

float asin(float value)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
	return amx_ctof(rval);
}

float acos(float value)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
	return amx_ctof(rval);
}

float atan(float value)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
	return amx_ctof(rval);
}

float atan2(float x, float y)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "ff", x, y);
	return amx_ctof(rval);
}

int SendChat(char msg[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", msg);
}

int SendCommand(char commandtext[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", commandtext);
}

int GetPlayerState(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

int GetPlayerPos(int playerid, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", x, y, z);
}

int GetPlayerVehicleID(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

int GetPlayerArmedWeapon(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

float GetPlayerHealth(int playerid)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
	return amx_ctof(rval);
}

float GetPlayerSpecialAction(int playerid)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
	return amx_ctof(rval);
}

int IsPlayerStreamedIn(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

int IsVehicleStreamedIn(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}

int GetPlayerKeys(int playerid, int *keys, int *updown, int *leftright)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iIII", playerid, keys, updown, leftright);
}

int GetPlayerFacingAngle(int playerid, float *ang)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", playerid, ang);
}

int GetMyPos(float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "FFF", x, y, z);
}

int SetMyPos(float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "fff", x, y, z);
}

int GetMyFacingAngle(float *ang)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "F", ang);
}

int SetMyFacingAngle(float ang)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", ang);
}

int GetDistanceFromMeToPoint(float X, float Y, float Z, float *Distance)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "fffF", X, Y, Z, Distance);
}

int IsPlayerInRangeOfPoint(int playerid, float range, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffff", playerid, range, X, Y, Z);
}

int GetPlayerName(int playerid, const char name[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, name, len);
}

int IsPlayerConnected(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

int StartRecordingPlayback(int playbacktype, char recordname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playbacktype, recordname);
}

int StopRecordingPlayback()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}

int PauseRecordingPlayback()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}

int ResumeRecordingPlayback()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
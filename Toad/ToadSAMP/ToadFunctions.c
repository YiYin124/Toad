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

#include <stdio.h>
#include "a_samp.h"
#include "toadSAMP.h"

int println(const char string[])
{
	return amx_CallNativeFunc(gAMX, "print", "s", string);
}

int SendClientMessage(int playerid, int color, const char message[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", playerid, color, message);
}

int SendClientMessageToAll(int color, const char message[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", color, message);
}

int SendPlayerMessageToPlayer(int playerid, int senderid, const char message[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", playerid, senderid, message);
}

int SendPlayerMessageToAll(int senderid, const char message[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", senderid, message);
}

int SendDeathMessage(int killer, int killee, int weapon)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", killer, killee, weapon);
}

int GameTextForAll(const char string[], int time, int style)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "sii", string, time, style);
}

int GameTextForPlayer(int playerid, const char string[], int time, int style)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isii", playerid, string, time, style);
}

int GetTickCount()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int GetMaxPlayers()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}

//float asin(float value)
//{
//	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
//	return amx_ctof(rval);
//}
//float acos(float value)
//{
//	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
//	return amx_ctof(rval);
//}
//float atan(float value)
//{
//	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "f", value);
//	return amx_ctof(rval);
//}
//float atan2(float x, float y)
//{
//	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "ff", x, y);
//	return amx_ctof(rval);
//}

// Game
int SetGameModeText(const char string[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", string);
}
int SetTeamCount(int count)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", count);
}
int AddPlayerClass(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffiiiiii", modelid, spawn_x, spawn_y, spawn_z, z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}
int AddPlayerClassEx(int teamid, int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffffiiiiii", teamid, modelid, spawn_x, spawn_y, spawn_z, z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}
int AddStaticVehicle(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffii", modelid, spawn_x, spawn_y, spawn_z, z_angle, color1, color1);
}
int AddStaticVehicleEx(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2, int respawn_delay)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffiii", modelid, spawn_x, spawn_y, spawn_z, respawn_delay);
}
int AddStaticPickup(int model, int type, float X, float Y, float Z, int virtualworld)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffi", model, type, X, Y, Z, virtualworld);
}
int CreatePickup(int model, int type, float X, float Y, float Z, int virtualworld)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffi", model, type, X, Y, Z, virtualworld);
}
int DestroyPickup(int pickup)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", pickup);
}
int ShowNameTags(int show)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", show);
}
int ShowPlayerMarkers(int mode)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", mode);
}
int GameModeExit()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int SetWorldTime(int hour)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", hour);
}
int GetWeaponName(int weaponid, const char weapon[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, weaponid, weapon, len);
}
int EnableTirePopping(int enable)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", enable);
}
int EnableVehicleFriendlyFire()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int AllowInteriorWeapons(int allow)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", allow);
}
int SetWeather(int weatherid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", weatherid);
}
int SetGravity(float gravity)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", gravity);
}
int AllowAdminTeleport(float allow)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", allow);
}
int SetDeathDropAmount(int amount)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", amount);
}
int CreateExplosion(float X, float Y, float Z, int type, float Radius)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "fffif", X, Y, Z, type, Radius);
}
int EnableZoneNames(int enable)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", enable);
}
int UsePlayerPedAnims()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int DisableInteriorEnterExits()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int SetNameTagDrawDistance(float distance)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", distance);
}
int DisableNameTagLOS()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int LimitGlobalChatRadius(float chat_radius)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", chat_radius);
}
int LimitPlayerMarkerRadius(float marker_radius)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "f", marker_radius);
}

// Npc
int ConnectNPC(char name[], char script[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ss", name, script);
}
int IsPlayerNPC(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Admin
int IsPlayerAdmin(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int Kick(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int Ban(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int BanEx(int playerid, const char reason[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, reason);
}
int SendRconCommand(char command[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", command);
}
int GetServerVarAsString(const char varname[], char buffer[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "sS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, varname, buffer, len);
}
int GetServerVarAsInt(const char varname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", varname);
}
int GetServerVarAsBool(const char varname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", varname);
}
int GetPlayerNetworkStats(int playerid, char retstr[], int retstr_size)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", retstr_size);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, retstr, retstr_size);
}
int GetNetworkStats(char retstr[], int retstr_size)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "S[%d]i", retstr_size);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, retstr, retstr_size);
}
int GetPlayerVersion(int playerid, const char version[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, version, len);
}


// Menu
Menu CreateMenu(const char title[], int columns, float x, float y, float col1width, float col2width)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "siffff", title, columns, x, y, col1width, col2width);
}
Menu DestroyMenu(Menu menuid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", menuid);
}
int AddMenuItem(Menu menuid, int column, const char menutext[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", menuid, column, menutext);
}
int SetMenuColumnHeader(Menu menuid, int column, const char columnheader[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", menuid, column, columnheader);
}
int ShowMenuForPlayer(Menu menuid, int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", menuid, playerid);
}
int HideMenuForPlayer(Menu menuid, int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", menuid, playerid);
}
int IsValidMenu(Menu menuid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", menuid);
}
int DisableMenu(Menu menuid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", menuid);
}
int DisableMenuRow(Menu menuid, int row)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", menuid, row);
}
Menu GetPlayerMenu(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Text Draw
Text TextDrawCreate(float x, float y, char text[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ffs", x, y, text);
}
int TextDrawDestroy(Text text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", text);
}
int TextDrawLetterSize(Text text, float x, float y)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iff", text, x, y);
}
int TextDrawTextSize(Text text, float x, float y)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iff", text, x, y);
}
int TextDrawAlignment(Text text, int alignment)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, alignment);
}
int TextDrawColor(Text text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, color);
}
int TextDrawUseBox(Text text, int use)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, use);
}
int TextDrawBoxColor(Text text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, color);
}
int TextDrawSetShadow(Text text, int size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, size);
}
int TextDrawSetOutline(Text text, int size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, size);
}
int TextDrawBackgroundColor(Text text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, color);
}
int TextDrawFont(Text text, int font)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, font);
}
int TextDrawSetProportional(Text text, int set)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, set);
}
int TextDrawSetSelectable(Text text, int set)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, set);
}
int TextDrawShowForPlayer(int playerid, Text text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, text);
}
int TextDrawHideForPlayer(int playerid, Text text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, text);
}
int TextDrawShowForAll(Text text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", text);
}
int TextDrawHideForAll(Text text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", text);
}
int TextDrawSetString(Text text, char string[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", text, string);
}
int TextDrawSetPreviewModel(Text text, int modelindex)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", text, modelindex);
}
int TextDrawSetPreviewRot(Text text, float fRotX, float fRotY, float fRotZ, float fZoom)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffff", text, fRotX, fRotY, fRotZ, fZoom);
}
int TextDrawSetPreviewVehCol(Text text, int color1, int color2)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", text, color1, color2);
}

// Gang Zones
int GangZoneCreate(float minx, float miny, float maxx, float maxy)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ffff", minx, miny, maxx, maxy);
}
int GangZoneDestroy(int zone)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", zone);
}
int GangZoneShowForPlayer(int playerid, int zone, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, zone, color);
}
int GangZoneShowForAll(int zone, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", zone, color);
}
int GangZoneHideForPlayer(int playerid, int zone)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, zone);
}
int GangZoneHideForAll(int zone)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", zone);
}
int GangZoneFlashForPlayer(int playerid, int zone, int flashcolor)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, zone, flashcolor);
}
int GangZoneFlashForAll(int zone, int flashcolor)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", zone, flashcolor);
}
int GangZoneStopFlashForPlayer(int playerid, int zone)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, zone);
}
int GangZoneStopFlashForAll(int zone)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", zone);
}

// Global 3D Text Labels
Text3D Create3DTextLabel(char text[], int color, float X, float Y, float Z, float DrawDistance, int virtualworld, int testLOS)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "siffffii", text, color, X, Y, Z, DrawDistance, virtualworld, testLOS);
}
int Delete3DTextLabel(Text3D id)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", id);
}
int Attach3DTextLabelToPlayer(Text3D id, int playerid, float OffsetX, float OffsetY, float OffsetZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifff", id, playerid, OffsetX, OffsetY, OffsetZ); 
}
int Attach3DTextLabelToVehicle(Text3D id, int vehicleid, float OffsetX, float OffsetY, float OffsetZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifff", id, vehicleid, OffsetX, OffsetY, OffsetZ);
}
int Update3DTextLabelText(Text3D id, int color, char text[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", id, color, text);
}

// Per-player 3D Text Labels
PlayerText3D CreatePlayer3DTextLabel(int playerid, char text[], int color, float X, float Y, float Z, float DrawDistance, int attachedplayer, int attachedvehicle, int testLOS)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isiffffiii", playerid, text, color, X, Y, Z, DrawDistance, attachedplayer, attachedvehicle, testLOS);
}
int DeletePlayer3DTextLabel(int playerid, PlayerText3D id)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, id);
}
int UpdatePlayer3DTextLabelText(int playerid, PlayerText3D id, int color, char text[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiis", playerid, id, color, text);
}

// Player GUI Dialog
int ShowPlayerDialog(int playerid, int dialogid, int style, char caption[], char info[], char button1[], char button2[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiissss", playerid, dialogid, style, caption, info, button1, button2);
}

// Player
int SetSpawnInfo(int playerid, int team, int skin, float x, float y, float z, float rotation, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiffffiiiiii", playerid, team, skin, x, y, z, rotation, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}
int SpawnPlayer(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Player info
int SetPlayerPos(int playerid, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", playerid, x, y, z);
}
int SetPlayerPosFindZ(int playerid, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", playerid, x, y, z);
}
int GetPlayerPos(int playerid, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", playerid, x, y, z);
}
int SetPlayerFacingAngle(int playerid, float ang)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "if", playerid, ang);
}
int GetPlayerFacingAngle(int playerid, float *ang)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", playerid, ang);
}
int IsPlayerInRangeOfPoint(int playerid, float range, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffff", playerid, range, x, y, z);
}
float GetPlayerDistanceFromPoint(int playerid, float X, float Y, float Z)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", playerid, X, Y, Z);
	return amx_ctof(rval);
}
int IsPlayerStreamedIn(int playerid, int forplayerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, forplayerid);
}
int SetPlayerInterior(int playerid, int interiorid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, interiorid);
}
int GetPlayerInterior(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerHealth(int playerid, float health)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "if", playerid, health);
}
int GetPlayerHealth(int playerid, float *health)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", playerid, health);
}
int SetPlayerArmour(int playerid, float armour)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "if", playerid, armour);
}
int GetPlayerArmour(int playerid, float *armour)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", playerid, armour);
}
int SetPlayerAmmo(int playerid, int weaponslot, int ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, weaponslot, ammo);
}
int GetPlayerAmmo(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerWeaponState(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerTargetPlayer(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerTeam(int playerid, int teamid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, teamid);
}
int GetPlayerTeam(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerScore(int playerid, int score)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, score);
}
int GetPlayerScore(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerDrunkLevel(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerDrunkLevel(int playerid, int level)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, level);
}
int SetPlayerColor(int playerid, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, color);
}
int GetPlayerColor(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerSkin(int playerid, int skinid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, skinid);
}
int GetPlayerSkin(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GivePlayerWeapon(int playerid, int weaponid, int ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, weaponid, ammo);
}
int ResetPlayerWeapons(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerArmedWeapon(int playerid, int weaponid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, weaponid);
}
int GetPlayerWeaponData(int playerid, int slot, int *weapons, int *ammo)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiII", playerid, slot, weapons, ammo);
}
int GivePlayerMoney(int playerid, int money)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, money);
}
int ResetPlayerMoney(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerName(int playerid, const char name[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, name);
}
int GetPlayerMoney(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerState(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerIp(int playerid, char name[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, name, len);
}
int GetPlayerPing(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerWeapon(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerKeys(int playerid, int *keys, int *updown, int *leftright)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iIII", playerid, keys, updown, leftright);
}
int GetPlayerName(int playerid, const char name[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, name, len);
}
int SetPlayerTime(int playerid, int hour, int minute)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, hour, minute);
}
int GetPlayerTime(int playerid, int *hour, int *minute)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iII", playerid, hour, minute);
}
int TogglePlayerClock(int playerid, int toggle)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, toggle);
}
int SetPlayerWeather(int playerid, int weather)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, weather);
}
int ForceClassSelection(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerWantedLevel(int playerid, int level)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, level);
}
int GetPlayerWantedLevel(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerFightingStyle(int playerid, int style)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, style);
}
int GetPlayerFightingStyle(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerVelocity(int playerid, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", playerid, X, Y, Z);
}
int GetPlayerVelocity(int playerid, float *X, float *Y, float *Z )
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", playerid, X, Y, Z);
}
int PlayCrimeReportForPlayer(int playerid, int suspectid, int crime)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, suspectid, crime);
}
int PlayAudioStreamForPlayer(int playerid, char url[], float posX, float posY, float posZ, float distance, int usepos)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isffffi", playerid, url, posX, posY, posZ, distance, usepos);
}
int StopAudioStreamForPlayer(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerShopName(int playerid, char shopname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, shopname);
}
int SetPlayerSkillLevel(int playerid, int skill, int level)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, skill, level);
}
int GetPlayerSurfingVehicleID(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerSurfingObjectID(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int RemoveBuildingForPlayer(int playerid, int modelid, float fX, float fY, float fZ, float fRadius)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffff", playerid, modelid, fX, fY, fZ, fRadius);
}

// Attached to bone objects
int SetPlayerAttachedObject(int playerid, int index, int modelid, int bone, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ, int materialcolor1, int materialcolor2)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiifffffffffii", playerid, index, modelid, bone, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ, materialcolor1, materialcolor2);
}
int RemovePlayerAttachedObject(int playerid, int index)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, index);
}
int IsPlayerAttachedObjectSlotUsed(int playerid, int index)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, index);
}
int EditAttachedObject(int playerid, int index)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, index);
}

// Per-player TextDraws
PlayerText CreatePlayerTextDraw(int playerid, float x, float y, char text[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffs", playerid, x, y, text);
}
int PlayerTextDrawDestroy(int playerid, PlayerText text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, text);
}
int PlayerTextDrawLetterSize(int playerid, PlayerText text, float x, float y)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiff", playerid, text, x, y);
}
int PlayerTextDrawTextSize(int playerid, PlayerText text, float x, float y)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiff", playerid, text, x, y);
}
int PlayerTextDrawAlignment(int playerid, PlayerText text, int alignment)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, alignment);
}
int PlayerTextDrawColor(int playerid, PlayerText text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, color);
}
int PlayerTextDrawUseBox(int playerid, PlayerText text, int use)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, use);
}
int PlayerTextDrawBoxColor(int playerid, PlayerText text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, color);
}
int PlayerTextDrawSetShadow(int playerid, PlayerText text, int size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, size);
}
int PlayerTextDrawSetOutline(int playerid, PlayerText text, int size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, size);
}
int PlayerTextDrawBackgroundColor(int playerid, PlayerText text, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, color);
}
int PlayerTextDrawFont(int playerid, PlayerText text, int font)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, font);
}
int PlayerTextDrawSetProportional(int playerid, PlayerText text, int set)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, set);
}
int PlayerTextDrawSetSelectable(int playerid, PlayerText text, int set)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, set);
}
int PlayerTextDrawShow(int playerid, PlayerText text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, text);
}
int PlayerTextDrawHide(int playerid, PlayerText text)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, text); 
}
int PlayerTextDrawSetString(int playerid, PlayerText text, char string[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", playerid, text, string);
}
int PlayerTextDrawSetPreviewModel(int playerid, PlayerText text, int modelindex)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, text, modelindex);
}
int PlayerTextDrawSetPreviewRot(int playerid, PlayerText text, float fRotX, float fRotY, float fRotZ, float fZoom)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffff", playerid, text, fRotX, fRotY, fRotZ, fZoom);
}
int PlayerTextDrawSetPreviewVehCol(int playerid, PlayerText text, int color1, int color2)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiii", playerid, text, color1, color2);
}

// Per-player variable system (PVars)
int SetPVarInt(int playerid, char varname[], int int_value)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isi", playerid, varname, int_value);
}
int GetPVarInt(int playerid, char varname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, varname);
}
int SetPVarString(int playerid, char varname[], char string_value[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iss", playerid, varname, string_value);
}
int GetPVarString(int playerid, char varname[], char string_return[], int len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "isS[%d]i", len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, varname, string_return, len);
}
int SetPVarFloat(int playerid, char varname[], float float_value)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isf", playerid, varname, float_value);
}
float GetPVarFloat(int playerid, char varname[])
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, varname);
	return amx_ctof(rval);
}
int DeletePVar(int playerid, char varname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, varname);
}

// PVar enumeration
int GetPVarsUpperIndex(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPVarNameAtIndex(int playerid, int index, char ret_varname[], int ret_len)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iiS[%d]i", ret_len);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, playerid, index, ret_varname, ret_len);
}
int GetPVarType(int playerid, char varname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", playerid, varname);
}
int SetPlayerChatBubble(int playerid, char text[], int color, float drawdistance, int expiretime)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isifi", playerid, text, color, drawdistance, expiretime);
}

// Player controls
int PutPlayerInVehicle(int playerid, int vehicleid, int seatid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, vehicleid, seatid);
}
int GetPlayerVehicleID(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerVehicleSeat(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int RemovePlayerFromVehicle(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int TogglePlayerControllable(int playerid, int toggle)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, toggle);
}
int PlayerPlaySound(int playerid, int soundid, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifff", playerid, soundid, x, y, z);
}
int ApplyAnimation(int playerid, char animlib[], char animname[], float fDelta, int loop, int lockx, int locky, int freeze, int time, int forcesync)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "issfiiiiii", playerid, animlib, animname, fDelta, loop, lockx, locky, freeze, time, forcesync);
}
int ClearAnimations(int playerid, int forcesync)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, forcesync);
}
int GetPlayerAnimationIndex(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetAnimationName(int index, char animlib[], int len1, char animname[], int len2)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iS[%d]iS[%d]i", len1, len2);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, index, animlib, len1, animname, len2);
}
int GetPlayerSpecialAction(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerSpecialAction(int playerid, int actionid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid);
}

// Player world/map related
int SetPlayerCheckpoint(int playerid, float x, float y, float z, float size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffff", playerid, x, y, z, size);
}
int DisablePlayerCheckpoint(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerRaceCheckpoint(int playerid, int type, float x, float y, float z, float nextx, float nexty, float nextz, float size)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffffff", playerid, type, x, y, z, nextx, nexty, nextz, size);
}
int DisablePlayerRaceCheckpoint(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int SetPlayerWorldBounds(int playerid, float x_max, float x_min, float y_max, float y_min)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffff", playerid, x_max, x_min, y_max, y_min);
}
int SetPlayerMarkerForPlayer(int playerid, int showplayerid, int color)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, showplayerid, color);
}
int ShowPlayerNameTagForPlayer(int playerid, int showplayerid, int show)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, showplayerid, show);
}

int SetPlayerMapIcon(int playerid, int iconid, float x, float y, float z, int markertype, int color, int style)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffiii", playerid, iconid, x, y, z, markertype, color, style);
}
int RemovePlayerMapIcon(int playerid, int iconid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, iconid);
}

int AllowPlayerTeleport(int playerid, int allow)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, allow);
}

// Player camera
int SetPlayerCameraPos(int playerid, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", playerid, x, y, z);
}

int SetPlayerCameraLookAt(int playerid, float x, float y, float z, int cut)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifffi", playerid, x, y, z, cut);
}
int SetCameraBehindPlayer(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int GetPlayerCameraPos(int playerid, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", playerid, x, y, z);
}
int GetPlayerCameraFrontVector(int playerid, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", playerid, x, y, z);
}
int GetPlayerCameraMode(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int AttachCameraToObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid); 
}
int AttachCameraToPlayerObject(int playerid, int playerobjectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, playerobjectid);
}
int InterpolateCameraPos(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffffii", playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut);
}
int InterpolateCameraLookAt(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffffii", playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut);
}

// Player conditionals
int IsPlayerConnected(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int IsPlayerInVehicle(int playerid, int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, vehicleid);
}
int IsPlayerInAnyVehicle(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int IsPlayerInCheckpoint(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int IsPlayerInRaceCheckpoint(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Virtual Worlds
int SetPlayerVirtualWorld(int playerid, int worldid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, worldid);
}
int GetPlayerVirtualWorld(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Insane Stunts
int EnableStuntBonusForPlayer(int playerid, int enable)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, enable);
}
int EnableStuntBonusForAll(int enable)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", enable);
}

// Spectating
int TogglePlayerSpectating(int playerid, int toggle)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, toggle);
}
int PlayerSpectatePlayer(int playerid, int targetplayerid, int mode)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, targetplayerid, mode);
}
int PlayerSpectateVehicle(int playerid, int targetvehicleid, int mode)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", playerid, targetvehicleid, mode);
}

// Recording for NPC playback
int StartRecordingPlayerData(int playerid, int recordtype, char recordname[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iis", playerid, recordtype, recordname);
}
int StopRecordingPlayerData(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

int SelectTextDraw(int playerid, int hovercolor)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, hovercolor);
}
int CancelSelectTextDraw(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}

// Objects

int CreateObject(int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifffffff", X, Y, Z, rX, rY, rZ, DrawDistance);
}
int AttachObjectToVehicle(int objectid, int vehicleid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffffff", objectid, vehicleid, OffsetX, OffsetY, OffsetZ, RotX, RotY, RotZ);
}
int AttachObjectToObject(int objectid, int attachtoid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ, int SyncRotation)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffffffi", objectid, attachtoid, OffsetX, OffsetY, OffsetZ, RotX, RotY, RotZ, SyncRotation);
}
int AttachObjectToPlayer(int objectid, int playerid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiffffff", objectid, playerid, OffsetX, OffsetY, OffsetZ, RotX, RotY, RotZ);
}
int SetObjectPos(int objectid, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", objectid, X, Y, Z);
}
int GetObjectPos(int objectid, float *X, float *Y, float *Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", objectid, X, Y, Z);
}
int SetObjectRot(int objectid, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", objectid, RotX, RotY, RotZ);
}
int GetObjectRot(int objectid, float *RotX, float *RotY, float *RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", objectid, RotX, RotY, RotZ);
}
int IsValidObject(int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", objectid);
}
int DestroyObject(int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", objectid);
}
int MoveObject(int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifffffff", X, Y, Z, Speed, RotX, RotY, RotZ);
}
int StopObject(int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", objectid);
}
int IsObjectMoving(int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", objectid);
}
int EditObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int EditPlayerObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int SelectObject(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int CancelEdit(int playerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", playerid);
}
int CreatePlayerObject(int playerid, int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffffff", playerid, modelid, X, Y, Z, rX, rY, rZ, DrawDistance);
}
int AttachPlayerObjectToVehicle(int playerid, int objectid, int vehicleid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiffffff", playerid, objectid, vehicleid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, RotZ);
}
int SetPlayerObjectPos(int playerid, int objectid, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifff", playerid, objectid, X, Y, Z);
}
int GetPlayerObjectPos(int playerid, int objectid, float *X, float *Y, float *Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiFFF", playerid, objectid, X, Y, Z);
}
int SetPlayerObjectRot(int playerid, int objectid, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifff", playerid, objectid, RotX, RotY, RotZ);
}
int GetPlayerObjectRot(int playerid, int objectid, float *RotX, float *RotY, float *RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiFFF", playerid, objectid, RotX, RotY, RotZ);
}
int IsValidPlayerObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int DestroyPlayerObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int MovePlayerObject(int playerid, int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iifffffff", X, Y, Z, Speed, RotX, RotY, RotZ);
}
int StopPlayerObject(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int IsPlayerObjectMoving(int playerid, int objectid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", playerid, objectid);
}
int AttachPlayerObjectToPlayer(int objectplayer, int objectid, int attachplayer, float OffsetX, float OffsetY, float OffsetZ, float rX, float rY, float rZ)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiffffff", objectplayer, objectid, attachplayer, OffsetX, OffsetY, OffsetZ, rX, rY, rZ);
}

int SetObjectMaterial(int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiissi", objectid, materialindex, modelid, txdname, texturename, materialcolor);
}
int SetPlayerObjectMaterial(int playerid, int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiissi", playerid, objectid, materialindex, modelid, txdname, texturename, materialcolor);
}

int SetObjectMaterialText(int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "isiisiiiii", objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment);
}
int SetPlayerObjectMaterialText(int playerid, int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iisiisiiiii", playerid, objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment);
}

// Vehicle
int CreateVehicle(int vehicletype, float x, float y, float z, float rotation, int color1, int color2, int respawn_delay)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iffffiii", vehicletype, x, y, z, rotation, color1, color2, respawn_delay);
}
int DestroyVehicle(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int IsVehicleStreamedIn(int vehicleid, int forplayerid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, forplayerid);
}
int GetVehiclePos(int vehicleid, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", vehicleid, x, y, z);
}
int SetVehiclePos(int vehicleid, float x, float y, float z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", vehicleid, x, y, z);
}
int GetVehicleZAngle(int vehicleid, float *z_angle)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", vehicleid, z_angle);
}
int GetVehicleRotationQuat(int vehicleid, float *w, float *x, float *y, float *z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFFF", vehicleid, w, x, y, z);
}
float GetVehicleDistanceFromPoint(int vehicleid, float X, float Y, float Z)
{
	cell rval = amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", vehicleid, X, Y, Z);
	return amx_ctof(rval);
}
int SetVehicleZAngle(int vehicleid, float z_angle)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "if", vehicleid, z_angle);
}
int SetVehicleParamsForPlayer(int vehicleid, int playerid, int objective, int doorslocked)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiii", vehicleid, playerid, objective, doorslocked);
}
int ManualVehicleEngineAndLights()
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "");
}
int SetVehicleParamsEx(int vehicleid, int engine, int lights, int alarm, int doors, int bonnet, int boot, int objective)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiiiiii", vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
}
int GetVehicleParamsEx(int vehicleid, int *engine, int *lights, int *alarm, int *doors, int *bonnet, int *boot, int *objective)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iIIIIIII", vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
}
int SetVehicleToRespawn(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int LinkVehicleToInterior(int vehicleid, int interiorid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, interiorid);
}
int AddVehicleComponent(int vehicleid, int componentid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, componentid);
}
int RemoveVehicleComponent(int vehicleid, int componentid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, componentid);
}
int ChangeVehicleColor(int vehicleid, int color1, int color2)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iii", vehicleid, color1, color2);
}
int ChangeVehiclePaintjob(int vehicleid, int paintjobid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, paintjobid);
}
int SetVehicleHealth(int vehicleid, float health)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "if", vehicleid, health);
}
int GetVehicleHealth(int vehicleid, float *health)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iF", vehicleid, health);
}
int AttachTrailerToVehicle(int trailerid, int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", trailerid, vehicleid);
}
int DetachTrailerFromVehicle(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int IsTrailerAttachedToVehicle(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int GetVehicleTrailer(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int SetVehicleNumberPlate(int vehicleid, char numberplate[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", vehicleid, numberplate);
}
int GetVehicleModel(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int GetVehicleComponentInSlot(int vehicleid, int slot)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, slot);
}
int GetVehicleComponentType(int component)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", component);
}
int RepairVehicle(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}
int GetVehicleVelocity(int vehicleid, float *X, float *Y, float *Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iFFF", vehicleid, X, Y, Z);
}
int SetVehicleVelocity(int vehicleid, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", vehicleid, X, Y, Z);
}
int SetVehicleAngularVelocity(int vehicleid, float X, float Y, float Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ifff", vehicleid, X, Y, Z);
}
int GetVehicleDamageStatus(int vehicleid, int *panels, int *doors, int *lights, int *tires)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iIIII", vehicleid, panels, doors, lights, tires);
}
int UpdateVehicleDamageStatus(int vehicleid, int panels, int doors, int lights, int tires)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiiii", vehicleid, panels, doors, lights, tires);
}

int GetVehicleModelInfo(int vehiclemodel, int infotype, float *X, float *Y, float *Z)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "iiFFF", vehiclemodel, infotype, X, Y, Z);
}

// Virtual Worlds
int SetVehicleVirtualWorld(int vehicleid, int worldid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "ii", vehicleid, worldid);
}
int GetVehicleVirtualWorld(int vehicleid)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", vehicleid);
}

DB db_open(char name[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "s", name);
}
int db_close(DB db)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", db);
}
DBResult db_query(DB db, char query[])
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "is", db, query);
}
int db_free_result(DBResult dbresult)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", dbresult);
}
int db_num_rows(DBResult dbresult)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", dbresult);
}
int db_next_row(DBResult dbresult)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", dbresult);
}
int db_num_fields(DBResult dbresult)
{
	return amx_CallNativeFunc(gAMX, __FUNCTION__, "i", dbresult);
}
int db_field_name(DBResult dbresult, int field, char result[], int maxlength)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iiS[%d]i", maxlength);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, dbresult, field, result, maxlength);
}
int db_get_field(DBResult dbresult, int field, char result[], int maxlength)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "iiS[%d]i", maxlength);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, dbresult, field, result, maxlength);
}
int db_get_field_assoc(DBResult dbresult, const char field[], char result[], int maxlength)
{
	char typelist[255];
	sprintf_s(typelist, sizeof(typelist), "isS[%d]i", maxlength);
	return amx_CallNativeFunc(gAMX, __FUNCTION__, typelist, dbresult, field, result, maxlength);
}
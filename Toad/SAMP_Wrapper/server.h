/*  SA-MP Functions
*
*  (c) Copyright 2005-2012, SA-MP Team
*
*/

// --------------------------------------------------
// Natives
// --------------------------------------------------

#pragma once

// Util
int println(const char string[]);
int SendClientMessage(int playerid, int color, const char message[]);
int SendClientMessageToAll(int color, const char message[]);
int SendPlayerMessageToPlayer(int playerid, int senderid, const char message[]);
int SendPlayerMessageToAll(int senderid, const char message[]);
int SendDeathMessage(int killer, int killee, int weapon);
int GameTextForAll(const char string[], int time, int style);
int GameTextForPlayer(int playerid, const char string[], int time, int style);
int GetMaxPlayers();

// Game
int SetGameModeText(const char string[]);
int SetTeamCount(int count);
int AddPlayerClass(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
int AddPlayerClassEx(int teamid, int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
int AddStaticVehicle(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2);
int AddStaticVehicleEx(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2, int respawn_delay);
int AddStaticPickup(int model, int type, float X, float Y, float Z, int virtualworld);
int CreatePickup(int model, int type, float X, float Y, float Z, int virtualworld);
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
Menu CreateMenu(const char title[], int columns, float x, float y, float col1width, float col2width);
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
int TextDrawSetPreviewRot(Text text, float fRotX, float fRotY, float fRotZ, float fZoom);
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
Text3D Create3DTextLabel(char text[], int color, float X, float Y, float Z, float DrawDistance, int virtualworld, int testLOS);
int Delete3DTextLabel(Text3D id);
int Attach3DTextLabelToPlayer(Text3D id, int playerid, float OffsetX, float OffsetY, float OffsetZ);
int Attach3DTextLabelToVehicle(Text3D id, int vehicleid, float OffsetX, float OffsetY, float OffsetZ);
int Update3DTextLabelText(Text3D id, int color, char text[]);

// Per-player 3D Text Labels
PlayerText3D CreatePlayer3DTextLabel(int playerid, char text[], int color, float X, float Y, float Z, float DrawDistance, int attachedplayer, int attachedvehicle, int testLOS);
int DeletePlayer3DTextLabel(int playerid, PlayerText3D id);
int UpdatePlayer3DTextLabelText(int playerid, PlayerText3D id, int color, char text[]);

// Player GUI Dialog
int ShowPlayerDialog(int playerid, int dialogid, int style, char caption[], char info[], char button1[], char button2[]);

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnGameModeInit();
int OnGameModeExit();
int OnRconCommand(char cmd[]);
int OnRconLoginAttempt(char ip[], char password[], int success);

// --------------------------------------------------
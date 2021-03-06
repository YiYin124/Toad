/*  SA-MP Player Functions
*
*  (c) Copyright 2005-2012, SA-MP Team
*
*/

#pragma once

// --------------------------------------------------
// Natives
// --------------------------------------------------

// Player
int SetSpawnInfo(int playerid, int team, int skin, float x, float y, float z, float rotation, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
int SpawnPlayer(int playerid);

// Player info
int SetPlayerPos(int playerid, float x, float y, float z);
int SetPlayerPosFindZ(int playerid, float x, float y, float z);
int GetPlayerPos(int playerid, float *x, float *y, float *z);
int SetPlayerFacingAngle(int playerid, float ang);
int GetPlayerFacingAngle(int playerid, float *ang);
int IsPlayerInRangeOfPoint(int playerid, float range, float x, float y, float z);
float GetPlayerDistanceFromPoint(int playerid, float X, float Y, float Z);
int IsPlayerStreamedIn(int playerid, int forplayerid);
int SetPlayerInterior(int playerid, int interiorid);
int GetPlayerInterior(int playerid);
int SetPlayerHealth(int playerid, float health);
int GetPlayerHealth(int playerid, float *health);
int SetPlayerArmour(int playerid, float armour);
int GetPlayerArmour(int playerid, float *armour);
int SetPlayerAmmo(int playerid, int weaponslot, int ammo);
int GetPlayerAmmo(int playerid);
int GetPlayerWeaponState(int playerid);
int GetPlayerTargetPlayer(int playerid);
int SetPlayerTeam(int playerid, int teamid);
int GetPlayerTeam(int playerid);
int SetPlayerScore(int playerid, int score);
int GetPlayerScore(int playerid);
int GetPlayerDrunkLevel(int playerid);
int SetPlayerDrunkLevel(int playerid, int level);
int SetPlayerColor(int playerid, int color);
int GetPlayerColor(int playerid);
int SetPlayerSkin(int playerid, int skinid);
int GetPlayerSkin(int playerid);
int GivePlayerWeapon(int playerid, int weaponid, int ammo);
int ResetPlayerWeapons(int playerid);
int SetPlayerArmedWeapon(int playerid, int weaponid);
int GetPlayerWeaponData(int playerid, int slot, int *weapons, int *ammo);
int GivePlayerMoney(int playerid, int money);
int ResetPlayerMoney(int playerid);
int SetPlayerName(int playerid, const char name[]);
int GetPlayerMoney(int playerid);
int GetPlayerState(int playerid);
int GetPlayerIp(int playerid, char name[], int len);
int GetPlayerPing(int playerid);
int GetPlayerWeapon(int playerid);
int GetPlayerKeys(int playerid, int *keys, int *updown, int *leftright);
int GetPlayerName(int playerid, const char name[], int len);
int SetPlayerTime(int playerid, int hour, int minute);
int GetPlayerTime(int playerid, int *hour, int *minute);
int TogglePlayerClock(int playerid, int toggle);
int SetPlayerWeather(int playerid, int weather);
int ForceClassSelection(int playerid);
int SetPlayerWantedLevel(int playerid, int level);
int GetPlayerWantedLevel(int playerid);
int SetPlayerFightingStyle(int playerid, int style);
int GetPlayerFightingStyle(int playerid);
int SetPlayerVelocity(int playerid, float X, float Y, float Z);
int GetPlayerVelocity(int playerid, float *X, float *Y, float *Z );
int PlayCrimeReportForPlayer(int playerid, int suspectid, int crime);
int PlayAudioStreamForPlayer(int playerid, char url[], float posX, float posY, float posZ, float distance, int usepos);
int StopAudioStreamForPlayer(int playerid);
int SetPlayerShopName(int playerid, char shopname[]);
int SetPlayerSkillLevel(int playerid, int skill, int level);
int GetPlayerSurfingVehicleID(int playerid);
int GetPlayerSurfingObjectID(int playerid);
int RemoveBuildingForPlayer(int playerid, int modelid, float fX, float fY, float fZ, float fRadius);

// Attached to bone objects
int SetPlayerAttachedObject(int playerid, int index, int modelid, int bone, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ, int materialcolor1, int materialcolor2);
int RemovePlayerAttachedObject(int playerid, int index);
int IsPlayerAttachedObjectSlotUsed(int playerid, int index);
int EditAttachedObject(int playerid, int index);

// Per-player TextDraws
PlayerText CreatePlayerTextDraw(int playerid, float x, float y, char text[]);
int PlayerTextDrawDestroy(int playerid, PlayerText text);
int PlayerTextDrawLetterSize(int playerid, PlayerText text, float x, float y);
int PlayerTextDrawTextSize(int playerid, PlayerText text, float x, float y);
int PlayerTextDrawAlignment(int playerid, PlayerText text, int alignment);
int PlayerTextDrawColor(int playerid, PlayerText text, int color);
int PlayerTextDrawUseBox(int playerid, PlayerText text, int use);
int PlayerTextDrawBoxColor(int playerid, PlayerText text, int color);
int PlayerTextDrawSetShadow(int playerid, PlayerText text, int size);
int PlayerTextDrawSetOutline(int playerid, PlayerText text, int size);
int PlayerTextDrawBackgroundColor(int playerid, PlayerText text, int color);
int PlayerTextDrawFont(int playerid, PlayerText text, int font);
int PlayerTextDrawSetProportional(int playerid, PlayerText text, int set);
int PlayerTextDrawSetSelectable(int playerid, PlayerText text, int set);
int PlayerTextDrawShow(int playerid, PlayerText text);
int PlayerTextDrawHide(int playerid, PlayerText text);
int PlayerTextDrawSetString(int playerid, PlayerText text, char string[]);
int PlayerTextDrawSetPreviewModel(int playerid, PlayerText text, int modelindex);
int PlayerTextDrawSetPreviewRot(int playerid, PlayerText text, float fRotX, float fRotY, float fRotZ, float fZoom);
int PlayerTextDrawSetPreviewVehCol(int playerid, PlayerText text, int color1, int color2);

// Per-player variable system (PVars)
int SetPVarInt(int playerid, char varname[], int int_value);
int GetPVarInt(int playerid, char varname[]);
int SetPVarString(int playerid, char varname[], char string_value[]);
int GetPVarString(int playerid, char varname[], char string_return[], int len);
int SetPVarFloat(int playerid, char varname[], float float_value);
float GetPVarFloat(int playerid, char varname[]);
int DeletePVar(int playerid, char varname[]);

// PVar enumeration
int GetPVarsUpperIndex(int playerid);
int GetPVarNameAtIndex(int playerid, int index, char ret_varname[], int ret_len);
int GetPVarType(int playerid, char varname[]);
int SetPlayerChatBubble(int playerid, char text[], int color, float drawdistance, int expiretime);

// Player controls
int PutPlayerInVehicle(int playerid, int vehicleid, int seatid);
int GetPlayerVehicleID(int playerid);
int GetPlayerVehicleSeat(int playerid);
int RemovePlayerFromVehicle(int playerid);
int TogglePlayerControllable(int playerid, int toggle);
int PlayerPlaySound(int playerid, int soundid, float x, float y, float z);
int ApplyAnimation(int playerid, char animlib[], char animname[], float fDelta, int loop, int lockx, int locky, int freeze, int time, int forcesync);
int ClearAnimations(int playerid, int forcesync);
int GetPlayerAnimationIndex(int playerid); // return the index of any running applied animations (0 if none are running)
int GetAnimationName(int index, char animlib[], int len1, char animname[], int len2); // get the animation lib/name for the index
int GetPlayerSpecialAction(int playerid);
int SetPlayerSpecialAction(int playerid, int actionid);

// Player world/map related
int SetPlayerCheckpoint(int playerid, float x, float y, float z, float size);
int DisablePlayerCheckpoint(int playerid);
int SetPlayerRaceCheckpoint(int playerid, int type, float x, float y, float z, float nextx, float nexty, float nextz, float size);
int DisablePlayerRaceCheckpoint(int playerid);
int SetPlayerWorldBounds(int playerid, float x_max, float x_min, float y_max, float y_min);
int SetPlayerMarkerForPlayer(int playerid, int showplayerid, int color);
int ShowPlayerNameTagForPlayer(int playerid, int showplayerid, int show);
int SetPlayerMapIcon(int playerid, int iconid, float x, float y, float z, int markertype, int color, int style);
int RemovePlayerMapIcon(int playerid, int iconid);
int AllowPlayerTeleport(int playerid, int allow);

// Player camera
int SetPlayerCameraPos(int playerid, float x, float y, float z);
int SetPlayerCameraLookAt(int playerid, float x, float y, float z, int cut);
int SetCameraBehindPlayer(int playerid);
int GetPlayerCameraPos(int playerid, float *x, float *y, float *z);
int GetPlayerCameraFrontVector(int playerid, float *x, float *y, float *z);
int GetPlayerCameraMode(int playerid);
int AttachCameraToObject(int playerid, int objectid);
int AttachCameraToPlayerObject(int playerid, int playerobjectid);
int InterpolateCameraPos(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut);
int InterpolateCameraLookAt(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut);

// Player conditionals
int IsPlayerConnected(int playerid);
int IsPlayerInVehicle(int playerid, int vehicleid);
int IsPlayerInAnyVehicle(int playerid);
int IsPlayerInCheckpoint(int playerid);
int IsPlayerInRaceCheckpoint(int playerid);

// Virtual Worlds
int SetPlayerVirtualWorld(int playerid, int worldid);
int GetPlayerVirtualWorld(int playerid);

// Insane Stunts
int EnableStuntBonusForPlayer(int playerid, int enable);
int EnableStuntBonusForAll(int enable);

// Spectating
int TogglePlayerSpectating(int playerid, int toggle);
int PlayerSpectatePlayer(int playerid, int targetplayerid, int mode);
int PlayerSpectateVehicle(int playerid, int targetvehicleid, int mode);
int StartRecordingPlayerData(int playerid, int recordtype, char recordname[]);
int StopRecordingPlayerData(int playerid);
int ConnectNPC(char name[], char script[]);
int IsPlayerNPC(int playerid);
int SelectTextDraw(int playerid, int hovercolor); // enables the mouse so the player can select a textdraw
int CancelSelectTextDraw(int playerid);	// cancel textdraw selection with the mouse

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnPlayerConnect(int playerid);
int OnPlayerDisconnect(int playerid, int reason);
int OnPlayerSpawn(int playerid);
int OnPlayerDeath(int playerid, int killerid, int reason);
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
int OnPlayerRequestSpawn(int playerid);
int OnPlayerObjectMoved(int playerid, int objectid);
int OnPlayerPickUpPickup(int playerid, int pickupid);
int OnPlayerSelectedMenuRow(int playerid, int row);
int OnPlayerExitedMenu(int playerid);
int OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid);
int OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys);
int OnPlayerUpdate(int playerid);
int OnPlayerStreamIn(int playerid, int forplayerid);
int OnPlayerStreamOut(int playerid, int forplayerid);
int OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid);
int OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid);
int OnPlayerClickMap(int playerid, float fX, float fY, float fZ);
int OnPlayerClickTextDraw(int playerid, Text clickedid);
int OnPlayerClickPlayerTextDraw(int playerid, PlayerText playertextid);
int OnPlayerClickPlayer(int playerid, int clickedplayerid, int source);
int OnPlayerEditObject(int playerid, int playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ );
int OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ);
int OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ);
int OnEnterExitModShop(int playerid, int enterexit, int interiorid);
int OnDialogResponse(int playerid, int dialogid, int response, int listitem, char inputtext[]);

// --------------------------------------------------
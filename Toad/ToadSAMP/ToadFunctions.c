#include "toadSAMP.h"

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

// Recording for NPC playback
int StartRecordingPlayerData(int playerid, int recordtype, char recordname[]);
int StopRecordingPlayerData(int playerid);

int SelectTextDraw(int playerid, int hovercolor); // enables the mouse so the player can select a textdraw
int CancelSelectTextDraw(int playerid);	// cancel textdraw selection with the mouse

// Objects

int CreateObject(int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance);
int AttachObjectToVehicle(int objectid, int vehicleid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ);
int AttachObjectToObject(int objectid, int attachtoid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ, int SyncRotation);
int AttachObjectToPlayer(int objectid, int playerid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ);
int SetObjectPos(int objectid, float X, float Y, float Z);
int GetObjectPos(int objectid, float *X, float *Y, float *Z);
int SetObjectRot(int objectid, float RotX, float RotY, float RotZ);
int GetObjectRot(int objectid, float *RotX, float *RotY, float *RotZ);
int IsValidObject(int objectid);
int DestroyObject(int objectid);
int MoveObject(int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ);
int StopObject(int objectid);
int IsObjectMoving(int objectid);
int EditObject(int playerid, int objectid);
int EditPlayerObject(int playerid, int objectid);
int SelectObject(int playerid);
int CancelEdit(int playerid);
int CreatePlayerObject(int playerid, int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance);
int AttachPlayerObjectToVehicle(int playerid, int objectid, int vehicleid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float RotZ);
int SetPlayerObjectPos(int playerid, int objectid, float X, float Y, float Z);
int GetPlayerObjectPos(int playerid, int objectid, float *X, float *Y, float *Z);
int SetPlayerObjectRot(int playerid, int objectid, float RotX, float RotY, float RotZ);
int GetPlayerObjectRot(int playerid, int objectid, float *RotX, float *RotY, float *RotZ);
int IsValidPlayerObject(int playerid, int objectid);
int DestroyPlayerObject(int playerid, int objectid);
int MovePlayerObject(int playerid, int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ);
int StopPlayerObject(int playerid, int objectid);
int IsPlayerObjectMoving(int playerid, int objectid);
int AttachPlayerObjectToPlayer(int objectplayer, int objectid, int attachplayer, float OffsetX, float OffsetY, float OffsetZ, float rX, float rY, float rZ);

int SetObjectMaterial(int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor);
int SetPlayerObjectMaterial(int playerid, int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor);

int SetObjectMaterialText(int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment);
int SetPlayerObjectMaterialText(int playerid, int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment);

// Vehicle
int CreateVehicle(int vehicletype, float x, float y, float z, float rotation, int color1, int color2, int respawn_delay);
int DestroyVehicle(int vehicleid);
int IsVehicleStreamedIn(int vehicleid, int forplayerid);
int GetVehiclePos(int vehicleid, float *x, float *y, float *z);
int SetVehiclePos(int vehicleid, float x, float y, float z);
int GetVehicleZAngle(int vehicleid, float *z_angle);
int GetVehicleRotationQuat(int vehicleid, float *w, float *x, float *y, float *z);
float GetVehicleDistanceFromPoint(int vehicleid, float X, float Y, float Z);
int SetVehicleZAngle(int vehicleid, float z_angle);
int SetVehicleParamsForPlayer(int vehicleid, int playerid, int objective, int doorslocked);
int ManualVehicleEngineAndLights();
int SetVehicleParamsEx(int vehicleid, int engine, int lights, int alarm, int doors, int bonnet, int boot, int objective);
int GetVehicleParamsEx(int vehicleid, int *engine, int *lights, int *alarm, int *doors, int *bonnet, int *boot, int *objective);
int SetVehicleToRespawn(int vehicleid);
int LinkVehicleToInterior(int vehicleid, int interiorid);
int AddVehicleComponent(int vehicleid, int componentid);
int RemoveVehicleComponent(int vehicleid, int componentid);
int ChangeVehicleColor(int vehicleid, int color1, int color2);
int ChangeVehiclePaintjob(int vehicleid, int paintjobid);
int SetVehicleHealth(int vehicleid, float health);
int GetVehicleHealth(int vehicleid, float *health);
int AttachTrailerToVehicle(int trailerid, int vehicleid);
int DetachTrailerFromVehicle(int vehicleid);
int IsTrailerAttachedToVehicle(int vehicleid);
int GetVehicleTrailer(int vehicleid);
int SetVehicleNumberPlate(int vehicleid, int numberplate[]);
int GetVehicleModel(int vehicleid);
int GetVehicleComponentInSlot(int vehicleid, int slot); // There is 1 slot for each CARMODTYPE_*
int GetVehicleComponentType(int component); // Find CARMODTYPE_* for component id
int RepairVehicle(int vehicleid); // Repairs the damage model and resets the health
int GetVehicleVelocity(int vehicleid, float *X, float *Y, float *Z);
int SetVehicleVelocity(int vehicleid, float X, float Y, float Z);
int SetVehicleAngularVelocity(int vehicleid, float X, float Y, float Z);
int GetVehicleDamageStatus(int vehicleid, int *panels, int *doors, int *lights, int *tires);
int UpdateVehicleDamageStatus(int vehicleid, int panels, int doors, int lights, int tires);

int GetVehicleModelInfo(int vehiclemodel, int infotype, float *X, float *Y, float *Z);

// Virtual Worlds
int SetVehicleVirtualWorld(int vehicleid, int worldid);
int GetVehicleVirtualWorld(int vehicleid);

DB db_open(char name[]);
int db_close(DB db);
DBResult db_query(DB db, char query[]);
int db_free_result(DBResult dbresult);
int db_num_rows(DBResult dbresult);
int db_next_row(DBResult dbresult);
int db_num_fields(DBResult dbresult);
int db_field_name(DBResult dbresult, int field, char result[], int maxlength);
int db_get_field(DBResult dbresult, int field, char result[], int maxlength);
int db_get_field_assoc(DBResult dbresult, const char field[], int result[], int maxlength);
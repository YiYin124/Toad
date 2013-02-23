#include <a_samp>
native FS_OnFilterScriptInit();
native FS_OnFilterScriptExit();
native FS_OnRconCommand(cmd[]);
public OnFilterScriptInit() return FS_OnFilterScriptInit();
public OnFilterScriptExit() return FS_OnFilterScriptExit();
public OnRconCommand(cmd[]) return FS_OnRconCommand(cmd);

forward OnRegisterFunctions();
public OnRegisterFunctions()
{
new ival, Float:fval;
print("");
printf("");
format("", 0, "");
SendClientMessage(0, 0, "");
SendClientMessageToAll(0, "");
SendPlayerMessageToPlayer(0, 0, "");
SendPlayerMessageToAll(0, "");
SendDeathMessage(0, 0, 0);
GameTextForAll("", 0, 0);
GameTextForPlayer(0, "", 0, 0);
SetTimer("", 0, 0);
SetTimerEx("", 0, 0, "");
KillTimer(0);
GetTickCount();
GetMaxPlayers();
print("[1 end]");
CallRemoteFunction("", "");
CallLocalFunction("", "");
asin(0.0);
acos(0.0);
atan(0.0);
atan2(0.0, 0.0);
// Game
SetGameModeText("");
SetTeamCount(0);
AddPlayerClass(0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0);
AddPlayerClassEx(0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0);
AddStaticVehicle(0, 0.0, 0.0, 0.0, 0.0, 0, 0);
AddStaticVehicleEx(0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0);
AddStaticPickup(0, 0, 0.0, 0.0, 0.0, 0);
CreatePickup(0, 0, 0.0, 0.0, 0.0, 0);
DestroyPickup(0);
ShowNameTags(0);
ShowPlayerMarkers(0);
GameModeExit();
SetWorldTime(0);
GetWeaponName(0, "", 0);
EnableTirePopping(0); // deprecated function
EnableVehicleFriendlyFire();
AllowInteriorWeapons(0);
SetWeather(0);
SetGravity(0.0);
AllowAdminTeleport(0);
SetDeathDropAmount(0);
CreateExplosion(0.0, 0.0, 0.0, 0, 0.0);
EnableZoneNames(0);
UsePlayerPedAnims();		// Will cause the players to use CJ running/walking animations
DisableInteriorEnterExits();  // will disable all interior enter/exits in the game.
SetNameTagDrawDistance(0.0); // Distance at which nametags will start rendering on the client.
DisableNameTagLOS(); // Disables the nametag Line-Of-Sight checking
LimitGlobalChatRadius(0.0);
LimitPlayerMarkerRadius(0.0);
// Npc
ConnectNPC("", "");
IsPlayerNPC(0);
// Admin
IsPlayerAdmin(0);
Kick(0);
Ban(0);
BanEx(0, "");
SendRconCommand("");
GetServerVarAsString("", "", 0);
GetServerVarAsInt("");
GetServerVarAsBool("");
GetPlayerNetworkStats(0, "", 0);
GetNetworkStats("", 0);
GetPlayerVersion(0, "", 0); // Returns the SA-MP client revision as reported by the player

// Menu
CreateMenu("", 0, 0.0, 0.0, 0.0, 0.0);
DestroyMenu(Menu:0);
AddMenuItem(Menu:0, 0, "");
SetMenuColumnHeader(Menu:0, 0, "");
ShowMenuForPlayer(Menu:0, 0);
HideMenuForPlayer(Menu:0, 0);
IsValidMenu(Menu:0);
DisableMenu(Menu:0);
DisableMenuRow(Menu:0, 0);
GetPlayerMenu(0);
TextDrawCreate(0.0, 0.0, "");
TextDrawDestroy(Text:0);
TextDrawLetterSize(Text:0, 0.0, 0.0);
TextDrawTextSize(Text:0, 0.0, 0.0);
TextDrawAlignment(Text:0, 0);
TextDrawColor(Text:0, 0);
TextDrawUseBox(Text:0, 0);
TextDrawBoxColor(Text:0, 0);
TextDrawSetShadow(Text:0, 0);
TextDrawSetOutline(Text:0, 0);
TextDrawBackgroundColor(Text:0, 0);
TextDrawFont(Text:0, 0);
TextDrawSetProportional(Text:0, 0);
TextDrawSetSelectable(Text:0, 0);
TextDrawShowForPlayer(0, Text:0);
TextDrawHideForPlayer(0, Text:0);
TextDrawShowForAll(Text:0);
TextDrawHideForAll(Text:0);
TextDrawSetString(Text:0, "");
TextDrawSetPreviewModel(Text:0, 0);
TextDrawSetPreviewRot(Text:0, 0.0, 0.0, 0.0, 0.0);
TextDrawSetPreviewVehCol(Text:0, 0, 0);

// Gang Zones
GangZoneCreate(0.0, 0.0, 0.0, 0.0);
GangZoneDestroy(0);
GangZoneShowForPlayer(0, 0, 0);
GangZoneShowForAll(0, 0);
GangZoneHideForPlayer(0, 0);
GangZoneHideForAll(0);
GangZoneFlashForPlayer(0, 0, 0);
GangZoneFlashForAll(0, 0);
GangZoneStopFlashForPlayer(0, 0);
GangZoneStopFlashForAll(0);

// Global 3D Text Labels
Create3DTextLabel("", 0, 0.0, 0.0, 0.0, 0.0, 0, 0);
Delete3DTextLabel(Text3D:0);
Attach3DTextLabelToPlayer(Text3D:0, 0, 0.0, 0.0, 0.0);
Attach3DTextLabelToVehicle(Text3D:0, 0, 0.0, 0.0, 0.0);
Update3DTextLabelText(Text3D:0, 0, "");

// Per-player 3D Text Labels
CreatePlayer3DTextLabel(0, "", 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0);
DeletePlayer3DTextLabel(0, PlayerText3D:0);
UpdatePlayer3DTextLabelText(0, PlayerText3D:0, 0, "");

ShowPlayerDialog(0, 0, 0, "", "", "", "");

// Player
SetSpawnInfo(0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0);
SpawnPlayer(0);

// Player info
SetPlayerPos(0, 0.0, 0.0, 0.0);
SetPlayerPosFindZ(0, 0.0, 0.0, 0.0);
GetPlayerPos(0, fval, fval, fval);
SetPlayerFacingAngle(0, 0.0);
GetPlayerFacingAngle(0, fval);
IsPlayerInRangeOfPoint(0, 0.0, 0.0, 0.0, 0.0);
GetPlayerDistanceFromPoint(0, 0.0, 0.0, 0.0);
IsPlayerStreamedIn(0, 0);
SetPlayerInterior(0, 0);
GetPlayerInterior(0);
SetPlayerHealth(0, 0.0);
GetPlayerHealth(0, fval);
SetPlayerArmour(0, 0.0);
GetPlayerArmour(0, fval);
SetPlayerAmmo(0, 0, 0);
GetPlayerAmmo(0);
GetPlayerWeaponState(0);
GetPlayerTargetPlayer(0);
SetPlayerTeam(0, 0);
GetPlayerTeam(0);
SetPlayerScore(0, 0);
GetPlayerScore(0);
GetPlayerDrunkLevel(0);
SetPlayerDrunkLevel(0, 0);
SetPlayerColor(0, 0);
GetPlayerColor(0);
SetPlayerSkin(0, 0);
GetPlayerSkin(0);
GivePlayerWeapon(0, 0, 0);
ResetPlayerWeapons(0);
SetPlayerArmedWeapon(0, 0);
GetPlayerWeaponData(0, 0, ival, ival);
GivePlayerMoney(0, 0);
ResetPlayerMoney(0);
SetPlayerName(0, "");
GetPlayerMoney(0);
GetPlayerState(0);
GetPlayerIp(0, "", 0);
GetPlayerPing(0);
GetPlayerWeapon(0);
GetPlayerKeys(0, ival, ival, ival);
GetPlayerName(0, "", 0);
SetPlayerTime(0, 0, 0);
GetPlayerTime(0, ival, ival);
TogglePlayerClock(0, 0);
SetPlayerWeather(0, 0);
ForceClassSelection(0);
SetPlayerWantedLevel(0, 0);
GetPlayerWantedLevel(0);
SetPlayerFightingStyle(0, 0);
GetPlayerFightingStyle(0);
SetPlayerVelocity(0, 0.0, 0.0, 0.0);
GetPlayerVelocity(0, fval, fval, fval);
PlayCrimeReportForPlayer(0, 0, 0);
PlayAudioStreamForPlayer(0, "", 0.0, 0.0, 0.0, 0.0, 0);
StopAudioStreamForPlayer(0);
SetPlayerShopName(0, "");
SetPlayerSkillLevel(0, 0, 0);
GetPlayerSurfingVehicleID(0);
GetPlayerSurfingObjectID(0);
RemoveBuildingForPlayer(0, 0, 0.0, 0.0, 0.0, 0.0);

// Attached to bone objects
SetPlayerAttachedObject(0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0);
RemovePlayerAttachedObject(0, 0);
IsPlayerAttachedObjectSlotUsed(0, 0);
EditAttachedObject(0, 0);

// Per-player TextDraws
CreatePlayerTextDraw(0, 0.0, 0.0, "");
PlayerTextDrawDestroy(0, PlayerText:0);
PlayerTextDrawLetterSize(0, PlayerText:0, 0.0, 0.0);
PlayerTextDrawTextSize(0, PlayerText:0, 0.0, 0.0);
PlayerTextDrawAlignment(0, PlayerText:0, 0);
PlayerTextDrawColor(0, PlayerText:0, 0);
PlayerTextDrawUseBox(0, PlayerText:0, 0);
PlayerTextDrawBoxColor(0, PlayerText:0, 0);
PlayerTextDrawSetShadow(0, PlayerText:0, 0);
PlayerTextDrawSetOutline(0, PlayerText:0, 0);
PlayerTextDrawBackgroundColor(0, PlayerText:0, 0);
PlayerTextDrawFont(0, PlayerText:0, 0);
PlayerTextDrawSetProportional(0, PlayerText:0, 0);
PlayerTextDrawSetSelectable(0, PlayerText:0, 0);
PlayerTextDrawShow(0, PlayerText:0);
PlayerTextDrawHide(0, PlayerText:0);
PlayerTextDrawSetString(0, PlayerText:0, "");
PlayerTextDrawSetPreviewModel(0, PlayerText:0, 0);
PlayerTextDrawSetPreviewRot(0, PlayerText:0, 0.0, 0.0, 0.0, 0.0);
PlayerTextDrawSetPreviewVehCol(0, PlayerText:0, 0, 0);

// Per-player variable system (PVars)
SetPVarInt(0, "", 0);
GetPVarInt(0, "");
SetPVarString(0, "", "");
GetPVarString(0, "", "", 0);
SetPVarFloat(0, "", fval);
GetPVarFloat(0, "");
DeletePVar(0, "");

// PVar enumeration
GetPVarsUpperIndex(0);
GetPVarNameAtIndex(0, 0, "", 0);
GetPVarType(0, "");

SetPlayerChatBubble(0, "", 0, fval, 0);

// Player controls
PutPlayerInVehicle(0, 0, 0);
GetPlayerVehicleID(0);
GetPlayerVehicleSeat(0);
RemovePlayerFromVehicle(0);
TogglePlayerControllable(0, 0);
PlayerPlaySound(0, 0, 0.0, 0.0, 0.0);
ApplyAnimation(0, "", "", 0.0, 0, 0, 0, 0, 0, 0);
ClearAnimations(0, 0);
GetPlayerAnimationIndex(0); // return the index of any running applied animations (0 if none are running)
GetAnimationName(0, "", 0, "", 0); // get the animation lib/name for the index
GetPlayerSpecialAction(0);
SetPlayerSpecialAction(0, 0);

// Player world/map related
SetPlayerCheckpoint(0, 0.0, 0.0, 0.0, 0.0);
DisablePlayerCheckpoint(0);
SetPlayerRaceCheckpoint(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
DisablePlayerRaceCheckpoint(0);
SetPlayerWorldBounds(0, 0.0, 0.0, 0.0, 0.0);
SetPlayerMarkerForPlayer(0, 0, 0);
ShowPlayerNameTagForPlayer(0, 0, 0);

SetPlayerMapIcon(0, 0, 0.0, 0.0, 0.0, 0, 0, 0);
RemovePlayerMapIcon(0, 0);

AllowPlayerTeleport(0, 0);

// Player camera
SetPlayerCameraPos(0, 0.0, 0.0, 0.0);

SetPlayerCameraLookAt(0, 0.0, 0.0, 0.0, 0);
SetCameraBehindPlayer(0);
GetPlayerCameraPos(0, fval, fval, fval);
GetPlayerCameraFrontVector(0, fval, fval, fval);
GetPlayerCameraMode(0);
AttachCameraToObject(0, 0);
AttachCameraToPlayerObject(0, 0);
InterpolateCameraPos(0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0);
InterpolateCameraLookAt(0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0);

// Player conditionals
IsPlayerConnected(0);
IsPlayerInVehicle(0, 0);
IsPlayerInAnyVehicle(0);
IsPlayerInCheckpoint(0);
IsPlayerInRaceCheckpoint(0);

// Virtual Worlds
SetPlayerVirtualWorld(0, 0);
GetPlayerVirtualWorld(0);

// Insane Stunts
EnableStuntBonusForPlayer(0, 0);
EnableStuntBonusForAll(0);

// Spectating
TogglePlayerSpectating(0, 0);
PlayerSpectatePlayer(0, 0, 0);
PlayerSpectateVehicle(0, 0, 0);

// Recording for NPC playback
StartRecordingPlayerData(0, 0, "");
StopRecordingPlayerData(0);

SelectTextDraw(0, 0); // enables the mouse so the player can select a textdraw
CancelSelectTextDraw(0);	// cancel textdraw selection with the mouse

// Objects

CreateObject(0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
AttachObjectToVehicle(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
AttachObjectToObject(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0);
AttachObjectToPlayer(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
SetObjectPos(0, 0.0, 0.0, 0.0);
GetObjectPos(0, fval, fval, fval);
SetObjectRot(0, 0.0, 0.0, 0.0);
GetObjectRot(0, fval, fval, fval);
IsValidObject(0);
DestroyObject(0);
MoveObject(0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
StopObject(0);
IsObjectMoving(0);
EditObject(0, 0);
EditPlayerObject(0, 0);
SelectObject(0);
CancelEdit(0);
CreatePlayerObject(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
AttachPlayerObjectToVehicle(0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
SetPlayerObjectPos(0, 0, 0.0, 0.0, 0.0);
GetPlayerObjectPos(0, 0, fval, fval, fval);
SetPlayerObjectRot(0, 0, 0.0, 0.0, 0.0);
GetPlayerObjectRot(0, 0, fval, fval, fval);
IsValidPlayerObject(0, 0);
DestroyPlayerObject(0, 0);
MovePlayerObject(0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
StopPlayerObject(0, 0);
IsPlayerObjectMoving(0, 0);
AttachPlayerObjectToPlayer(0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

SetObjectMaterial(0, 0, 0, "", "", 0);
SetPlayerObjectMaterial(0, 0, 0, 0, "", "", 0);

SetObjectMaterialText(0, "", 0, 0, "", 0, 0, 0, 0, 0);
SetPlayerObjectMaterialText(0, 0, "", 0, 0, "", 0, 0, 0, 0, 0);

// Vehicle
CreateVehicle(0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0);
DestroyVehicle(0);
IsVehicleStreamedIn(0, 0);
GetVehiclePos(0, fval, fval, fval);
SetVehiclePos(0, fval, fval, fval);
GetVehicleZAngle(0, fval);
GetVehicleRotationQuat(0, fval, fval, fval, fval);
GetVehicleDistanceFromPoint(0, 0.0, 0.0, 0.0);
SetVehicleZAngle(0, 0.0);
SetVehicleParamsForPlayer(0, 0, 0, 0);
ManualVehicleEngineAndLights();
SetVehicleParamsEx(0, 0, 0, 0, 0, 0, 0, 0);
GetVehicleParamsEx(0, ival, ival, ival, ival, ival, ival, ival);
SetVehicleToRespawn(0);
LinkVehicleToInterior(0, 0);
AddVehicleComponent(0, 0);
RemoveVehicleComponent(0, 0);
ChangeVehicleColor(0, 0, 0);
ChangeVehiclePaintjob(0, 0);
SetVehicleHealth(0, 0.0);
GetVehicleHealth(0, fval);
AttachTrailerToVehicle(0, 0);
DetachTrailerFromVehicle(0);
IsTrailerAttachedToVehicle(0);
GetVehicleTrailer(0);
SetVehicleNumberPlate(0, "");
GetVehicleModel(0);
GetVehicleComponentInSlot(0, 0); // There is 1 slot for each CARMODTYPE_*
GetVehicleComponentType(0); // Find CARMODTYPE_* for component id
RepairVehicle(0); // Repairs the damage model and resets the health
GetVehicleVelocity(0, fval, fval, fval);
SetVehicleVelocity(0, 0.0, 0.0, 0.0);
SetVehicleAngularVelocity(0, 0.0, 0.0, 0.0);
GetVehicleDamageStatus(0, ival, ival, ival, ival);
UpdateVehicleDamageStatus(0, 0, 0, 0, 0);

GetVehicleModelInfo(0, 0, fval, fval, fval);

// Virtual Worlds
SetVehicleVirtualWorld(0, 0);
GetVehicleVirtualWorld(0);

db_open("");
db_close(DB:0);
db_query(DB:0, "");
db_free_result(DBResult:0);
db_num_rows(DBResult:0);
db_next_row(DBResult:0);
db_num_fields(DBResult:0);
db_field_name(DBResult:0, 0, "", 0);
db_get_field(DBResult:0, 0, "", 0);
db_get_field_assoc(DBResult:0, "", "", 0);
}

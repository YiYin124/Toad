#include <a_npc>

native NPC_OnNPCModeInit();
native NPC_OnNPCModeExit();
native NPC_OnNPCConnect(myplayerid);
native NPC_OnNPCDisconnect(reason[]);
native NPC_OnNPCSpawn();
native NPC_OnNPCEnterVehicle(vehicleid, seatid);
native NPC_OnNPCExitVehicle();
native NPC_OnClientMessage(color, text[]);
native NPC_OnPlayerDeath(playerid);
native NPC_OnPlayerText(playerid, text[]);
native NPC_OnPlayerStreamIn(playerid);
native NPC_OnPlayerStreamOut(playerid);
native NPC_OnVehicleStreamIn(vehicleid);
native NPC_OnVehicleStreamOut(vehicleid);
native NPC_OnRecordingPlaybackEnd();

public OnNPCModeInit() return NPC_OnNPCModeInit();
public OnNPCModeExit() return NPC_OnNPCModeExit();
public OnNPCConnect(myplayerid) return NPC_OnNPCConnect(myplayerid);
public OnNPCDisconnect(reason[]) return NPC_OnNPCDisconnect(reason);
public OnNPCSpawn() return NPC_OnNPCSpawn();
public OnNPCEnterVehicle(vehicleid, seatid) return NPC_OnNPCEnterVehicle(vehicleid, seatid);
public OnNPCExitVehicle() return NPC_OnNPCExitVehicle();
public OnClientMessage(color, text[]) return NPC_OnClientMessage(color, text);
public OnPlayerDeath(playerid) return NPC_OnPlayerDeath(playerid);
public OnPlayerText(playerid, text[]) return NPC_OnPlayerText(playerid, text);
public OnPlayerStreamIn(playerid) return NPC_OnPlayerStreamIn(playerid);
public OnPlayerStreamOut(playerid) return NPC_OnPlayerStreamOut(playerid);
public OnVehicleStreamIn(vehicleid) return NPC_OnVehicleStreamIn(vehicleid);
public OnVehicleStreamOut(vehicleid) return NPC_OnVehicleStreamOut(vehicleid);
public OnRecordingPlaybackEnd() return NPC_OnRecordingPlaybackEnd();

forward OnRegisterFunctions();
public OnRegisterFunctions()
{
new ival, Float:fval;
print("");
printf("");
format("", 0, "");
SetTimer("", 0, 0);
KillTimer(0);
GetTickCount();
asin(Float:0.0);
acos(Float:0.0);
atan(Float:0.0);
atan2(Float:0.0, Float:0.0);
SendChat("");
SendCommand("");
GetPlayerState(0);
GetPlayerPos(0, fval, fval, fval);
GetPlayerVehicleID(0);
GetPlayerArmedWeapon(0);
GetPlayerHealth(0);
GetPlayerArmour(0);
GetPlayerSpecialAction(0);
IsPlayerStreamedIn(0);
IsVehicleStreamedIn(0);
GetPlayerKeys(0, ival, ival, ival);
GetPlayerFacingAngle(0, fval);
GetMyPos(fval, fval, fval);
SetMyPos(0.0, 0.0, 0.0);
GetMyFacingAngle(fval);
SetMyFacingAngle(0.0);
GetDistanceFromMeToPoint(0.0, 0.0, 0.0, fval);
IsPlayerInRangeOfPoint(0, 0.0, 0.0, 0.0, 0.0);
GetPlayerName(0, "", 0);
IsPlayerConnected(0);
StartRecordingPlayback(0, "");
StopRecordingPlayback();
PauseRecordingPlayback();
ResumeRecordingPlayback();
}
main() {}

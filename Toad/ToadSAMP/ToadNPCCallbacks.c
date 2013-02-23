#include "a_npc.h"
#include "toadSAMP.h"

static cell AMX_NATIVE_CALL NPC_OnNPCModeInit(AMX *amx, const cell *params)
{
	return OnNPCModeInit();
}

static cell AMX_NATIVE_CALL NPC_OnNPCModeExit(AMX *amx, const cell *params)
{
	return OnNPCModeExit();
}

static cell AMX_NATIVE_CALL NPC_OnNPCConnect(AMX *amx, const cell *params)
{
	return OnNPCConnect(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnNPCDisconnect(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[1], text, sizeof(text));
	return OnNPCDisconnect(text);
}

static cell AMX_NATIVE_CALL NPC_OnNPCSpawn(AMX *amx, const cell *params)
{
	return OnNPCSpawn();
}

static cell AMX_NATIVE_CALL NPC_OnNPCEnterVehicle(AMX *amx, const cell *params)
{
	return OnNPCEnterVehicle(params[1], params[2]);
}

static cell AMX_NATIVE_CALL NPC_OnNPCExitVehicle(AMX *amx, const cell *params)
{
	return OnNPCExitVehicle();
}

static cell AMX_NATIVE_CALL NPC_OnClientMessage(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnClientMessage(params[1], text);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerDeath(AMX *amx, const cell *params)
{
	return OnPlayerDeath(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerText(AMX *amx, const cell *params)
{
	char text[1024];
	_amx_GetString(amx, params[2], text, sizeof(text));
	return OnPlayerText(params[1], text);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerStreamIn(AMX *amx, const cell *params)
{
	return OnPlayerStreamIn(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnPlayerStreamOut(AMX *amx, const cell *params)
{
	return OnPlayerStreamOut(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnVehicleStreamIn(AMX *amx, const cell *params)
{
	return OnVehicleStreamIn(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnVehicleStreamOut(AMX *amx, const cell *params)
{
	return OnVehicleStreamOut(params[1]);
}

static cell AMX_NATIVE_CALL NPC_OnRecordingPlaybackEnd(AMX *amx, const cell *params)
{
	return OnRecordingPlaybackEnd();
}
#include "../ToadSAMP/toadSAMP.h"

void OnLoadPlugin()
{
	printfln("[TEST] OnLoadPlugin");
}


void OnUnloadPlugin()
{
	printfln("[TEST] OnUnloadPlugin");
}


void OnProcessTick()
{
	//printf("[TEST] OnProcessTick");
}

int OnGameModeInit()
{
	println("[TEST]OnGameModeInit");
	//DisableInteriorEnterExits();
	return 1;
}
#include "../ToadSAMP/toadSAMP.h"

void OnLoadPlugin()
{
	printf("[TEST] OnLoadPlugin");
}


void OnUnloadPlugin()
{
	printf("[TEST] OnUnloadPlugin");
}


void OnProcessTick()
{
	//printf("[TEST] OnProcessTick");
}

int OnGameModeInit()
{
	print("[TEST]OnGameModeInit");
	return 1;
}
#include <a_samp>

public OnFilterScriptInit()
{
	print("");
}

public OnRconCommand(cmd[])
{
	if (strcmp(cmd, "test", true) == 0)
	{
	    print("[Pawn] This RCON test CMD!");
	    return 1;
	}
	return 0;
}

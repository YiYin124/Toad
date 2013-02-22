#include <a_samp>
native FS_OnFilterScriptInit();
native FS_OnFilterScriptExit();
native FS_OnRconCommand(cmd[]);
public OnFilterScriptInit() return FS_OnFilterScriptInit();
public OnFilterScriptExit() return FS_OnFilterScriptExit();
public OnRconCommand(cmd[]) return FS_OnRconCommand(cmd);

#pragma once

extern void (*printfln)(char* format, ...);

int OnLoadPlugin();
void OnUnloadPlugin();
void OnProcessTick();
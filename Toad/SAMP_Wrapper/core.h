/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#pragma once

// --------------------------------------------------
// Natives
// --------------------------------------------------

typedef void (*samp_printf)(char* format, ...);
extern samp_printf sampprintf;

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnLoadPlugin();
void OnUnloadPlugin();
void OnProcessTick();

// --------------------------------------------------
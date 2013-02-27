/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#pragma once

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnNPCConnect(int npcid);
int OnNPCDisconnect(int npcid, int reason);
int OnNPCSpawn(int npcid);
int OnNPCDeath(int npcid, int killerid, int reason);
int OnNPCText(int npcid, char text[]);
int OnNPCEnterVehicle(int npcid, int vehicleid, int ispassenger);
int OnNPCExitVehicle(int npcid, int vehicleid);
int OnNPCStateChange(int npcid, int newstate, int oldstate);
int OnNPCEnterCheckpoint(int npcid);
int OnNPCLeaveCheckpoint(int npcid);
int OnNPCEnterRaceCheckpoint(int npcid);
int OnNPCLeaveRaceCheckpoint(int npcid);
int OnNPCObjectMoved(int npcid, int objectid);
int OnNPCPickUpPickup(int npcid, int pickupid);
int OnNPCInteriorChange(int npcid, int newinteriorid, int oldinteriorid);
int OnNPCUpdate(int npcid);
int OnNPCStreamIn(int npcid, int forplayerid);
int OnNPCStreamOut(int npcid, int forplayerid);
int OnNPCTakeDamage(int npcid, int issuerid, float amount, int weaponid);
int OnNPCGiveDamage(int npcid, int damagedid, float amount, int weaponid);
// --------------------------------------------------
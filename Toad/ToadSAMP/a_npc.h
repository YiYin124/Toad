/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*/

#pragma once

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnNPCConnect(int npcid);// Y
int OnNPCDisconnect(int npcid, int reason);// Y
int OnNPCSpawn(int npcid);// Y
int OnNPCDeath(int npcid, int killerid, int reason);// Y
int OnNPCText(int npcid, char text[]);// Y
int OnNPCEnterVehicle(int npcid, int vehicleid, int ispassenger);// Y
int OnNPCExitVehicle(int npcid, int vehicleid);// Y
int OnNPCStateChange(int npcid, int newstate, int oldstate);// Y
int OnNPCEnterCheckpoint(int npcid);// Y
int OnNPCLeaveCheckpoint(int npcid);// Y
int OnNPCEnterRaceCheckpoint(int npcid);// Y
int OnNPCLeaveRaceCheckpoint(int npcid);// Y
int OnNPCObjectMoved(int npcid, int objectid);// Y
int OnNPCPickUpPickup(int npcid, int pickupid);// Y
int OnNPCInteriorChange(int npcid, int newinteriorid, int oldinteriorid);// Y
int OnNPCUpdate(int npcid);// Y
int OnNPCStreamIn(int npcid, int forplayerid);// Y
int OnNPCStreamOut(int npcid, int forplayerid);// Y
int OnNPCTakeDamage(int npcid, int issuerid, float amount, int weaponid);// Y
int OnNPCGiveDamage(int npcid, int damagedid, float amount, int weaponid);// Y
// --------------------------------------------------
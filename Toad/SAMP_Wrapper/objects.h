/*  SA-MP Object Functions
*
*  (c) Copyright 2005-2012, SA-MP Team
*
*/

#pragma once

// --------------------------------------------------
// Natives
// --------------------------------------------------

int CreateObject(int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance);
int AttachObjectToVehicle(int objectid, int vehicleid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ);
int AttachObjectToObject(int objectid, int attachtoid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ, int SyncRotation);
int AttachObjectToPlayer(int objectid, int playerid, float OffsetX, float OffsetY, float OffsetZ, float RotX, float RotY, float RotZ);
int SetObjectPos(int objectid, float X, float Y, float Z);
int GetObjectPos(int objectid, float *X, float *Y, float *Z);
int SetObjectRot(int objectid, float RotX, float RotY, float RotZ);
int GetObjectRot(int objectid, float *RotX, float *RotY, float *RotZ);
int IsValidObject(int objectid);
int DestroyObject(int objectid);
int MoveObject(int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ);
int StopObject(int objectid);
int IsObjectMoving(int objectid);
int EditObject(int playerid, int objectid);
int EditPlayerObject(int playerid, int objectid);
int SelectObject(int playerid);
int CancelEdit(int playerid);
int CreatePlayerObject(int playerid, int modelid, float X, float Y, float Z, float rX, float rY, float rZ, float DrawDistance);
int AttachPlayerObjectToVehicle(int playerid, int objectid, int vehicleid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float RotZ);
int SetPlayerObjectPos(int playerid, int objectid, float X, float Y, float Z);
int GetPlayerObjectPos(int playerid, int objectid, float *X, float *Y, float *Z);
int SetPlayerObjectRot(int playerid, int objectid, float RotX, float RotY, float RotZ);
int GetPlayerObjectRot(int playerid, int objectid, float *RotX, float *RotY, float *RotZ);
int IsValidPlayerObject(int playerid, int objectid);
int DestroyPlayerObject(int playerid, int objectid);
int MovePlayerObject(int playerid, int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ);
int StopPlayerObject(int playerid, int objectid);
int IsPlayerObjectMoving(int playerid, int objectid);
int AttachPlayerObjectToPlayer(int objectplayer, int objectid, int attachplayer, float OffsetX, float OffsetY, float OffsetZ, float rX, float rY, float rZ);
int SetObjectMaterial(int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor);
int SetPlayerObjectMaterial(int playerid, int objectid, int materialindex, int modelid, char txdname[], char texturename[], int materialcolor);
int SetObjectMaterialText(int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment);
int SetPlayerObjectMaterialText(int playerid, int objectid, char text[], int materialindex, int materialsize, char fontface[], int fontsize, int bold, int fontcolor, int backcolor, int textalignment);

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnObjectMoved(int objectid);

// --------------------------------------------------
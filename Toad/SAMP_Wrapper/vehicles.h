#pragma once
/*  SA-MP Vehicle Functions
*
*  (c) Copyright 2005-2012, SA-MP Team
*
*/

// --------------------------------------------------
// Natives
// --------------------------------------------------

// Vehicle
int CreateVehicle(int vehicletype, float x, float y, float z, float rotation, int color1, int color2, int respawn_delay);
int DestroyVehicle(int vehicleid);
int IsVehicleStreamedIn(int vehicleid, int forplayerid);
int GetVehiclePos(int vehicleid, float *x, float *y, float *z);
int SetVehiclePos(int vehicleid, float x, float y, float z);
int GetVehicleZAngle(int vehicleid, float *z_angle);
int GetVehicleRotationQuat(int vehicleid, float *w, float *x, float *y, float *z);
float GetVehicleDistanceFromPoint(int vehicleid, float X, float Y, float Z);
int SetVehicleZAngle(int vehicleid, float z_angle);
int SetVehicleParamsForPlayer(int vehicleid, int playerid, int objective, int doorslocked);
int ManualVehicleEngineAndLights();
int SetVehicleParamsEx(int vehicleid, int engine, int lights, int alarm, int doors, int bonnet, int boot, int objective);
int GetVehicleParamsEx(int vehicleid, int *engine, int *lights, int *alarm, int *doors, int *bonnet, int *boot, int *objective);
int SetVehicleToRespawn(int vehicleid);
int LinkVehicleToInterior(int vehicleid, int interiorid);
int AddVehicleComponent(int vehicleid, int componentid);
int RemoveVehicleComponent(int vehicleid, int componentid);
int ChangeVehicleColor(int vehicleid, int color1, int color2);
int ChangeVehiclePaintjob(int vehicleid, int paintjobid);
int SetVehicleHealth(int vehicleid, float health);
int GetVehicleHealth(int vehicleid, float *health);
int AttachTrailerToVehicle(int trailerid, int vehicleid);
int DetachTrailerFromVehicle(int vehicleid);
int IsTrailerAttachedToVehicle(int vehicleid);
int GetVehicleTrailer(int vehicleid);
int SetVehicleNumberPlate(int vehicleid, char numberplate[]);
int GetVehicleModel(int vehicleid);
int GetVehicleComponentInSlot(int vehicleid, int slot); // There is 1 slot for each CARMODTYPE_*
int GetVehicleComponentType(int component); // Find CARMODTYPE_* for component id
int RepairVehicle(int vehicleid); // Repairs the damage model and resets the health
int GetVehicleVelocity(int vehicleid, float *X, float *Y, float *Z);
int SetVehicleVelocity(int vehicleid, float X, float Y, float Z);
int SetVehicleAngularVelocity(int vehicleid, float X, float Y, float Z);
int GetVehicleDamageStatus(int vehicleid, int *panels, int *doors, int *lights, int *tires);
int UpdateVehicleDamageStatus(int vehicleid, int panels, int doors, int lights, int tires);
int GetVehicleModelInfo(int vehiclemodel, int infotype, float *X, float *Y, float *Z);

// Virtual Worlds
int SetVehicleVirtualWorld(int vehicleid, int worldid);
int GetVehicleVirtualWorld(int vehicleid);

// --------------------------------------------------
// Forwards (Callback declarations)
// --------------------------------------------------

int OnVehicleSpawn(int vehicleid);
int OnVehicleDeath(int vehicleid, int killerid);
int OnVehicleDamageStatusUpdate(int vehicleid, int playerid);
int OnVehicleStreamIn(int vehicleid, int forplayerid);
int OnVehicleStreamOut(int vehicleid, int forplayerid);
int OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat);
int OnVehicleMod(int playerid, int vehicleid, int componentid);
int OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid);
int OnVehicleRespray(int playerid, int vehicleid, int color1, int color2);

// --------------------------------------------------
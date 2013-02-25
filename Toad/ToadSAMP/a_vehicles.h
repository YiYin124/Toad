#pragma once
/*  SA-MP Vehicle Functions
*
*  (c) Copyright 2005-2012, SA-MP Team
*
*/

// --------------------------------------------------
// Defines
// --------------------------------------------------

#define CARMODTYPE_SPOILER		0
#define CARMODTYPE_HOOD			1
#define CARMODTYPE_ROOF			2
#define CARMODTYPE_SIDESKIRT	3
#define CARMODTYPE_LAMPS		4
#define CARMODTYPE_NITRO		5
#define CARMODTYPE_EXHAUST		6
#define CARMODTYPE_WHEELS		7
#define CARMODTYPE_STEREO		8
#define CARMODTYPE_HYDRAULICS	9
#define CARMODTYPE_FRONT_BUMPER	10
#define CARMODTYPE_REAR_BUMPER	11
#define CARMODTYPE_VENT_RIGHT	12
#define CARMODTYPE_VENT_LEFT	13

#define VEHICLE_PARAMS_UNSET	-1
#define VEHICLE_PARAMS_OFF		0
#define VEHICLE_PARAMS_ON		1

#define VEHICLE_MODEL_INFO_SIZE				1
#define VEHICLE_MODEL_INFO_FRONTSEAT		2
#define VEHICLE_MODEL_INFO_REARSEAT			3
#define VEHICLE_MODEL_INFO_PETROLCAP		4
#define VEHICLE_MODEL_INFO_WHEELSFRONT		5
#define VEHICLE_MODEL_INFO_WHEELSREAR		6
#define VEHICLE_MODEL_INFO_WHEELSMID		7
#define VEHICLE_MODEL_INFO_FRONT_BUMPER_Z	8
#define VEHICLE_MODEL_INFO_REAR_BUMPER_Z	9

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
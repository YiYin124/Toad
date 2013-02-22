#include <a_samp>

native GM_OnGameModeInit();
native GM_OnGameModeExit();
native GM_OnFilterScriptInit();
native GM_OnFilterScriptExit();
native GM_OnPlayerConnect(playerid);
native GM_OnPlayerDisconnect(playerid, reason);
native GM_OnPlayerSpawn(playerid);
native GM_OnPlayerDeath(playerid, killerid, reason);
native GM_OnVehicleSpawn(vehicleid);
native GM_OnVehicleDeath(vehicleid, killerid);
native GM_OnPlayerText(playerid, text[]);
native GM_OnPlayerCommandText(playerid, cmdtext[]);
native GM_OnPlayerRequestClass(playerid, classid);
native GM_OnPlayerEnterVehicle(playerid, vehicleid, ispassenger);
native GM_OnPlayerExitVehicle(playerid, vehicleid);
native GM_OnPlayerStateChange(playerid, newstate, oldstate);
native GM_OnPlayerEnterCheckpoint(playerid);
native GM_OnPlayerLeaveCheckpoint(playerid);
native GM_OnPlayerEnterRaceCheckpoint(playerid);
native GM_OnPlayerLeaveRaceCheckpoint(playerid);
native GM_OnRconCommand(cmd[]);
native GM_OnPlayerRequestSpawn(playerid);
native GM_OnObjectMoved(objectid);
native GM_OnPlayerObjectMoved(playerid, objectid);
native GM_OnPlayerPickUpPickup(playerid, pickupid);
native GM_OnVehicleMod(playerid, vehicleid, componentid);
native GM_OnEnterExitModShop(playerid, enterexit, interiorid);
native GM_OnVehiclePaintjob(playerid, vehicleid, paintjobid);
native GM_OnVehicleRespray(playerid, vehicleid, color1, color2);
native GM_OnVehicleDamageStatusUpdate(vehicleid, playerid);
native GM_OnUnoccupiedVehicleUpdate(vehicleid, playerid, passenger_seat);
native GM_OnPlayerSelectedMenuRow(playerid, row);
native GM_OnPlayerExitedMenu(playerid);
native GM_OnPlayerInteriorChange(playerid, newinteriorid, oldinteriorid);
native GM_OnPlayerKeyStateChange(playerid, newkeys, oldkeys);
native GM_OnRconLoginAttempt( ip[], password[], success );
native GM_OnPlayerUpdate(playerid);
native GM_OnPlayerStreamIn(playerid, forplayerid);
native GM_OnPlayerStreamOut(playerid, forplayerid);
native GM_OnVehicleStreamIn(vehicleid, forplayerid);
native GM_OnVehicleStreamOut(vehicleid, forplayerid);
native GM_OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]);
native GM_OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid);
native GM_OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid);
native GM_OnPlayerClickMap(playerid, Float:fX, Float:fY, Float:fZ);
native GM_OnPlayerClickTextDraw(playerid, Text:clickedid);
native GM_OnPlayerClickPlayerTextDraw(playerid, PlayerText:playertextid);
native GM_OnPlayerClickPlayer(playerid, clickedplayerid, source);
native GM_OnPlayerEditObject( playerid, playerobject, objectid, response, Float:fX, Float:fY, Float:fZ, Float:fRotX, Float:fRotY, Float:fRotZ );
native GM_OnPlayerEditAttachedObject( playerid, response, index, modelid, boneid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ );
native GM_OnPlayerSelectObject(playerid, type, objectid, modelid, Float:fX, Float:fY, Float:fZ);


main() { }

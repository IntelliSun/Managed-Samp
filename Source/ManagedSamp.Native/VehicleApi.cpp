#include "stdafx.h"
#include "VechicleApi.h"

#include <sampgdk/a_vehicles.h>

INLINE_API_CALL bool Api_IsValidVehicle(int vehicleid)
{
	return IsValidVehicle(vehicleid);
}

INLINE_API_CALL float Api_GetVehicleDistanceFromPoint(int vehicleid, float x, float y, float z)
{
	return GetVehicleDistanceFromPoint(vehicleid, x, y, z);
}

INLINE_API_CALL int Api_CreateVehicle(int vehicletype, float x, float y, float z, float rotation, int color1, int color2, int respawn_delay)
{
	return CreateVehicle(vehicletype, x, y, z, rotation, color1, color2, respawn_delay);
}

INLINE_API_CALL bool Api_DestroyVehicle(int vehicleid)
{
	return DestroyVehicle(vehicleid);
}

INLINE_API_CALL bool Api_IsVehicleStreamedIn(int vehicleid, int forplayerid)
{
	return IsVehicleStreamedIn(vehicleid, forplayerid);
}

INLINE_API_CALL bool Api_GetVehiclePos(int vehicleid, float *x, float *y, float *z)
{
	return GetVehiclePos(vehicleid, x, y, z);
}

INLINE_API_CALL bool Api_SetVehiclePos(int vehicleid, float x, float y, float z)
{
	return SetVehiclePos(vehicleid, x, y, z);
}

INLINE_API_CALL bool Api_GetVehicleZAngle(int vehicleid, float *z_angle)
{
	return GetVehicleZAngle(vehicleid, z_angle);
}

INLINE_API_CALL bool Api_GetVehicleRotationQuat(int vehicleid, float *w, float *x, float *y, float *z)
{
	return GetVehicleRotationQuat(vehicleid, w, x, y, z);
}

INLINE_API_CALL bool Api_SetVehicleZAngle(int vehicleid, float z_angle)
{
	return SetVehicleZAngle(vehicleid, z_angle);
}

INLINE_API_CALL bool Api_SetVehicleParamsForPlayer(int vehicleid, int playerid, bool objective, bool doorslocked)
{
	return SetVehicleParamsForPlayer(vehicleid, playerid, objective, doorslocked);
}

INLINE_API_CALL bool Api_ManualVehicleEngineAndLights()
{
	return ManualVehicleEngineAndLights();
}

INLINE_API_CALL bool Api_SetVehicleParamsEx(int vehicleid, bool engine, bool lights, bool alarm, bool doors, bool bonnet, bool boot, bool objective)
{
	return SetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
}

INLINE_API_CALL bool Api_GetVehicleParamsEx(int vehicleid, bool *engine, bool *lights, bool *alarm, bool *doors, bool *bonnet, bool *boot, bool *objective)
{
	return GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
}

INLINE_API_CALL bool Api_SetVehicleToRespawn(int vehicleid)
{
	return SetVehicleToRespawn(vehicleid);
}

INLINE_API_CALL bool Api_LinkVehicleToInterior(int vehicleid, int interiorid)
{
	return LinkVehicleToInterior(vehicleid, interiorid);
}

INLINE_API_CALL bool Api_AddVehicleComponent(int vehicleid, int componentid)
{
	return AddVehicleComponent(vehicleid, componentid);
}

INLINE_API_CALL bool Api_RemoveVehicleComponent(int vehicleid, int componentid)
{
	return RemoveVehicleComponent(vehicleid, componentid);
}

INLINE_API_CALL bool Api_ChangeVehicleColor(int vehicleid, int color1, int color2)
{
	return ChangeVehicleColor(vehicleid, color1, color2);
}

INLINE_API_CALL bool Api_ChangeVehiclePaintjob(int vehicleid, int paintjobid)
{
	return ChangeVehiclePaintjob(vehicleid, paintjobid);
}

INLINE_API_CALL bool Api_SetVehicleHealth(int vehicleid, float health)
{
	return SetVehicleHealth(vehicleid, health);
}

INLINE_API_CALL bool Api_GetVehicleHealth(int vehicleid, float *health)
{
	return GetVehicleHealth(vehicleid, health);
}

INLINE_API_CALL bool Api_AttachTrailerToVehicle(int trailerid, int vehicleid)
{
	return AttachTrailerToVehicle(trailerid, vehicleid);
}

INLINE_API_CALL bool Api_DetachTrailerFromVehicle(int vehicleid)
{
	return DetachTrailerFromVehicle(vehicleid);
}

INLINE_API_CALL bool Api_IsTrailerAttachedToVehicle(int vehicleid)
{
	return IsTrailerAttachedToVehicle(vehicleid);
}

INLINE_API_CALL int Api_GetVehicleTrailer(int vehicleid)
{
	return GetVehicleTrailer(vehicleid);
}

INLINE_API_CALL bool Api_SetVehicleNumberPlate(int vehicleid, const char *numberplate)
{
	return SetVehicleNumberPlate(vehicleid, numberplate);
}

INLINE_API_CALL int Api_GetVehicleModel(int vehicleid)
{
	return GetVehicleModel(vehicleid);
}

INLINE_API_CALL int Api_GetVehicleComponentInSlot(int vehicleid, int slot)
{
	return GetVehicleComponentInSlot(vehicleid, slot);
}

INLINE_API_CALL int Api_GetVehicleComponentType(int component)
{
	return GetVehicleComponentType(component);
}

INLINE_API_CALL bool Api_RepairVehicle(int vehicleid)
{
	return RepairVehicle(vehicleid);
}

INLINE_API_CALL bool Api_GetVehicleVelocity(int vehicleid, float *X, float *Y, float *Z)
{
	return GetVehicleVelocity(vehicleid, X, Y, Z);
}

INLINE_API_CALL bool Api_SetVehicleVelocity(int vehicleid, float X, float Y, float Z)
{
	return SetVehicleVelocity(vehicleid, X, Y, Z);
}

INLINE_API_CALL bool Api_SetVehicleAngularVelocity(int vehicleid, float X, float Y, float Z)
{
	return SetVehicleAngularVelocity(vehicleid, X, Y, Z);
}

INLINE_API_CALL bool Api_GetVehicleDamageStatus(int vehicleid, int *panels, int *doors, int *lights, int *tires)
{
	return GetVehicleDamageStatus(vehicleid, panels, doors, lights, tires);
}

INLINE_API_CALL bool Api_UpdateVehicleDamageStatus(int vehicleid, int panels, int doors, int lights, int tires)
{
	return UpdateVehicleDamageStatus(vehicleid, panels, doors, lights, tires);
}

INLINE_API_CALL bool Api_SetVehicleVirtualWorld(int vehicleid, int worldid)
{
	return SetVehicleVirtualWorld(vehicleid, worldid);
}

INLINE_API_CALL int Api_GetVehicleVirtualWorld(int vehicleid)
{
	return GetVehicleVirtualWorld(vehicleid);
}

INLINE_API_CALL bool Api_GetVehicleModelInfo(int model, int infotype, float *X, float *Y, float *Z)
{
	return GetVehicleModelInfo(model, infotype, X, Y, Z);
}
#include "stdafx.h"
#include "ObjectApi.h"

#include "sampgdk/a_objects.h"

INLINE_API_CALL int Api_CreateObject(int modelid, float x, float y, float z, float rX, float rY, float rZ, float DrawDistance)
{
	return CreateObject(modelid, x, y, z, rX, rY, rZ, DrawDistance);
}

INLINE_API_CALL bool Api_AttachObjectToVehicle(int objectid, int vehicleid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ)
{
	return AttachObjectToVehicle(objectid, vehicleid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ);
}

INLINE_API_CALL bool Api_AttachObjectToObject(int objectid, int attachtoid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, bool SyncRotation)
{
	return AttachObjectToObject(objectid, attachtoid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, SyncRotation);
}

INLINE_API_CALL bool Api_AttachObjectToPlayer(int objectid, int playerid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ)
{
	return AttachObjectToPlayer(objectid, playerid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ);
}

INLINE_API_CALL bool Api_SetObjectPos(int objectid, float x, float y, float z)
{
	return SetObjectPos(objectid, x, y, z);
}

INLINE_API_CALL bool Api_GetObjectPos(int objectid, float *x, float *y, float *z)
{
	return GetObjectPos(objectid, x, y, z);
}

INLINE_API_CALL bool Api_SetObjectRot(int objectid, float rotX, float rotY, float rotZ)
{
	return SetObjectRot(objectid, rotX, rotY, rotZ);
}

INLINE_API_CALL bool Api_GetObjectRot(int objectid, float *rotX, float *rotY, float *rotZ)
{
	return GetObjectRot(objectid, rotX, rotY, rotZ);
}

INLINE_API_CALL bool Api_IsValidObject(int objectid)
{
	return IsValidObject(objectid);
}

INLINE_API_CALL bool Api_DestroyObject(int objectid)
{
	return DestroyObject(objectid);
}

INLINE_API_CALL int Api_MoveObject(int objectid, float X, float Y, float Z, float Speed, float RotX, float RotY, float RotZ)
{
	return MoveObject(objectid, X, Y, Z, Speed, RotX, RotY, RotZ);
}

INLINE_API_CALL bool Api_StopObject(int objectid)
{
	return StopObject(objectid);
}

INLINE_API_CALL bool Api_IsObjectMoving(int objectid)
{
	return IsObjectMoving(objectid);
}

INLINE_API_CALL bool Api_EditObject(int playerid, int objectid)
{
	return EditObject(playerid, objectid);
}

INLINE_API_CALL bool Api_EditPlayerObject(int playerid, int objectid)
{
	return EditPlayerObject(playerid, objectid);
}

INLINE_API_CALL bool Api_SelectObject(int playerid)
{
	return SelectObject(playerid);
}

INLINE_API_CALL bool Api_CancelEdit(int playerid)
{
	return CancelEdit(playerid);
}

INLINE_API_CALL int Api_CreatePlayerObject(int playerid, int modelid, float x, float y, float z, float rX, float rY, float rZ, float DrawDistance)
{
	return CreatePlayerObject(playerid, modelid, x, y, z, rX, rY, rZ, DrawDistance);
}

INLINE_API_CALL bool Api_AttachPlayerObjectToPlayer(int objectplayer, int objectid, int attachplayer, float OffsetX, float OffsetY, float OffsetZ, float rX, float rY, float rZ)
{
	return AttachPlayerObjectToPlayer(objectplayer, objectid, attachplayer, OffsetX, OffsetY, OffsetZ, rX, rY, rZ);
}

INLINE_API_CALL bool Api_AttachPlayerObjectToVehicle(int playerid, int objectid, int vehicleid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float RotZ)
{
	return AttachPlayerObjectToVehicle(playerid, objectid, vehicleid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, RotZ);
}

INLINE_API_CALL bool Api_SetPlayerObjectPos(int playerid, int objectid, float x, float y, float z)
{
	return SetPlayerObjectPos(playerid, objectid, x, y, z);
}

INLINE_API_CALL bool Api_GetPlayerObjectPos(int playerid, int objectid, float *x, float *y, float *z)
{
	return GetPlayerObjectPos(playerid, objectid, x, y, z);
}

INLINE_API_CALL bool Api_SetPlayerObjectRot(int playerid, int objectid, float rotX, float rotY, float rotZ)
{
	return SetPlayerObjectRot(playerid, objectid, rotX, rotY, rotZ);
}

INLINE_API_CALL bool Api_GetPlayerObjectRot(int playerid, int objectid, float *rotX, float *rotY, float *rotZ)
{
	return GetPlayerObjectRot(playerid, objectid, rotX, rotY, rotZ);
}

INLINE_API_CALL bool Api_IsValidPlayerObject(int playerid, int objectid)
{
	return IsValidPlayerObject(playerid, objectid);
}

INLINE_API_CALL bool Api_DestroyPlayerObject(int playerid, int objectid)
{
	return DestroyPlayerObject(playerid, objectid);
}

INLINE_API_CALL int Api_MovePlayerObject(int playerid, int objectid, float x, float y, float z, float Speed, float RotX, float RotY, float RotZ)
{
	return MovePlayerObject(playerid, objectid, x, y, z, Speed, RotX, RotY, RotZ);
}

INLINE_API_CALL bool Api_StopPlayerObject(int playerid, int objectid)
{
	return StopPlayerObject(playerid, objectid);
}

INLINE_API_CALL bool Api_IsPlayerObjectMoving(int playerid, int objectid)
{
	return IsPlayerObjectMoving(playerid, objectid);
}

INLINE_API_CALL bool Api_SetObjectMaterial(int objectid, int materialindex, int modelid, const char *txdname, const char *texturename, int materialcolor)
{
	return SetObjectMaterial(objectid, materialindex, modelid, txdname, texturename, materialcolor);
}

INLINE_API_CALL bool Api_SetPlayerObjectMaterial(int playerid, int objectid, int materialindex, int modelid, const char *txdname, const char *texturename, int materialcolor)
{
	return SetPlayerObjectMaterial(playerid, objectid, materialindex, modelid, txdname, texturename, materialcolor);
}

INLINE_API_CALL bool Api_SetObjectMaterialText(int objectid, const char *text, int materialindex, int materialsize, const char *fontface, int fontsize, bool bold, int fontcolor, int backcolor, int textalignment)
{
	return SetObjectMaterialText(objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment);
}

INLINE_API_CALL bool Api_SetPlayerObjectMaterialText(int playerid, int objectid, const char *text, int materialindex, int materialsize, const char *fontface, int fontsize, bool bold, int fontcolor, int backcolor, int textalignment)
{
	return SetPlayerObjectMaterialText(playerid, objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment);
}
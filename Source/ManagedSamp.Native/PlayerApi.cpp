#include "stdafx.h"
#include "PlayerApi.h"

#include <sampgdk/a_players.h>

INLINE_API_CALL bool Api_SetSpawnInfo(int playerid, int team, int skin, float x, float y, float z, float rotation, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return SetSpawnInfo(playerid, team, skin, x, y, z, rotation, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}

INLINE_API_CALL bool Api_SpawnPlayer(int playerid)
{
	return SpawnPlayer(playerid);
}

INLINE_API_CALL bool Api_SetPlayerPos(int playerid, float x, float y, float z)
{
	return SetPlayerPos(playerid, x, y, z);
}

INLINE_API_CALL bool Api_SetPlayerPosFindZ(int playerid, float x, float y, float z)
{
	return SetPlayerPosFindZ(playerid, x, y, z);
}

INLINE_API_CALL bool Api_GetPlayerPos(int playerid, float *x, float *y, float *z)
{
	return GetPlayerPos(playerid, x, y, z);
}

INLINE_API_CALL bool Api_SetPlayerFacingAngle(int playerid, float angle)
{
	return SetPlayerFacingAngle(playerid, angle);
}

INLINE_API_CALL bool Api_GetPlayerFacingAngle(int playerid, float *angle)
{
	return GetPlayerFacingAngle(playerid, angle);
}

INLINE_API_CALL bool Api_IsPlayerInRangeOfPoint(int playerid, float range, float x, float y, float z)
{
	return IsPlayerInRangeOfPoint(playerid, range, x, y, z);
}

INLINE_API_CALL float Api_GetPlayerDistanceFromPoint(int playerid, float x, float y, float z)
{
	return GetPlayerDistanceFromPoint(playerid, x, y, z);
}

INLINE_API_CALL bool Api_IsPlayerStreamedIn(int playerid, int forplayerid)
{
	return IsPlayerStreamedIn(playerid, forplayerid);
}

INLINE_API_CALL bool Api_SetPlayerInterior(int playerid, int interiorid)
{
	return SetPlayerInterior(playerid, interiorid);
}

INLINE_API_CALL int Api_GetPlayerInterior(int playerid)
{
	return GetPlayerInterior(playerid);
}

INLINE_API_CALL bool Api_SetPlayerHealth(int playerid, float health)
{
	return SetPlayerHealth(playerid, health);
}

INLINE_API_CALL bool Api_GetPlayerHealth(int playerid, float *health)
{
	return GetPlayerHealth(playerid, health);
}

INLINE_API_CALL bool Api_SetPlayerArmour(int playerid, float armour)
{
	return SetPlayerArmour(playerid, armour);
}

INLINE_API_CALL bool Api_GetPlayerArmour(int playerid, float *armour)
{
	return GetPlayerArmour(playerid, armour);
}

INLINE_API_CALL bool Api_SetPlayerAmmo(int playerid, int weaponid, int ammo)
{
	return SetPlayerAmmo(playerid, weaponid, ammo);
}

INLINE_API_CALL int Api_GetPlayerAmmo(int playerid)
{
	return GetPlayerAmmo(playerid);
}

INLINE_API_CALL int Api_GetPlayerWeaponState(int playerid)
{
	return GetPlayerWeaponState(playerid);
}

INLINE_API_CALL int Api_GetPlayerTargetPlayer(int playerid)
{
	return GetPlayerTargetPlayer(playerid);
}

INLINE_API_CALL bool Api_SetPlayerTeam(int playerid, int teamid)
{
	return SetPlayerTeam(playerid, teamid);
}

INLINE_API_CALL int Api_GetPlayerTeam(int playerid)
{
	return GetPlayerTeam(playerid);
}

INLINE_API_CALL bool Api_SetPlayerScore(int playerid, int score)
{
	return SetPlayerScore(playerid, score);
}

INLINE_API_CALL int Api_GetPlayerScore(int playerid)
{
	return GetPlayerScore(playerid);
}

INLINE_API_CALL int Api_GetPlayerDrunkLevel(int playerid)
{
	return GetPlayerDrunkLevel(playerid);
}

INLINE_API_CALL bool Api_SetPlayerDrunkLevel(int playerid, int level)
{
	return SetPlayerDrunkLevel(playerid, level);
}

INLINE_API_CALL bool Api_SetPlayerColor(int playerid, int color)
{
	return SetPlayerColor(playerid, color);
}

INLINE_API_CALL int Api_GetPlayerColor(int playerid)
{
	return GetPlayerColor(playerid);
}

INLINE_API_CALL bool Api_SetPlayerSkin(int playerid, int skinid)
{
	return SetPlayerSkin(playerid, skinid);
}

INLINE_API_CALL int Api_GetPlayerSkin(int playerid)
{
	return GetPlayerSkin(playerid);
}

INLINE_API_CALL bool Api_GivePlayerWeapon(int playerid, int weaponid, int ammo)
{
	return GivePlayerWeapon(playerid, weaponid, ammo);
}

INLINE_API_CALL bool Api_ResetPlayerWeapons(int playerid)
{
	return ResetPlayerWeapons(playerid);
}

INLINE_API_CALL bool Api_SetPlayerArmedWeapon(int playerid, int weaponid)
{
	return SetPlayerArmedWeapon(playerid, weaponid);
}

INLINE_API_CALL bool Api_GetPlayerWeaponData(int playerid, int slot, int *weapon, int *ammo)
{
	return GetPlayerWeaponData(playerid, slot, weapon, ammo);
}

INLINE_API_CALL bool Api_GivePlayerMoney(int playerid, int money)
{
	return GivePlayerMoney(playerid, money);
}

INLINE_API_CALL bool Api_ResetPlayerMoney(int playerid)
{
	return ResetPlayerMoney(playerid);
}

INLINE_API_CALL int Api_SetPlayerName(int playerid, const char *name)
{
	return SetPlayerName(playerid, name);
}

INLINE_API_CALL int Api_GetPlayerMoney(int playerid)
{
	return GetPlayerMoney(playerid);
}

INLINE_API_CALL int Api_GetPlayerState(int playerid)
{
	return GetPlayerState(playerid);
}

INLINE_API_CALL bool Api_GetPlayerIp(int playerid, char *ip, int size)
{
	return GetPlayerIp(playerid, ip, size);
}

INLINE_API_CALL int Api_GetPlayerPing(int playerid)
{
	return GetPlayerPing(playerid);
}

INLINE_API_CALL int Api_GetPlayerWeapon(int playerid)
{
	return GetPlayerWeapon(playerid);
}

INLINE_API_CALL bool Api_GetPlayerKeys(int playerid, int *keys, int *updown, int *leftright)
{
	return GetPlayerKeys(playerid, keys, updown, leftright);
}

INLINE_API_CALL int Api_GetPlayerName(int playerid, char *name, int size)
{
	return GetPlayerName(playerid, name, size);
}

INLINE_API_CALL bool Api_SetPlayerTime(int playerid, int hour, int minute)
{
	return SetPlayerTime(playerid, hour, minute);
}

INLINE_API_CALL bool Api_GetPlayerTime(int playerid, int *hour, int *minute)
{
	return GetPlayerTime(playerid, hour, minute);
}

INLINE_API_CALL bool Api_TogglePlayerClock(int playerid, bool toggle)
{
	return TogglePlayerClock(playerid, toggle);
}

INLINE_API_CALL bool Api_SetPlayerWeather(int playerid, int weather)
{
	return SetPlayerWeather(playerid, weather);
}

INLINE_API_CALL bool Api_ForceClassSelection(int playerid)
{
	return ForceClassSelection(playerid);
}

INLINE_API_CALL bool Api_SetPlayerWantedLevel(int playerid, int level)
{
	return SetPlayerWantedLevel(playerid, level);
}

INLINE_API_CALL int Api_GetPlayerWantedLevel(int playerid)
{
	return GetPlayerWantedLevel(playerid);
}

INLINE_API_CALL bool Api_SetPlayerFightingStyle(int playerid, int style)
{
	return SetPlayerFightingStyle(playerid, style);
}

INLINE_API_CALL int Api_GetPlayerFightingStyle(int playerid)
{
	return GetPlayerFightingStyle(playerid);
}

INLINE_API_CALL bool Api_SetPlayerVelocity(int playerid, float x, float y, float z)
{
	return SetPlayerVelocity(playerid, x, y, z);
}

INLINE_API_CALL bool Api_GetPlayerVelocity(int playerid, float *x, float *y, float *z)
{
	return GetPlayerVelocity(playerid, x, y, z);
}

INLINE_API_CALL bool Api_PlayCrimeReportForPlayer(int playerid, int suspectid, int crime)
{
	return PlayCrimeReportForPlayer(playerid, suspectid, crime);
}

INLINE_API_CALL bool Api_PlayAudioStreamForPlayer(int playerid, const char *url, float posX, float posY, float posZ, float distance, bool usepos)
{
	return PlayAudioStreamForPlayer(playerid, url, posX, posY, posZ, distance, usepos);
}

INLINE_API_CALL bool Api_StopAudioStreamForPlayer(int playerid)
{
	return StopAudioStreamForPlayer(playerid);
}

INLINE_API_CALL bool Api_SetPlayerShopName(int playerid, const char *shopname)
{
	return SetPlayerShopName(playerid, shopname);
}

INLINE_API_CALL bool Api_SetPlayerSkillLevel(int playerid, int skill, int level)
{
	return SetPlayerSkillLevel(playerid, skill, level);
}

INLINE_API_CALL int Api_GetPlayerSurfingVehicleID(int playerid)
{
	return GetPlayerSurfingVehicleID(playerid);
}

INLINE_API_CALL int Api_GetPlayerSurfingObjectID(int playerid)
{
	return GetPlayerSurfingObjectID(playerid);
}

INLINE_API_CALL bool Api_RemoveBuildingForPlayer(int playerid, int modelid, float fX, float fY, float fZ, float fRadius)
{
	return RemoveBuildingForPlayer(playerid, modelid, fX, fY, fZ, fRadius);
}

INLINE_API_CALL bool Api_GetPlayerLastShotVectors(int playerid, float *fOriginX, float *fOriginY, float *fOriginZ, float *fHitPosX, float *fHitPosY, float *fHitPosZ)
{
	return GetPlayerLastShotVectors(playerid, fOriginX, fOriginY, fOriginZ, fHitPosX, fHitPosY, fHitPosZ);
}

INLINE_API_CALL bool Api_SetPlayerAttachedObject(int playerid, int index, int modelid, int bone, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ, int materialcolor1, int materialcolor2)
{
	return SetPlayerAttachedObject(playerid, index, modelid, bone, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ, materialcolor1, materialcolor2);
}

INLINE_API_CALL bool Api_RemovePlayerAttachedObject(int playerid, int index)
{
	return RemovePlayerAttachedObject(playerid, index);
}

INLINE_API_CALL bool Api_IsPlayerAttachedObjectSlotUsed(int playerid, int index)
{
	return IsPlayerAttachedObjectSlotUsed(playerid, index);
}

INLINE_API_CALL bool Api_EditAttachedObject(int playerid, int index)
{
	return EditAttachedObject(playerid, index);
}

INLINE_API_CALL int Api_CreatePlayerTextDraw(int playerid, float x, float y, const char *text)
{
	return CreatePlayerTextDraw(playerid, x, y, text);
}

INLINE_API_CALL bool Api_PlayerTextDrawDestroy(int playerid, int text)
{
	return PlayerTextDrawDestroy(playerid, text);
}

INLINE_API_CALL bool Api_PlayerTextDrawLetterSize(int playerid, int text, float x, float y)
{
	return PlayerTextDrawLetterSize(playerid, text, x, y);
}

INLINE_API_CALL bool Api_PlayerTextDrawTextSize(int playerid, int text, float x, float y)
{
	return PlayerTextDrawTextSize(playerid, text, x, y);
}

INLINE_API_CALL bool Api_PlayerTextDrawAlignment(int playerid, int text, int alignment)
{
	return PlayerTextDrawAlignment(playerid, text, alignment);
}

INLINE_API_CALL bool Api_PlayerTextDrawColor(int playerid, int text, int color)
{
	return PlayerTextDrawColor(playerid, text, color);
}

INLINE_API_CALL bool Api_PlayerTextDrawUseBox(int playerid, int text, bool use)
{
	return PlayerTextDrawUseBox(playerid, text, use);
}

INLINE_API_CALL bool Api_PlayerTextDrawBoxColor(int playerid, int text, int color)
{
	return PlayerTextDrawBoxColor(playerid, text, color);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetShadow(int playerid, int text, int size)
{
	return PlayerTextDrawSetShadow(playerid, text, size);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetOutline(int playerid, int text, int size)
{
	return PlayerTextDrawSetOutline(playerid, text, size);
}

INLINE_API_CALL bool Api_PlayerTextDrawBackgroundColor(int playerid, int text, int color)
{
	return PlayerTextDrawBackgroundColor(playerid, text, color);
}

INLINE_API_CALL bool Api_PlayerTextDrawFont(int playerid, int text, int font)
{
	return PlayerTextDrawFont(playerid, text, font);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetProportional(int playerid, int text, bool set)
{
	return PlayerTextDrawSetProportional(playerid, text, set);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetSelectable(int playerid, int text, bool set)
{
	return PlayerTextDrawSetSelectable(playerid, text, set);
}

INLINE_API_CALL bool Api_PlayerTextDrawShow(int playerid, int text)
{
	return PlayerTextDrawShow(playerid, text);
}

INLINE_API_CALL bool Api_PlayerTextDrawHide(int playerid, int text)
{
	return PlayerTextDrawHide(playerid, text);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetString(int playerid, int text, const char *string)
{
	return PlayerTextDrawSetString(playerid, text, string);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetPreviewModel(int playerid, int text, int modelindex)
{
	return PlayerTextDrawSetPreviewModel(playerid, text, modelindex);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetPreviewRot(int playerid, int text, float fRotX, float fRotY, float fRotZ, float fZoom)
{
	return PlayerTextDrawSetPreviewRot(playerid, text, fRotX, fRotY, fRotZ, fZoom);
}

INLINE_API_CALL bool Api_PlayerTextDrawSetPreviewVehCol(int playerid, int text, int color1, int color2)
{
	return PlayerTextDrawSetPreviewVehCol(playerid, text, color1, color2);
}

INLINE_API_CALL bool Api_SetPVarInt(int playerid, const char *varname, int value)
{
	return SetPVarInt(playerid, varname, value);
}

INLINE_API_CALL int Api_GetPVarInt(int playerid, const char *varname)
{
	return GetPVarInt(playerid, varname);
}

INLINE_API_CALL bool Api_SetPVarString(int playerid, const char *varname, const char *value)
{
	return SetPVarString(playerid, varname, value);
}

INLINE_API_CALL bool Api_GetPVarString(int playerid, const char *varname, char *value, int size)
{
	return GetPVarString(playerid, varname, value, size);
}

INLINE_API_CALL bool Api_SetPVarFloat(int playerid, const char *varname, float value)
{
	return SetPVarFloat(playerid, varname, value);
}

INLINE_API_CALL float Api_GetPVarFloat(int playerid, const char *varname)
{
	return GetPVarFloat(playerid, varname);
}

INLINE_API_CALL bool Api_DeletePVar(int playerid, const char *varname)
{
	return DeletePVar(playerid, varname);
}

INLINE_API_CALL int Api_GetPVarsUpperIndex(int playerid)
{
	return GetPVarsUpperIndex(playerid);
}

INLINE_API_CALL bool Api_GetPVarNameAtIndex(int playerid, int index, char *varname, int size)
{
	return GetPVarNameAtIndex(playerid, index, varname, size);
}

INLINE_API_CALL int Api_GetPVarType(int playerid, const char *varname)
{
	return GetPVarType(playerid, varname);
}

INLINE_API_CALL bool Api_SetPlayerChatBubble(int playerid, const char *text, int color, float drawdistance, int expiretime)
{
	return SetPlayerChatBubble(playerid, text, color, drawdistance, expiretime);
}

INLINE_API_CALL bool Api_PutPlayerInVehicle(int playerid, int vehicleid, int seatid)
{
	return PutPlayerInVehicle(playerid, vehicleid, seatid);
}

INLINE_API_CALL int Api_GetPlayerVehicleID(int playerid)
{
	return GetPlayerVehicleID(playerid);
}

INLINE_API_CALL int Api_GetPlayerVehicleSeat(int playerid)
{
	return GetPlayerVehicleSeat(playerid);
}

INLINE_API_CALL bool Api_RemovePlayerFromVehicle(int playerid)
{
	return RemovePlayerFromVehicle(playerid);
}

INLINE_API_CALL bool Api_TogglePlayerControllable(int playerid, bool toggle)
{
	return TogglePlayerControllable(playerid, toggle);
}

INLINE_API_CALL bool Api_PlayerPlaySound(int playerid, int soundid, float x, float y, float z)
{
	return PlayerPlaySound(playerid, soundid, x, y, z);
}

INLINE_API_CALL bool Api_ApplyAnimation(int playerid, const char *animlib, const char *animname, float fDelta, bool loop, bool lockx, bool locky, bool freeze, int time, bool forcesync)
{
	return ApplyAnimation(playerid, animlib, animname, fDelta, loop, lockx, locky, freeze, time, forcesync);
}

INLINE_API_CALL bool Api_ClearAnimations(int playerid, bool forcesync)
{
	return ClearAnimations(playerid, forcesync);
}

INLINE_API_CALL int Api_GetPlayerAnimationIndex(int playerid)
{
	return GetPlayerAnimationIndex(playerid);
}

INLINE_API_CALL bool Api_GetAnimationName(int index, char *animlib, int animlib_size, char *animname, int animname_size)
{
	return GetAnimationName(index, animlib, animlib_size, animname, animname_size);
}

INLINE_API_CALL int Api_GetPlayerSpecialAction(int playerid)
{
	return GetPlayerSpecialAction(playerid);
}

INLINE_API_CALL bool Api_SetPlayerSpecialAction(int playerid, int actionid)
{
	return SetPlayerSpecialAction(playerid, actionid);
}

INLINE_API_CALL bool Api_SetPlayerCheckpoint(int playerid, float x, float y, float z, float size)
{
	return SetPlayerCheckpoint(playerid, x, y, z, size);
}

INLINE_API_CALL bool Api_DisablePlayerCheckpoint(int playerid)
{
	return DisablePlayerCheckpoint(playerid);
}

INLINE_API_CALL bool Api_SetPlayerRaceCheckpoint(int playerid, int type, float x, float y, float z, float nextx, float nexty, float nextz, float size)
{
	return SetPlayerRaceCheckpoint(playerid, type, x, y, z, nextx, nexty, nextz, size);
}

INLINE_API_CALL bool Api_DisablePlayerRaceCheckpoint(int playerid)
{
	return DisablePlayerRaceCheckpoint(playerid);
}

INLINE_API_CALL bool Api_SetPlayerWorldBounds(int playerid, float x_max, float x_min, float y_max, float y_min)
{
	return SetPlayerWorldBounds(playerid, x_max, x_min, y_max, y_min);
}

INLINE_API_CALL bool Api_SetPlayerMarkerForPlayer(int playerid, int showplayerid, int color)
{
	return SetPlayerMarkerForPlayer(playerid, showplayerid, color);
}

INLINE_API_CALL bool Api_ShowPlayerNameTagForPlayer(int playerid, int showplayerid, bool show)
{
	return ShowPlayerNameTagForPlayer(playerid, showplayerid, show);
}

INLINE_API_CALL bool Api_SetPlayerMapIcon(int playerid, int iconid, float x, float y, float z, int markertype, int color, int style)
{
	return SetPlayerMapIcon(playerid, iconid, x, y, z, markertype, color, style);
}

INLINE_API_CALL bool Api_RemovePlayerMapIcon(int playerid, int iconid)
{
	return RemovePlayerMapIcon(playerid, iconid);
}

INLINE_API_CALL bool Api_AllowPlayerTeleport(int playerid, bool allow)
{
	return AllowPlayerTeleport(playerid, allow);
}

INLINE_API_CALL bool Api_SetPlayerCameraPos(int playerid, float x, float y, float z)
{
	return SetPlayerCameraPos(playerid, x, y, z);
}

INLINE_API_CALL bool Api_SetPlayerCameraLookAt(int playerid, float x, float y, float z, int cut)
{
	return SetPlayerCameraLookAt(playerid, x, y, z, cut);
}

INLINE_API_CALL bool Api_SetCameraBehindPlayer(int playerid)
{
	return SetCameraBehindPlayer(playerid);
}

INLINE_API_CALL bool Api_GetPlayerCameraPos(int playerid, float *x, float *y, float *z)
{
	return GetPlayerCameraPos(playerid, x, y, z);
}

INLINE_API_CALL bool Api_GetPlayerCameraFrontVector(int playerid, float *x, float *y, float *z)
{
	return GetPlayerCameraFrontVector(playerid, x, y, z);
}

INLINE_API_CALL int Api_GetPlayerCameraMode(int playerid)
{
	return GetPlayerCameraMode(playerid);
}

INLINE_API_CALL float Api_GetPlayerCameraAspectRatio(int playerid)
{
	return GetPlayerCameraAspectRatio(playerid);
}

INLINE_API_CALL float Api_GetPlayerCameraZoom(int playerid)
{
	return GetPlayerCameraZoom(playerid);
}

INLINE_API_CALL bool Api_AttachCameraToObject(int playerid, int objectid)
{
	return AttachCameraToObject(playerid, objectid);
}

INLINE_API_CALL bool Api_AttachCameraToPlayerObject(int playerid, int playerobjectid)
{
	return AttachCameraToPlayerObject(playerid, playerobjectid);
}

INLINE_API_CALL bool Api_InterpolateCameraPos(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)
{
	return InterpolateCameraPos(playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut);
}

INLINE_API_CALL bool Api_InterpolateCameraLookAt(int playerid, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)
{
	return InterpolateCameraLookAt(playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut);
}

INLINE_API_CALL bool Api_IsPlayerConnected(int playerid)
{
	return IsPlayerConnected(playerid);
}

INLINE_API_CALL bool Api_IsPlayerInVehicle(int playerid, int vehicleid)
{
	return IsPlayerInVehicle(playerid, vehicleid);
}

INLINE_API_CALL bool Api_IsPlayerInAnyVehicle(int playerid)
{
	return IsPlayerInAnyVehicle(playerid);
}

INLINE_API_CALL bool Api_IsPlayerInCheckpoint(int playerid)
{
	return IsPlayerInCheckpoint(playerid);
}

INLINE_API_CALL bool Api_IsPlayerInRaceCheckpoint(int playerid)
{
	return IsPlayerInRaceCheckpoint(playerid);
}

INLINE_API_CALL bool Api_SetPlayerVirtualWorld(int playerid, int worldid)
{
	return SetPlayerVirtualWorld(playerid, worldid);
}

INLINE_API_CALL int Api_GetPlayerVirtualWorld(int playerid)
{
	return GetPlayerVirtualWorld(playerid);
}

INLINE_API_CALL bool Api_EnableStuntBonusForPlayer(int playerid, bool enable)
{
	return EnableStuntBonusForPlayer(playerid, enable);
}

INLINE_API_CALL bool Api_EnableStuntBonusForAll(bool enable)
{
	return EnableStuntBonusForAll(enable);
}

INLINE_API_CALL bool Api_TogglePlayerSpectating(int playerid, bool toggle)
{
	return TogglePlayerSpectating(playerid, toggle);
}

INLINE_API_CALL bool Api_PlayerSpectatePlayer(int playerid, int targetplayerid, int mode)
{
	return PlayerSpectatePlayer(playerid, targetplayerid, mode);
}

INLINE_API_CALL bool Api_PlayerSpectateVehicle(int playerid, int targetvehicleid, int mode)
{
	return PlayerSpectateVehicle(playerid, targetvehicleid, mode);
}

INLINE_API_CALL bool Api_StartRecordingPlayerData(int playerid, int recordtype, const char *recordname)
{
	return StartRecordingPlayerData(playerid, recordtype, recordname);
}

INLINE_API_CALL bool Api_StopRecordingPlayerData(int playerid)
{
	return StopRecordingPlayerData(playerid);
}

INLINE_API_CALL bool Api_CreateExplosionForPlayer(int playerid, float X, float Y, float Z, int type, float Radius)
{
	return CreateExplosionForPlayer(playerid, X, Y, Z, type, Radius);
}
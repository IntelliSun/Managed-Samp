#include "stdafx.h"
#include "SampApi.h"

#include <sampgdk/a_samp.h>

INLINE_API_CALL bool Api_SendClientMessage(int playerid, int color, const char *message)
{
	return SendClientMessage(playerid, color, message);
}

INLINE_API_CALL bool Api_SendClientMessageToAll(int color, const char *message)
{
	return SendClientMessageToAll(color, message);
}

INLINE_API_CALL bool Api_SendPlayerMessageToPlayer(int playerid, int senderid, const char *message)
{
	return SendPlayerMessageToPlayer(playerid, senderid, message);
}

INLINE_API_CALL bool Api_SendPlayerMessageToAll(int senderid, const char *message)
{
	return SendPlayerMessageToAll(senderid, message);
}

INLINE_API_CALL bool Api_SendDeathMessage(int killer, int killee, int weapon)
{
	return SendDeathMessage(killer, killee, weapon);
}

INLINE_API_CALL bool Api_SendDeathMessageToPlayer(int playerid, int killer, int killee, int weapon)
{
	return SendDeathMessageToPlayer(playerid, killer, killee, weapon);
}

INLINE_API_CALL bool Api_GameTextForAll(const char *text, int time, int style)
{
	return GameTextForAll(text, time, style);
}

INLINE_API_CALL bool Api_GameTextForPlayer(int playerid, const char *text, int time, int style)
{
	return GameTextForPlayer(playerid, text, time, style);
}

INLINE_API_CALL int Api_GetTickCount()
{
	return GetTickCount();
}

INLINE_API_CALL int Api_GetMaxPlayers()
{
	return GetMaxPlayers();
}

INLINE_API_CALL float Api_VectorSize(float x, float y, float z)
{
	return VectorSize(x, y, z);
}

INLINE_API_CALL bool Api_SetGameModeText(const char *text)
{
	return SetGameModeText(text);
}

INLINE_API_CALL bool Api_SetTeamCount(int count)
{
	return SetTeamCount(count);
}

INLINE_API_CALL int Api_AddPlayerClass(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return AddPlayerClass(modelid, spawn_x, spawn_y, spawn_z, z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}

INLINE_API_CALL int Api_AddPlayerClassEx(int teamid, int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)
{
	return AddPlayerClassEx(teamid, modelid, spawn_x, spawn_y, spawn_z, z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
}

INLINE_API_CALL int Api_AddStaticVehicle(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2)
{
	return AddStaticVehicle(modelid, spawn_x, spawn_y, spawn_z, z_angle, color1, color2);
}

INLINE_API_CALL int Api_AddStaticVehicleEx(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2, int respawn_delay)
{
	return AddStaticVehicleEx(modelid, spawn_x, spawn_y, spawn_z, z_angle, color1, color2, respawn_delay);
}

INLINE_API_CALL int Api_AddStaticPickup(int model, int type, float x, float y, float z, int virtualworld)
{
	return AddStaticPickup(model, type, x, y, z, virtualworld);
}

INLINE_API_CALL int Api_CreatePickup(int model, int type, float x, float y, float z, int virtualworld)
{
	return CreatePickup(model, type, x, y, z, virtualworld);
}

INLINE_API_CALL bool Api_DestroyPickup(int pickup)
{
	return DestroyPickup(pickup);
}

INLINE_API_CALL bool Api_ShowNameTags(bool show)
{
	return ShowNameTags(show);
}

INLINE_API_CALL bool Api_ShowPlayerMarkers(int mode)
{
	return ShowPlayerMarkers(mode);
}

INLINE_API_CALL bool Api_GameModeExit()
{
	return GameModeExit();
}

INLINE_API_CALL bool Api_SetWorldTime(int hour)
{
	return SetWorldTime(hour);
}

INLINE_API_CALL bool Api_GetWeaponName(int weaponid, char *name, int size)
{
	return GetWeaponName(weaponid, name, size);
}

INLINE_API_CALL bool Api_EnableTirePopping(bool enable)
{
	return EnableTirePopping(enable);
}

INLINE_API_CALL bool Api_EnableVehicleFriendlyFire()
{
	return EnableVehicleFriendlyFire();
}

INLINE_API_CALL bool Api_AllowInteriorWeapons(bool allow)
{
	return AllowInteriorWeapons(allow);
}

INLINE_API_CALL bool Api_SetWeather(int weatherid)
{
	return SetWeather(weatherid);
}

INLINE_API_CALL bool Api_SetGravity(float gravity)
{
	return SetGravity(gravity);
}

INLINE_API_CALL bool Api_AllowAdminTeleport(bool allow)
{
	return AllowAdminTeleport(allow);
}

INLINE_API_CALL bool Api_SetDeathDropAmount(int amount)
{
	return SetDeathDropAmount(amount);
}

INLINE_API_CALL bool Api_CreateExplosion(float x, float y, float z, int type, float radius)
{
	return CreateExplosion(x, y, z, type, radius);
}

INLINE_API_CALL bool Api_EnableZoneNames(bool enable)
{
	return EnableZoneNames(enable);
}

INLINE_API_CALL bool Api_UsePlayerPedAnims()
{
	return UsePlayerPedAnims();
}

INLINE_API_CALL bool Api_DisableInteriorEnterExits()
{
	return DisableInteriorEnterExits();
}

INLINE_API_CALL bool Api_SetNameTagDrawDistance(float distance)
{
	return SetNameTagDrawDistance(distance);
}

INLINE_API_CALL bool Api_DisableNameTagLOS()
{
	return DisableNameTagLOS();
}

INLINE_API_CALL bool Api_LimitGlobalChatRadius(float chat_radius)
{
	return LimitGlobalChatRadius(chat_radius);
}

INLINE_API_CALL bool Api_LimitPlayerMarkerRadius(float marker_radius)
{
	return LimitPlayerMarkerRadius(marker_radius);
}

INLINE_API_CALL bool Api_ConnectNPC(const char *name, const char *script)
{
	return ConnectNPC(name, script);
}

INLINE_API_CALL bool Api_IsPlayerNPC(int playerid)
{
	return IsPlayerNPC(playerid);
}

INLINE_API_CALL bool Api_IsPlayerAdmin(int playerid)
{
	return IsPlayerAdmin(playerid);
}

INLINE_API_CALL bool Api_Kick(int playerid)
{
	return Kick(playerid);
}

INLINE_API_CALL bool Api_Ban(int playerid)
{
	return Ban(playerid);
}

INLINE_API_CALL bool Api_BanEx(int playerid, const char *reason)
{
	return BanEx(playerid, reason);
}

INLINE_API_CALL bool Api_SendRconCommand(const char *command)
{
	return SendRconCommand(command);
}

INLINE_API_CALL bool Api_GetServerVarAsString(const char *varname, char *value, int size)
{
	return GetServerVarAsString(varname, value, size);
}

INLINE_API_CALL int Api_GetServerVarAsInt(const char *varname)
{
	return GetServerVarAsInt(varname);
}

INLINE_API_CALL bool Api_GetServerVarAsBool(const char *varname)
{
	return GetServerVarAsBool(varname);
}

INLINE_API_CALL bool Api_GetPlayerNetworkStats(int playerid, char *retstr, int size)
{
	return GetPlayerNetworkStats(playerid, retstr, size);
}

INLINE_API_CALL bool Api_GetNetworkStats(char *retstr, int size)
{
	return GetNetworkStats(retstr, size);
}

INLINE_API_CALL bool Api_GetPlayerVersion(int playerid, char *version, int len)
{
	return GetPlayerVersion(playerid, version, len);
}

INLINE_API_CALL bool Api_BlockIpAddress(const char *ip_address, int timems)
{
	return BlockIpAddress(ip_address, timems);
}

INLINE_API_CALL bool Api_UnBlockIpAddress(const char *ip_address)
{
	return UnBlockIpAddress(ip_address);
}

INLINE_API_CALL int Api_GetServerTickRate()
{
	return GetServerTickRate();
}

INLINE_API_CALL int Api_NetStats_GetConnectedTime(int playerid)
{
	return NetStats_GetConnectedTime(playerid);
}

INLINE_API_CALL int Api_NetStats_MessagesReceived(int playerid)
{
	return NetStats_MessagesReceived(playerid);
}

INLINE_API_CALL int Api_NetStats_BytesReceived(int playerid)
{
	return NetStats_BytesReceived(playerid);
}

INLINE_API_CALL int Api_NetStats_MessagesSent(int playerid)
{
	return NetStats_MessagesSent(playerid);
}

INLINE_API_CALL int Api_NetStats_BytesSent(int playerid)
{
	return NetStats_BytesSent(playerid);
}

INLINE_API_CALL int Api_NetStats_MessagesRecvPerSecond(int playerid)
{
	return NetStats_MessagesRecvPerSecond(playerid);
}

INLINE_API_CALL float Api_NetStats_PacketLossPercent(int playerid)
{
	return NetStats_PacketLossPercent(playerid);
}

INLINE_API_CALL int Api_NetStats_ConnectionStatus(int playerid)
{
	return NetStats_ConnectionStatus(playerid);
}

INLINE_API_CALL bool Api_NetStats_GetIpPort(int playerid, char *ip_port, int ip_port_len)
{
	return NetStats_GetIpPort(playerid, ip_port, ip_port_len);
}

INLINE_API_CALL int Api_CreateMenu(const char *title, int columns, float x, float y, float col1width, float col2width)
{
	return CreateMenu(title, columns, x, y, col1width, col2width);
}

INLINE_API_CALL bool Api_DestroyMenu(int menuid)
{
	return DestroyMenu(menuid);
}

INLINE_API_CALL int Api_AddMenuItem(int menuid, int column, const char *menutext)
{
	return AddMenuItem(menuid, column, menutext);
}

INLINE_API_CALL bool Api_SetMenuColumnHeader(int menuid, int column, const char *columnheader)
{
	return SetMenuColumnHeader(menuid, column, columnheader);
}

INLINE_API_CALL bool Api_ShowMenuForPlayer(int menuid, int playerid)
{
	return ShowMenuForPlayer(menuid, playerid);
}

INLINE_API_CALL bool Api_HideMenuForPlayer(int menuid, int playerid)
{
	return HideMenuForPlayer(menuid, playerid);
}

INLINE_API_CALL bool Api_IsValidMenu(int menuid)
{
	return IsValidMenu(menuid);
}

INLINE_API_CALL bool Api_DisableMenu(int menuid)
{
	return DisableMenu(menuid);
}

INLINE_API_CALL bool Api_DisableMenuRow(int menuid, int row)
{
	return DisableMenuRow(menuid, row);
}

INLINE_API_CALL int Api_GetPlayerMenu(int playerid)
{
	return GetPlayerMenu(playerid);
}

INLINE_API_CALL int Api_TextDrawCreate(float x, float y, const char *text)
{
	return TextDrawCreate(x, y, text);
}

INLINE_API_CALL bool Api_TextDrawDestroy(int text)
{
	return TextDrawDestroy(text);
}

INLINE_API_CALL bool Api_TextDrawLetterSize(int text, float x, float y)
{
	return TextDrawLetterSize(text, x, y);
}

INLINE_API_CALL bool Api_TextDrawTextSize(int text, float x, float y)
{
	return TextDrawTextSize(text, x, y);
}

INLINE_API_CALL bool Api_TextDrawAlignment(int text, int alignment)
{
	return TextDrawAlignment(text, alignment);
}

INLINE_API_CALL bool Api_TextDrawColor(int text, int color)
{
	return TextDrawColor(text, color);
}

INLINE_API_CALL bool Api_TextDrawUseBox(int text, bool use)
{
	return TextDrawUseBox(text, use);
}

INLINE_API_CALL bool Api_TextDrawBoxColor(int text, int color)
{
	return TextDrawBoxColor(text, color);
}

INLINE_API_CALL bool Api_TextDrawSetShadow(int text, int size)
{
	return TextDrawSetShadow(text, size);
}

INLINE_API_CALL bool Api_TextDrawSetOutline(int text, int size)
{
	return TextDrawSetOutline(text, size);
}

INLINE_API_CALL bool Api_TextDrawBackgroundColor(int text, int color)
{
	return TextDrawBackgroundColor(text, color);
}

INLINE_API_CALL bool Api_TextDrawFont(int text, int font)
{
	return TextDrawFont(text, font);
}

INLINE_API_CALL bool Api_TextDrawSetProportional(int text, bool set)
{
	return TextDrawSetProportional(text, set);
}

INLINE_API_CALL bool Api_TextDrawSetSelectable(int text, bool set)
{
	return TextDrawSetSelectable(text, set);
}

INLINE_API_CALL bool Api_TextDrawShowForPlayer(int playerid, int text)
{
	return TextDrawShowForPlayer(playerid, text);
}

INLINE_API_CALL bool Api_TextDrawHideForPlayer(int playerid, int text)
{
	return TextDrawHideForPlayer(playerid, text);
}

INLINE_API_CALL bool Api_TextDrawShowForAll(int text)
{
	return TextDrawShowForAll(text);
}

INLINE_API_CALL bool Api_TextDrawHideForAll(int text)
{
	return TextDrawHideForAll(text);
}

INLINE_API_CALL bool Api_TextDrawSetString(int text, const char *string)
{
	return TextDrawSetString(text, string);
}

INLINE_API_CALL bool Api_TextDrawSetPreviewModel(int text, int modelindex)
{
	return TextDrawSetPreviewModel(text, modelindex);
}

INLINE_API_CALL bool Api_TextDrawSetPreviewRot(int text, float fRotX, float fRotY, float fRotZ, float fZoom)
{
	return TextDrawSetPreviewRot(text, fRotX, fRotY, fRotZ, fZoom);
}

INLINE_API_CALL bool Api_TextDrawSetPreviewVehCol(int text, int color1, int color2)
{
	return TextDrawSetPreviewVehCol(text, color1, color2);
}

INLINE_API_CALL bool Api_SelectTextDraw(int playerid, int hovercolor)
{
	return SelectTextDraw(playerid, hovercolor);
}

INLINE_API_CALL bool Api_CancelSelectTextDraw(int playerid)
{
	return CancelSelectTextDraw(playerid);
}

INLINE_API_CALL int Api_GangZoneCreate(float minx, float miny, float maxx, float maxy)
{
	return GangZoneCreate(minx, miny, maxx, maxy);
}

INLINE_API_CALL bool Api_GangZoneDestroy(int zone)
{
	return GangZoneDestroy(zone);
}

INLINE_API_CALL bool Api_GangZoneShowForPlayer(int playerid, int zone, int color)
{
	return GangZoneShowForPlayer(playerid, zone, color);
}

INLINE_API_CALL bool Api_GangZoneShowForAll(int zone, int color)
{
	return GangZoneShowForAll(zone, color);
}

INLINE_API_CALL bool Api_GangZoneHideForPlayer(int playerid, int zone)
{
	return GangZoneHideForPlayer(playerid, zone);
}

INLINE_API_CALL bool Api_GangZoneHideForAll(int zone)
{
	return GangZoneHideForAll(zone);
}

INLINE_API_CALL bool Api_GangZoneFlashForPlayer(int playerid, int zone, int flashcolor)
{
	return GangZoneFlashForPlayer(playerid, zone, flashcolor);
}

INLINE_API_CALL bool Api_GangZoneFlashForAll(int zone, int flashcolor)
{
	return GangZoneFlashForAll(zone, flashcolor);
}

INLINE_API_CALL bool Api_GangZoneStopFlashForPlayer(int playerid, int zone)
{
	return GangZoneStopFlashForPlayer(playerid, zone);
}

INLINE_API_CALL bool Api_GangZoneStopFlashForAll(int zone)
{
	return GangZoneStopFlashForAll(zone);
}

INLINE_API_CALL int Api_Create3DTextLabel(const char *text, int color, float x, float y, float z, float DrawDistance, int virtualworld, bool testLOS)
{
	return Create3DTextLabel(text, color, x, y, z, DrawDistance, virtualworld, testLOS);
}

INLINE_API_CALL bool Api_Delete3DTextLabel(int id)
{
	return Delete3DTextLabel(id);
}

INLINE_API_CALL bool Api_Attach3DTextLabelToPlayer(int id, int playerid, float OffsetX, float OffsetY, float OffsetZ)
{
	return Attach3DTextLabelToPlayer(id, playerid, OffsetX, OffsetY, OffsetZ);
}

INLINE_API_CALL bool Api_Attach3DTextLabelToVehicle(int id, int vehicleid, float OffsetX, float OffsetY, float OffsetZ)
{
	return Attach3DTextLabelToVehicle(id, vehicleid, OffsetX, OffsetY, OffsetZ);
}

INLINE_API_CALL bool Api_Update3DTextLabelText(int id, int color, const char *text)
{
	return Update3DTextLabelText(id, color, text);
}

INLINE_API_CALL int Api_CreatePlayer3DTextLabel(int playerid, const char *text, int color, float x, float y, float z, float DrawDistance, int attachedplayer, int attachedvehicle, bool testLOS)
{
	return CreatePlayer3DTextLabel(playerid, text, color, x, y, z, DrawDistance, attachedplayer, attachedvehicle, testLOS);
}

INLINE_API_CALL bool Api_DeletePlayer3DTextLabel(int playerid, int id)
{
	return DeletePlayer3DTextLabel(playerid, id);
}

INLINE_API_CALL bool Api_UpdatePlayer3DTextLabelText(int playerid, int id, int color, const char *text)
{
	return UpdatePlayer3DTextLabelText(playerid, id, color, text);
}

INLINE_API_CALL bool Api_ShowPlayerDialog(int playerid, int dialogid, int style, const char *caption, const char *info, const char *button1, const char *button2)
{
	return ShowPlayerDialog(playerid, dialogid, style, caption, info, button1, button2);
}

INLINE_API_CALL int Api_SetTimer(int interval, bool repeat, TimerCallback callback, void *param)
{
	return SetTimer(interval, repeat, callback, param);
}

INLINE_API_CALL bool Api_KillTimer(int timerid)
{
	return KillTimer(timerid);
}

INLINE_API_CALL bool Api_gpci(int playerid, char *buffer, int size)
{
	return gpci(playerid, buffer, size);
}
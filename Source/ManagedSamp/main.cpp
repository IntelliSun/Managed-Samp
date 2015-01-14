#include <string>
#include <fstream>
#include <streambuf>

#include "stdafx.h"
#include "main.h"
#include "amx\amx.h"
#include "plugincommon.h"
#include "ClrManager.h"
#include "Preloader.h"

#include "ApiMain.h"
#include "PlayerApi.h"
#include "SampApi.h"

#include <sampgdk/core.h>
#include <sampgdk/sdk.h>

ClrManager* clr;

// Initialize amx functions delegate array
// Empty for now
AMX_NATIVE_INFO PluginNatives[] = { { 0, 0 } };

bool LoadClr()
{
	clr = new ClrManager();

	bool result = SUCCEEDED(clr->InitializeAndStart(L"v4.0.30319"));
	sampgdk::logprintf(result ?
		"   * The Common Language Runtime loaded successfully!" :
		"   * The Common Language Runtime was unable to load."
		);

	return result;
}

void UnloadClr()
{
	if (clr != NULL)
		clr->Unload();
}

void LaunchPreloader()
{
	Preloader* preloader = new Preloader(clr);
	bool result = preloader->Launch();
	sampgdk::logprintf(result ?
		"   * The Preloader loaded successfully!" :
		"   * The Preloader was unable to load."
		);
}

bool OnPluginLoaded()
{
	sampgdk::logprintf(" * ManagedSamp [native] is loading...");
	if (LoadClr())
		LaunchPreloader();

	sampgdk::logprintf(" * ManagedSamp [native] loaded successfully.");
	return true;
}

void OnPluginUnloaded()
{
	UnloadClr();
	sampgdk::logprintf(" * ManagedSamp [native] unloaded successfully.");
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerConnect(int playerid) {
	Api_SendClientMessage(playerid, 0xFFFFFFFF, "Welcome to the HelloWorld server!");
	return true;
}

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
	return sampgdk::Supports() | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData)
{
	return sampgdk::Load(ppData);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	sampgdk::Unload();
	OnPluginUnloaded();
}

void SAMPGDK_CALL PrintTickCountTimer(int timerid, void *params) {
	sampgdk::logprintf("Tick count: %d", Api_GetTickCount());
}

PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeInit() {
	OnPluginLoaded();
	Api_AddPlayerClass(0, 1958.3783f, 1343.1572f, 15.3746f, 269.1425f, 0, 0, 0, 0, 0, 0);
	Api_SetTimer(1000, true, PrintTickCountTimer, 0);
	return true;
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick() {
	sampgdk::ProcessTick();
}
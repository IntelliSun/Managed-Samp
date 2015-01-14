#include "stdafx.h"
#include "ApiMain.h"

#include <sampgdk/core.h>
#include <sampgdk/sdk.h>

SAMPGDK_EXTERN_C __declspec(dllexport) inline bool __cdecl LoadApi(void **ppData)
{
	return sampgdk_Load(ppData, 0);
}

API_CALL inline void UnloadApi()
{
	sampgdk::Unload();
}

API_CALL inline void Api_ProcessTick()
{
	sampgdk::ProcessTick();
}
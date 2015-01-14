#include "Api.h"

#include <sampgdk/core.h>

SAMPGDK_EXTERN_C __declspec(dllexport) inline bool __cdecl LoadApi(void **ppData);
API_CALL inline void UnloadApi();

API_CALL inline void Api_ProcessTick();
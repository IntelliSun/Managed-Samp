#pragma once
#ifdef __cplusplus
	#define EXTERN_C extern "C"
#else
	#define EXTERN_C 
#endif

#define API_CALL EXTERN_C __declspec(dllexport)
#define INLINE_API_CALL API_CALL inline
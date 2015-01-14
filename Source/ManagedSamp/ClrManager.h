#pragma once

#include "clr.h"

class ClrManager
{
private:
	int m_state;

	ICLRMetaHost *m_metaHost;
	ICLRRuntimeInfo *m_runtimeInfo;
	ICLRRuntimeHost *m_clrRuntimeHost;

	void clearResources(bool force);
public:
	ClrManager();
	~ClrManager();

	HRESULT InitializeAndStart(LPCWSTR clrVersion);
	HRESULT InitializeClrHost();
	HRESULT LoadRuntime(LPCWSTR clrVersion);
	HRESULT StartClr();
	void Unload();

	HRESULT Invoke(LPCWSTR assemblyPath, LPCWSTR typeName, LPCWSTR methodName, LPCWSTR parameters, DWORD* pRetVal);
};
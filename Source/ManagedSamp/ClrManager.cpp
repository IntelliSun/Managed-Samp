#include "ClrManager.h"


ClrManager::ClrManager()
{
	this->clearResources(true);
	this->m_state = 0x00;
}

ClrManager::~ClrManager()
{
	this->clearResources(false);
}

HRESULT ClrManager::InitializeAndStart(LPCWSTR clrVersion)
{
	if (m_state == 0x11)
		return E_FAIL;

	this->clearResources(false);

	HRESULT hr;
	if ((hr = this->InitializeClrHost()) != 0x0)
		return hr;

	if ((hr = this->LoadRuntime(clrVersion)) != 0x0)
		return hr;
	
	return this->StartClr();
}

HRESULT ClrManager::InitializeClrHost()
{
	if (m_state != 0x00)
		return E_FAIL;

	HRESULT hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_PPV_ARGS(&m_metaHost));
	if (!FAILED(hr))
		m_state = 0x01;

	return hr;
}

HRESULT ClrManager::LoadRuntime(LPCWSTR clrVersion)
{
	if (m_state != 0x01)
		return E_FAIL;

	HRESULT hr = m_metaHost->GetRuntime(clrVersion, IID_PPV_ARGS(&m_runtimeInfo));
	if (!FAILED(hr))
	{
		hr = m_runtimeInfo->GetInterface(CLSID_CLRRuntimeHost, IID_PPV_ARGS(&m_clrRuntimeHost));
		if (!FAILED(hr))
			m_state = 0x02;
	}

	return hr;
}

HRESULT ClrManager::StartClr()
{
	if (m_state != 0x02)
		return E_FAIL;

	HRESULT hr = m_clrRuntimeHost->Start();
	if (!FAILED(hr))
		m_state = 0x11;

	return hr;
}

void ClrManager::Unload()
{
	this->clearResources(false);
}

HRESULT ClrManager::Invoke(LPCWSTR assemblyPath, LPCWSTR typeName, LPCWSTR methodName, LPCWSTR parameters, DWORD* pRetVal)
{
	if (m_state != 0x11)
		return E_FAIL;

	return m_clrRuntimeHost->ExecuteInDefaultAppDomain(assemblyPath, typeName, methodName, parameters, pRetVal);
}

void ClrManager::clearResources(bool force)
{
	if (m_clrRuntimeHost != NULL && !force)
		m_clrRuntimeHost->Release();
	
	if (m_runtimeInfo != NULL && !force)
		m_runtimeInfo->Release();

	if (m_metaHost != NULL && !force)
		m_metaHost->Release();

	this->m_metaHost = NULL;
	this->m_runtimeInfo = NULL;
	this->m_clrRuntimeHost = NULL;
}
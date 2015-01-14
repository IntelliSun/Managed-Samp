#include "Preloader.h"
#if defined(DEBUG)
	#define PRELOADER_PATH L"K:\\Managed-Samp\\Source\\ManagedSamp.Preloader\\bin\\Debug\\Preloader.dll"
#else
	#define PRELOADER_PATH L".\\Preloader.dll"
#endif

Preloader::Preloader(ClrManager* clrManager)
{
	this->m_clrManager = clrManager;
}

Preloader::~Preloader()
{
	this->m_clrManager = NULL;
}

bool Preloader::Launch()
{
	if (m_clrManager == NULL)
		return false;

	DWORD returnValue;
	HRESULT hr = m_clrManager->Invoke(PRELOADER_PATH, L"ManagedSamp.Preloader.PreloaderCore", L"Load", NULL, &returnValue);

	return SUCCEEDED(hr) && returnValue;
}

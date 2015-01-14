#pragma once
#include "ClrManager.h"

class Preloader
{
private:
	ClrManager* m_clrManager;
public:
	Preloader(ClrManager* clrManager);
	~Preloader();

	bool Launch();
};
#pragma once
#include "pch.h"

class PedManager
{
public:
	PedManager(int pedId);
	void SetHealth(int health);
	int GetMaxHealth();

	// MARK: 
	static PedManager WithPlayerPed();
private:
	int pedId;
};


#pragma once
#include "pch.h"

class PedManager
{
public:
	PedManager(int pedId);
	void SetHealth(int health);
	// MARK: Getters
	int GetMaxHealth();
	Vector3 GetPosition();
	float GetHeading();
	Vehicle GetCurrentVehicle();

	// MARK: 
	static PedManager WithPlayerPed();
private:
	int pedId;
};


#pragma once
#include "pch.h"

enum class VehicleWeaponType {
	Cannons
};

class VehicleWeapons
{
public:
	VehicleWeapons();

	void ShootCannonShells(Player player, Vehicle vehicle, Vector3 dimMin, Vector3 dimMax);

	void PlayerDidPressShootButton();

	void RespondToControls();

	void Tick();

	VehicleWeaponType weaponType;
	
private:
	DWORD shootDelayTimer;
};


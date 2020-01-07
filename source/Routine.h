#pragma once
#include "pch.h"
#include "VehicleWeapons.h"

namespace Routine {
	// MARK: Start routine
	void StartDrawBottomMessage(string message, int time = 1000);
	void StartBoatFlyMode();
	void SetCustomBulletType(int type);

	void SetVehicleWeaponType(VehicleWeaponType weaponType);

	// MARK: Run routines
	void RunAll();
};
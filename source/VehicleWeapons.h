/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

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


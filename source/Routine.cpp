/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "Routine.h"
#include "Player.h"
#include "Numbers.h"

#pragma region Numbers

void RunLoopedNumbers()
{
	Player player;

	if (Numbers::playerNoiseMultiplier != 1.0f) {
		player.SetNoiseMultiplier(Numbers::playerNoiseMultiplier);
		player.SetSneakingNoiseMultiplier(Numbers::playerNoiseMultiplier);
	}

	if (Numbers::enginePowerMultiplier && player.ped.IsInVehicle() && player.ped.CurrentVehicle().IsBoat())
		player.ped.CurrentVehicle().SetEnginePowerMultiplier(Numbers::enginePowerMultiplier);

	if (Numbers::timeScale != 1.0f)
		GAMEPLAY::SET_TIME_SCALE(Numbers::timeScale);

	if (Numbers::weaponDamageLevel != 1.0f)
		player.SetWeaponDamageModifier(Numbers::weaponDamageLevel);

	if (Numbers::meleeDamageLevel != 1.0f)
		player.SetMeleeDamageModifier(Numbers::meleeDamageLevel);

	if (Numbers::windSpeed != 1.0f)
		GAMEPLAY::SET_WIND_SPEED(Numbers::windSpeed);

	if (Numbers::timeCycleStrength != 1.0f)
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Numbers::timeCycleStrength);
}

#pragma endregion

void Routine::RunAll()
{
	RunLoopedNumbers();
}
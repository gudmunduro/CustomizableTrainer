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

namespace Numbers {

#pragma region Numbers (Variables)

	// Float
	inline float
		playerNoiseMultiplier = 1.0f,
		playerScale = 1.0f,
		horseScale = 1.0f,
		enginePowerMultiplier = 1.0f,
		weaponDamageLevel = 1.0f,
		windSpeed = 0.0f,
		meleeDamageLevel = 1.0f,
		timeScale = 1.0f,
		timeCycleStrength = 1.0f;

#pragma endregion

#pragma region Numbers (Getters)

	string GetCurrentHour();
	string GetCurrentMinute();

#pragma endregion

#pragma region Adjusters

	void AdjustPlayerNoiseMultiplier(bool direction);
	void AdjustPlayerScale(bool direction);
	void AdjustHorseScale(bool direction);
	void AdjustEnginePowerMultiplier(bool direction);
	void AdjustWeaponDamageLavel(bool direction);
	void AdjustMeleeDamageLavel(bool direction);
	void AdjustCurrentHour(bool direction);
	void AdjustCurrentMinute(bool direction);
	void AdjustTimeScale(bool direction);
	void AdjustTimeCycleStrength(bool direction);
	void AdjustWindSpeed(bool direction);

#pragma endregion

}
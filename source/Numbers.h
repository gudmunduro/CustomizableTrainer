#pragma once
#include "pch.h"

namespace Numbers {
	// MARK: Numbers (Variables)
	// Float

	inline float
		playerNoiseMultiplier = 1.0f,
		playerScale = 1.0f,
		horseScale = 1.0f,
		weaponDamageLevel = 1.0f,
		windSpeed = 0.0f,
		meleeDamageLevel = 1.0f,
		timeScale = 1.0f,
		timeCycleStrength = 1.0f;

	// MARK: Numbers (Getters)

	string GetCurrentHour();
	string GetCurrentMinute();

	// MARK: Adjusters

	void AdjustPlayerNoiseMultiplier(bool direction);
	void AdjustPlayerScale(bool direction);
	void AdjustHorseScale(bool direction);
	void AdjustWeaponDamageLavel(bool direction);
	void AdjustMeleeDamageLavel(bool direction);
	void AdjustCurrentHour(bool direction);
	void AdjustCurrentMinute(bool direction);
	void AdjustTimeScale(bool direction);
	void AdjustTimeCycleStrength(bool direction);
	void AdjustWindSpeed(bool direction);
}
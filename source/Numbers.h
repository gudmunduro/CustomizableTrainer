#pragma once
#include "pch.h"

namespace Numbers {
	// MARK: Numbers (Variables)
	// Float

	inline float
		playerNoiseMultiplier = 1.0f,
		weaponDamageLevel = 1.0f,
		windSpeed = 0.0f,
		meleeDamageLevel = 1.0f,
		timeScale = 1.0f;

	// MARK: Numbers (Getters)

	string GetCurrentHour();
	string GetCurrentMinute();

	// MARK: Adjusters

	void AdjustPlayerNoiseMultiplier(bool direction);
	void AdjustWeaponDamageLavel(bool direction);
	void AdjustMeleeDamageLavel(bool direction);
	void AdjustCurrentHour(bool direction);
	void AdjustCurrentMinute(bool direction);
	void AdjustTimeScale(bool direction);
	void AdjustWindSpeed(bool direction);
}
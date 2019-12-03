#pragma once
#include "pch.h"

namespace Numbers {
	// MARK: Numbers (Variables)
	// Float

	inline float
		weaponDamageLevel = 1.0f,
		timeScale = 1.0f;

	// MARK: Numbers (Getters)

	string GetCurrentHour();
	string GetCurrentMinute();

	// MARK: Adjusters

	void AdjustWeaponDamageLavel(bool direction);
	void AdjustCurrentHour(bool direction);
	void AdjustCurrentMinute(bool direction);
	void AdjustTimeScale(bool direction);
}
#pragma once
#include "pch.h"

namespace Texts {

#pragma region Value arrays

	inline std::vector<string>
		customBulletTypes = { "Explosion", "Large explosion", "Water fountain", "Gas", "Lightning", "Fire", "Large fire", "Teleport", "Delete entity", "Steam", "Moonshine" },
		snowCoverageType = { "No snow", "Minor", "Full" };

#pragma endregion

#pragma region On value change events

	void OnBulletTypeValueChange(int from, int to);
	void OnSnowCoverageTypeChange(int from, int to);

#pragma endregion

}
#pragma once
#include "pch.h"

namespace Texts {
	// MARK: Value arrays

	inline std::vector<string>
		customBulletTypes = { "Explosion", "Large explosion", "Water fountain", "Gas", "Lightning", "Fire", "Large fire", "Forest fire", "Teleport", "Delete entity", "Water hydrant", "Moonshine" };

	// MARK: On value change events

	void OnBulletTypeValueChange(int from, int to);
}
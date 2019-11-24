#pragma once
#include "pch.h"

namespace Toggles {
	// MARK: Toggles
	inline std::shared_ptr<bool>
		playerInvincible = std::make_shared<bool>(false),
		playerVisible = std::make_shared<bool>(false),
		playerSuperRun = std::make_shared<bool>(false),
		playerSuperJump = std::make_shared<bool>(false),
		horseEngineTest = std::make_shared<bool>(false),
		spawnInsideVehicle = std::make_shared<bool>(false),
		weaponInfiniteAmmo = std::make_shared<bool>(false);

	// MARK: Toggle actions
	void OnPlayerInvincibleToggle(bool value);
	void OnPlayerVisibleToggle(bool value);
}


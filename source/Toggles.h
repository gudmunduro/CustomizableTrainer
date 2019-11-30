#pragma once
#include "pch.h"

namespace Toggles {
	// MARK: Toggles
	inline std::shared_ptr<bool>
		playerInvincible = std::make_shared<bool>(false),
		playerVisible = std::make_shared<bool>(true),
		playerSuperRun = std::make_shared<bool>(false),
		playerSuperJump = std::make_shared<bool>(false),
		playerUnlStamina = std::make_shared<bool>(false),
		playerUnlSpecialAbility = std::make_shared<bool>(false),
		vehicleBindBoost = std::make_shared<bool>(false),
		horseInvincible = std::make_shared<bool>(false),
		horseVisible = std::make_shared<bool>(true),
		horseSuperRun = std::make_shared<bool>(false),
		horseSuperJump = std::make_shared<bool>(false),
		horseUnlimitedStamina = std::make_shared<bool>(false),
		horseEngineTest = std::make_shared<bool>(false),
		spawnInsideVehicle = std::make_shared<bool>(false),
		weaponInfiniteAmmo = std::make_shared<bool>(false);

	// MARK: Toggle actions
	void OnPlayerInvincibleToggle(bool value);
	void OnPlayerVisibleToggle(bool value);
	void OnHorseInvincibleToggle(bool value);
	void OnHorseVisibleToggle(bool value);
}


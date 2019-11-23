#pragma once
#include "pch.h"

namespace Toggles {
	// MARK: Toggles
	inline std::shared_ptr<bool>
		playerInvincible = std::make_shared<bool>(false),
		playerSuperRun = std::make_shared<bool>(false),
		weaponInfiniteAmmo = std::make_shared<bool>(false);

	// MARK: Toggle actions
	void OnPlayerInvincibleToggle(bool value);
}


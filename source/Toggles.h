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
		playerNeverWanted = std::make_shared<bool>(false),
		playerNoRagdoll = std::make_shared<bool>(false),
		playerEveryoneIgnore = std::make_shared<bool>(false),
		forceFirstPersonOnFoot = std::make_shared<bool>(false),
		spawnedPedInvincible = std::make_shared<bool>(false),
		spawnedPedBodyguard = std::make_shared<bool>(false),
		allSpawnedPedsInvincible = std::make_shared<bool>(false),
		allSpawnedPedsBodyguard = std::make_shared<bool>(false),
		horseInvincible = std::make_shared<bool>(false),
		horseVisible = std::make_shared<bool>(true),
		horseSuperRun = std::make_shared<bool>(false),
		horseSuperJump = std::make_shared<bool>(false),
		horseUnlimitedStamina = std::make_shared<bool>(false),
		horseFlyMode = std::make_shared<bool>(false),
		horseEngineTest = std::make_shared<bool>(false),
		horseNoRagdoll = std::make_shared<bool>(false),
		forceFirstPersonOnHorse = std::make_shared<bool>(false),
		spawnInsideVehicle = std::make_shared<bool>(false),
		vehicleBindBoost = std::make_shared<bool>(false),
		boatFlyMode = std::make_shared<bool>(false),
		forceFirstPersonInVehicle = std::make_shared<bool>(false),
		pauseClock = std::make_shared<bool>(false),
		systemClockSync = std::make_shared<bool>(false),
		freezeWeather = std::make_shared<bool>(false),
		weaponExtraDamage = std::make_shared<bool>(false),
		weaponExplosiveAmmo = std::make_shared<bool>(false),
		playerExplosiveMelee = std::make_shared<bool>(false),
		weaponInfiniteAmmo = std::make_shared<bool>(false),
		weaponInfiniteAmmoInClip = std::make_shared<bool>(false),
		hideHud = std::make_shared<bool>(false);

	// MARK: Toggle actions
	void OnPlayerInvincibleToggle(bool value);
	void OnPlayerVisibleToggle(bool value);
	void OnPlayerNeverWantedToggle(bool value);
	void OnPlayerNoRagdollToggle(bool value);
	void OnPlayerEveryoneIgnoreToggle(bool value);
	void OnHorseInvincibleToggle(bool value);
	void OnHorseVisibleToggle(bool value);
	void OnHorseNoRagdollToggle(bool value);
	void OnHorseSuperJumpToggle(bool value);
	void OnSpawnedPedInvincibleToggle(bool value);
	void OnSpanwedPedBodyguardToggle(bool value);
	void OnAllSpawnedPedsInvincibleToggle(bool value);
	void OnAllSpanwedPedsBodyguardToggle(bool value);
	void OnBoatFlyModeToggle(bool value);
	void OnPauseClockToggle(bool value);
	void OnFreezeWeatherToggle(bool value);
	void OnWeaponExtraDamageToggle(bool value);
}


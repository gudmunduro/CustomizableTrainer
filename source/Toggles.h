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

namespace Toggles {

#pragma region Toggles

	inline bool
		playerInvincible = false,
		playerVisible = true,
		playerSuperRun = false,
		playerSuperJump = false,
		playerUnlStamina = false,
		playerUnlSpecialAbility = false,
		playerNeverWanted = false,
		playerNoRagdoll = false,
		playerEveryoneIgnore = false,
		forceFirstPersonOnFoot = false,
		spawnedPedInvincible = false,
		spawnedPedBodyguard = false,
		allSpawnedPedsInvincible = false,
		allSpawnedPedsBodyguard = false,
		horseInvincible = false,
		horseVisible = true,
		horseSuperRun = false,
		horseSuperJump = false,
		horseUnlimitedStamina = false,
		horseEngineTest = false,
		horseNoRagdoll = false,
		forceFirstPersonOnHorse = false,
		spawnInsideVehicle = false,
		vehicleInvincible = false,
		vehicleVisible = true,
		vehicleCannons = false,
		vehicleBindBoost = false,
		boatFlyMode = false,
		forceFirstPersonInVehicle = false,
		pauseClock = false,
		systemClockSync = false,
		freezeWeather = false,
		weaponExtraDamage = false,
		weaponCustomBullets = false,
		playerExplosiveMelee = false,
		weaponInfiniteAmmo = false,
		weaponInfiniteAmmoInClip = false,
		disableInvisibleSniper = false,
		hideHud = false;

#pragma endregion

#pragma region Toggle actions

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
	void OnVehicleInvincibleToggle(bool value);
	void OnVehicleVisibleToggle(bool value);
	void OnBoatFlyModeToggle(bool value);
	void OnPauseClockToggle(bool value);
	void OnFreezeWeatherToggle(bool value);
	void OnWeaponExtraDamageToggle(bool value);
	void OnDisableInvisibleSniperToggle(bool value);

#pragma endregion

#pragma region Toggle loops

	void PlayerInvincibleLoop();
	void PlayerSuperRunLoop();
	void PlayerUnlStaminaLoop();
	void PlayerUnlSpecialAbilityLoop();
	void PlayerSuperJumpLoop();
	void PlayerNeverWantedLoop();
	void PlayerNoRagdollLoop();
	void PlayerExplosiveMeleeLoop();
	void PlayerEveryoneIgnoreLoop();
	void ForceFirstPersonOnFootLoop();
	void HorseInvincibleLoop();
	void HorseSuperRunLoop();
	void HorseNoRagdollLoop();
	void HorseSuperJumpLoop();
	void HorseUnlimitedStaminaLoop();
	void ForceFirstPersonOnHorseLoop();
	void VehicleInvincibleLoop();
	void VehicleVisibleLoop();
	void VehicleCannonsLoop();
	void VehicleBindBoostLoop();
	void ForceFirstPersonInVehicleLoop();
	void BoatFlyModeLoop();
	void WeaponInfiniteAmmoLoop();
	void WeaponInfiniteAmmoInClipLoop();
	void WeaponExtraDamageLoop();
	void WeaponCustomBulletsLoop();
	void SystemClockSyncLoop();
	void FreezeWeatherLoop();
	void HideHudLoop();
	void HorseEngineTestLoop();
	void DisableInvisibleSniperLoop();

#pragma endregion

}


#include "pch.h"
#include "ToggleController.h"
#include "Toggles.h"
#include "Routine.h"

// MARK: Manage

void ToggleController::RegisterToggle(string key, bool *toggle)
{
	if (toggles.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggles[key] = toggle;
}

void ToggleController::RegisterToggleAction(string key, std::function<void(bool value)> toggleAction)
{
	if (toggleActions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggleActions[key] = toggleAction;
}

void ToggleController::RegisterToggles()
{
	// Toggles
	RegisterToggle("toggle_playerInvincible", &Toggles::playerInvincible);
	RegisterToggle("toggle_playerVisible", &Toggles::playerVisible);
	RegisterToggle("toggle_playerSuperRun", &Toggles::playerSuperRun);
	RegisterToggle("toggle_playerSuperJump", &Toggles::playerSuperJump);
	RegisterToggle("toggle_playerUnlStamina", &Toggles::playerUnlStamina);
	RegisterToggle("toggle_playerNeverWanted", &Toggles::playerNeverWanted);
	RegisterToggle("toggle_playerUnlSpecialAbility", &Toggles::playerUnlSpecialAbility);
	RegisterToggle("toggle_playerNoRagdoll", &Toggles::playerNoRagdoll);
	RegisterToggle("toggle_playerEveryoneIgnore", &Toggles::playerEveryoneIgnore);
	RegisterToggle("toggle_forceFirstPersonOnFoot", &Toggles::forceFirstPersonOnFoot);
	RegisterToggle("toggle_spawnedPedInvincible", &Toggles::spawnedPedInvincible);
	RegisterToggle("toggle_spawnedPedBodyguard", &Toggles::spawnedPedBodyguard);
	RegisterToggle("toggle_allSpawnedPedsInvincible", &Toggles::allSpawnedPedsInvincible);
	RegisterToggle("toggle_allSpawnedPedsBodyguard", &Toggles::allSpawnedPedsBodyguard);
	// RegisterToggle("toggle_playerExplosiveMelee", &Toggles::weaponExtraDamage);
	RegisterToggle("toggle_horseInvincible", &Toggles::horseInvincible);
	RegisterToggle("toggle_horseVisible", &Toggles::horseVisible);
	RegisterToggle("toggle_horseSuperRun", &Toggles::horseSuperRun);
	RegisterToggle("toggle_horseSuperJump", &Toggles::horseSuperJump);
	RegisterToggle("toggle_horseNoRagdoll", &Toggles::horseNoRagdoll);
	RegisterToggle("toggle_horseUnlimitedStamina", &Toggles::horseUnlimitedStamina);
	RegisterToggle("toggle_forceFirstPersonOnHorse", &Toggles::forceFirstPersonOnHorse);
	// RegisterToggle("toggle_horseFlyMode", &Toggles::horseFlyMode);
	RegisterToggle("toggle_vehicleInvincible", &Toggles::vehicleInvincible);
	RegisterToggle("toggle_vehicleVisible", &Toggles::vehicleVisible);
	RegisterToggle("toggle_vehicleCannons", &Toggles::vehicleCannons);
	RegisterToggle("toggle_vehicleBindBoost", &Toggles::vehicleBindBoost);
	RegisterToggle("toggle_boatFlyMode", &Toggles::boatFlyMode);
	RegisterToggle("toggle_forceFirstPersonInVehicle", &Toggles::forceFirstPersonInVehicle);
	RegisterToggle("toggle_systemClockSync", &Toggles::systemClockSync);
	RegisterToggle("toggle_pauseClock", &Toggles::pauseClock);
	RegisterToggle("toggle_freezeWeather", &Toggles::freezeWeather);
	RegisterToggle("toggle_spawnInsideVehicle", &Toggles::spawnInsideVehicle);
	// RegisterToggle("toggle_horseEngineTest", &Toggles::horseEngineTest);
	RegisterToggle("toggle_weaponInfiniteAmmo", &Toggles::weaponInfiniteAmmo);
	RegisterToggle("toggle_weaponInfiniteAmmoInClip", &Toggles::weaponInfiniteAmmoInClip);
	RegisterToggle("toggle_hideHud", &Toggles::hideHud);
	// RegisterToggle("toggle_disableInvisibleSniper", &Toggles::disableInvisibleSniper);
	RegisterToggle("toggle_weaponExplosiveAmmo", &Toggles::weaponExplosiveAmmo);
	RegisterToggle("toggle_weaponLightningGun", &Toggles::weaponLightningGun);
	RegisterToggle("toggle_weaponFireAmmo", &Toggles::weaponFireAmmo);
	RegisterToggle("toggle_weaponWaterHydrantGun", &Toggles::weaponWaterHydrantGun);

	// Toggle actions
	RegisterToggleAction("toggle_playerInvincible", Toggles::OnPlayerInvincibleToggle);
	RegisterToggleAction("toggle_playerVisible", Toggles::OnPlayerVisibleToggle);
	RegisterToggleAction("toggle_playerEveryoneIgnore", Toggles::OnPlayerEveryoneIgnoreToggle);
	RegisterToggleAction("toggle_horseInvincible", Toggles::OnHorseInvincibleToggle);
	RegisterToggleAction("toggle_horseSuperJump", Toggles::OnHorseSuperJumpToggle);
	RegisterToggleAction("toggle_horseNoRagdoll", Toggles::OnHorseNoRagdollToggle);
	RegisterToggleAction("toggle_spawnedPedInvincible", Toggles::OnSpawnedPedInvincibleToggle);
	RegisterToggleAction("toggle_spawnedPedBodyguard", Toggles::OnSpanwedPedBodyguardToggle);
	RegisterToggleAction("toggle_allSpawnedPedsInvincible", Toggles::OnAllSpawnedPedsInvincibleToggle);
	RegisterToggleAction("toggle_allSpawnedPedsBodyguard", Toggles::OnAllSpanwedPedsBodyguardToggle);
	RegisterToggleAction("toggle_playerNeverWanted", Toggles::OnPlayerNeverWantedToggle);
	RegisterToggleAction("toggle_vehicleInvincible", Toggles::OnVehicleInvincibleToggle);
	RegisterToggleAction("toggle_vehicleVisible", Toggles::OnVehicleVisibleToggle);
	RegisterToggleAction("toggle_horseVisible", Toggles::OnHorseVisibleToggle);
	RegisterToggleAction("toggle_boatFlyMode", Toggles::OnBoatFlyModeToggle);
	RegisterToggleAction("toggle_pauseClock", Toggles::OnPauseClockToggle);
	RegisterToggleAction("toggle_freezeWeather", Toggles::OnFreezeWeatherToggle);
	RegisterToggleAction("toggle_weaponExtraDamage", Toggles::OnWeaponExtraDamageToggle);
	// RegisterToggleAction("toggle_disableInvisibleSniper", Toggles::OnDisableInvisibleSniperToggle);
}

void ToggleController::Toggle(string key)
{
	if (DoesToggleExistForKey(key)) {
		auto toggle = GetToggleForKey(key);
		*toggle = !(*toggle);
		if (DoesToggleActionExistForKey(key)) {
			auto action = GetToggleActionForKey(key);
			action(*toggle);
		}
	}
	else {
		Game::PrintSubtitle("Error: Toggle does not exist");
	}
}

bool ToggleController::DoesToggleExistForKey(string key)
{
	return toggles.count(key) != 0;
}

bool ToggleController::DoesToggleActionExistForKey(string key)
{
	return toggleActions.count(key) != 0;
}

// MARK: Getters
bool *ToggleController::GetToggleForKey(string key)
{
	return toggles[key];
}

std::function<void(bool value)> ToggleController::GetToggleActionForKey(string key)
{
	return toggleActions[key];
}

std::vector<string> ToggleController::GetKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(toggles), std::end(toggles), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}
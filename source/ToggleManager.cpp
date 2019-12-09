#include "pch.h"
#include "ToggleManager.h"
#include "Toggles.h"
#include "Routine.h"

// MARK: Manage
void ToggleManager::RegisterToggle(string key, std::shared_ptr<bool> toggle)
{
	if (toggles.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggles[key] = toggle;
}

void ToggleManager::RegisterToggleAction(string key, std::function<void(bool value)> toggleAction)
{
	if (toggleActions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggleActions[key] = toggleAction;
}

void ToggleManager::RegisterToggles()
{
	// Toggles
	RegisterToggle("toggle_playerInvincible", Toggles::playerInvincible);
	RegisterToggle("toggle_playerVisible", Toggles::playerVisible);
	RegisterToggle("toggle_playerSuperRun", Toggles::playerSuperRun);
	RegisterToggle("toggle_playerSuperJump", Toggles::playerSuperJump);
	RegisterToggle("toggle_playerUnlStamina", Toggles::playerUnlStamina);
	RegisterToggle("toggle_playerNeverWanted", Toggles::playerNeverWanted);
	RegisterToggle("toggle_playerUnlSpecialAbility", Toggles::playerUnlSpecialAbility);
	RegisterToggle("toggle_playerNoRagdoll", Toggles::playerNoRagdoll);
	RegisterToggle("toggle_playerEveryoneIgnore", Toggles::playerEveryoneIgnore);
	RegisterToggle("toggle_spawnedPedInvincible", Toggles::spawnedPedInvincible);
	RegisterToggle("toggle_spawnedPedBodyguard", Toggles::spawnedPedBodyguard);
	// RegisterToggle("toggle_playerExplosiveMelee", Toggles::weaponExtraDamage);
	RegisterToggle("toggle_horseInvincible", Toggles::horseInvincible);
	RegisterToggle("toggle_horseVisible", Toggles::horseVisible);
	RegisterToggle("toggle_horseSuperRun", Toggles::horseSuperRun);
	RegisterToggle("toggle_horseSuperJump", Toggles::horseSuperJump);
	RegisterToggle("toggle_horseNoRagdoll", Toggles::horseNoRagdoll);
	RegisterToggle("toggle_horseUnlimitedStamina", Toggles::horseUnlimitedStamina);
	// RegisterToggle("toggle_horseFlyMode", Toggles::horseFlyMode);
	RegisterToggle("toggle_vehicleBindBoost", Toggles::vehicleBindBoost);
	RegisterToggle("toggle_systemClockSync", Toggles::systemClockSync);
	RegisterToggle("toggle_pauseClock", Toggles::pauseClock);
	RegisterToggle("toggle_freezeWeather", Toggles::freezeWeather);
	RegisterToggle("toggle_spawnInsideVehicle", Toggles::spawnInsideVehicle);
	// RegisterToggle("toggle_horseEngineTest", Toggles::horseEngineTest);
	RegisterToggle("toggle_weaponInfiniteAmmo", Toggles::weaponInfiniteAmmo);
	RegisterToggle("toggle_weaponInfiniteAmmoInClip", Toggles::weaponInfiniteAmmoInClip);
	RegisterToggle("toggle_hideHud", Toggles::hideHud);
	// RegisterToggle("toggle_weaponExplosiveAmmo", Toggles::weaponExtraDamage);

	// Toggle actions
	RegisterToggleAction("toggle_playerInvincible", Toggles::OnPlayerInvincibleToggle);
	RegisterToggleAction("toggle_playerVisible", Toggles::OnPlayerVisibleToggle);
	RegisterToggleAction("toggle_playerEveryoneIgnore", Toggles::OnPlayerEveryoneIgnoreToggle);
	RegisterToggleAction("toggle_horseInvincible", Toggles::OnHorseInvincibleToggle);
	RegisterToggleAction("toggle_horseSuperJump", Toggles::OnHorseSuperJumpToggle);
	RegisterToggleAction("toggle_horseNoRagdoll", Toggles::OnHorseNoRagdollToggle);
	RegisterToggleAction("toggle_spawnedPedInvincible", Toggles::OnSpawnedPedInvincibleToggle);
	RegisterToggleAction("toggle_spawnedPedBodyguard", Toggles::OnSpanwedPedBodyguardToggle);
	RegisterToggleAction("toggle_playerNeverWanted", Toggles::OnPlayerNeverWantedToggle);
	RegisterToggleAction("toggle_horseVisible", Toggles::OnHorseVisibleToggle);
	RegisterToggleAction("toggle_pauseClock", Toggles::OnPauseClockToggle);
	RegisterToggleAction("toggle_freezeWeather", Toggles::OnFreezeWeatherToggle);
	RegisterToggleAction("toggle_weaponExtraDamage", Toggles::OnWeaponExtraDamageToggle);
}

void ToggleManager::Toggle(string key)
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
		Routine::StartDrawBottomMessage("~r~Error: ~w~Toggle does ~r~not~w~ exist");
	}
}

bool ToggleManager::DoesToggleExistForKey(string key)
{
	return toggles.count(key) != 0;
}

bool ToggleManager::DoesToggleActionExistForKey(string key)
{
	return toggleActions.count(key) != 0;
}

// MARK: Getters
std::shared_ptr<bool> ToggleManager::GetToggleForKey(string key)
{
	return toggles[key];
}

std::function<void(bool value)> ToggleManager::GetToggleActionForKey(string key)
{
	return toggleActions[key];
}

std::vector<string> ToggleManager::GetKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(toggles), std::end(toggles), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}
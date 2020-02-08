#include "pch.h"
#include "ToggleController.h"
#include "Toggles.h"
#include "Routine.h"

#pragma region Setup

void ToggleController::RegisterToggle(string key, bool *toggle, std::function<void(bool value)> toggleEventHandler)
{
	if (toggles.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggles[key] = toggle;
	if (toggleEventHandler != nullptr)
		toggleActions[key] = toggleEventHandler;
}

void ToggleController::RegisterLoopedToggle(string key, bool* toggle, std::function<void()> toggleLoop, std::function<void(bool value)> toggleEventHandler)
{
	if (toggles.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggles[key] = toggle;
	toggleLoops[key] = toggleLoop;
	if (toggleEventHandler != nullptr)
		toggleActions[key] = toggleEventHandler;
}

void ToggleController::RegisterToggleEventHandler(string key, std::function<void(bool value)> toggleAction)
{
	if (toggleActions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggleActions[key] = toggleAction;
}

void ToggleController::RegisterToggleLoop(string key, std::function<void()> toggleLoop)
{
	if (toggleLoops.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggleLoops[key] = toggleLoop;
}

void ToggleController::RegisterToggles()
{
	// Toggles
	RegisterLoopedToggle("toggle_playerInvincible", &Toggles::playerInvincible, Toggles::PlayerInvincibleLoop, Toggles::OnPlayerInvincibleToggle);
	RegisterToggle("toggle_playerVisible", &Toggles::playerVisible, Toggles::OnPlayerVisibleToggle);
	RegisterLoopedToggle("toggle_playerSuperRun", &Toggles::playerSuperRun, Toggles::PlayerSuperRunLoop);
	RegisterLoopedToggle("toggle_playerSuperJump", &Toggles::playerSuperJump, Toggles::PlayerSuperJumpLoop);
	RegisterLoopedToggle("toggle_playerUnlStamina", &Toggles::playerUnlStamina, Toggles::PlayerUnlStaminaLoop);
	RegisterLoopedToggle("toggle_playerNeverWanted", &Toggles::playerNeverWanted, Toggles::PlayerNeverWantedLoop, Toggles::OnPlayerNeverWantedToggle);
	RegisterLoopedToggle("toggle_playerUnlSpecialAbility", &Toggles::playerUnlSpecialAbility, Toggles::PlayerUnlSpecialAbilityLoop);
	RegisterLoopedToggle("toggle_playerNoRagdoll", &Toggles::playerNoRagdoll, Toggles::PlayerNoRagdollLoop);
	RegisterLoopedToggle("toggle_playerEveryoneIgnore", &Toggles::playerEveryoneIgnore, Toggles::PlayerEveryoneIgnoreLoop, Toggles::OnPlayerEveryoneIgnoreToggle);
	RegisterLoopedToggle("toggle_forceFirstPersonOnFoot", &Toggles::forceFirstPersonOnFoot, Toggles::ForceFirstPersonOnFootLoop);
	RegisterToggle("toggle_spawnedPedInvincible", &Toggles::spawnedPedInvincible, Toggles::OnSpawnedPedInvincibleToggle);
	RegisterToggle("toggle_spawnedPedBodyguard", &Toggles::spawnedPedBodyguard, Toggles::OnSpanwedPedBodyguardToggle);
	RegisterToggle("toggle_allSpawnedPedsInvincible", &Toggles::allSpawnedPedsInvincible, Toggles::OnAllSpawnedPedsInvincibleToggle);
	RegisterToggle("toggle_allSpawnedPedsBodyguard", &Toggles::allSpawnedPedsBodyguard, Toggles::OnAllSpanwedPedsBodyguardToggle);
	// RegisterToggle("toggle_playerExplosiveMelee", &Toggles::weaponExtraDamage);
	RegisterLoopedToggle("toggle_horseInvincible", &Toggles::horseInvincible, Toggles::HorseInvincibleLoop, Toggles::OnHorseInvincibleToggle);
	RegisterToggle("toggle_horseVisible", &Toggles::horseVisible, Toggles::OnHorseVisibleToggle);
	RegisterLoopedToggle("toggle_horseSuperRun", &Toggles::horseSuperRun, Toggles::HorseSuperRunLoop, Toggles::OnHorseSuperJumpToggle);
	RegisterLoopedToggle("toggle_horseSuperJump", &Toggles::horseSuperJump, Toggles::HorseSuperJumpLoop);
	RegisterLoopedToggle("toggle_horseNoRagdoll", &Toggles::horseNoRagdoll, Toggles::HorseNoRagdollLoop, Toggles::OnHorseNoRagdollToggle);
	RegisterLoopedToggle("toggle_horseUnlimitedStamina", &Toggles::horseUnlimitedStamina, Toggles::HorseUnlimitedStaminaLoop);
	RegisterLoopedToggle("toggle_forceFirstPersonOnHorse", &Toggles::forceFirstPersonOnHorse, Toggles::ForceFirstPersonOnHorseLoop);
	// RegisterLoopedToggle("toggle_horseFlyMode", &Toggles::horseFlyMode);
	RegisterLoopedToggle("toggle_vehicleInvincible", &Toggles::vehicleInvincible, Toggles::VehicleInvincibleLoop, Toggles::OnVehicleInvincibleToggle);
	RegisterLoopedToggle("toggle_vehicleVisible", &Toggles::vehicleVisible, Toggles::VehicleVisibleLoop, Toggles::OnVehicleVisibleToggle);
	RegisterLoopedToggle("toggle_vehicleCannons", &Toggles::vehicleCannons, Toggles::VehicleCannonsLoop);
	RegisterLoopedToggle("toggle_vehicleBindBoost", &Toggles::vehicleBindBoost, Toggles::VehicleBindBoostLoop);
	RegisterLoopedToggle("toggle_boatFlyMode", &Toggles::boatFlyMode, Toggles::BoatFlyModeLoop, Toggles::OnBoatFlyModeToggle);
	RegisterLoopedToggle("toggle_forceFirstPersonInVehicle", &Toggles::forceFirstPersonInVehicle, Toggles::ForceFirstPersonInVehicleLoop);
	RegisterLoopedToggle("toggle_systemClockSync", &Toggles::systemClockSync, Toggles::SystemClockSyncLoop);
	RegisterToggle("toggle_pauseClock", &Toggles::pauseClock, Toggles::OnPauseClockToggle);
	RegisterLoopedToggle("toggle_freezeWeather", &Toggles::freezeWeather, Toggles::FreezeWeatherLoop, Toggles::OnFreezeWeatherToggle);
	RegisterToggle("toggle_spawnInsideVehicle", &Toggles::spawnInsideVehicle);
	// RegisterLoopedToggle("toggle_horseEngineTest", &Toggles::horseEngineTest, Toggles::HorseEngineTestLoop);
	RegisterLoopedToggle("toggle_weaponInfiniteAmmo", &Toggles::weaponInfiniteAmmo, Toggles::WeaponInfiniteAmmoLoop);
	RegisterLoopedToggle("toggle_weaponInfiniteAmmoInClip", &Toggles::weaponInfiniteAmmoInClip, Toggles::WeaponInfiniteAmmoInClipLoop);
	RegisterLoopedToggle("toggle_hideHud", &Toggles::hideHud, Toggles::HideHudLoop);
	// RegisterToggle("toggle_disableInvisibleSniper", &Toggles::disableInvisibleSniper, Toggles::DisableInvisibleSniperLoop, Toggles::OnFreezeWeatherToggle);
	RegisterLoopedToggle("toggle_weaponCustomBullets", &Toggles::weaponCustomBullets, Toggles::WeaponCustomBulletsLoop);

}

#pragma endregion

#pragma region Manage

void ToggleController::Toggle(string key)
{
	auto toggle = GetToggleForKey(key);
	ToggleController::SetToggleValueForKey(key, !(*toggle));
}

void ToggleController::SetToggleValueForKey(string key, bool value)
{
	if (ToggleExistsForKey(key)) {
		auto toggle = GetToggleForKey(key);
		*toggle = value;
		if (ToggleEventHandlerExistsForKey(key)) {
			auto eventHandler = GetToggleEventHandlerForKey(key);
			eventHandler(value);
		}
		if (ToggleLoopExistsForKey(key)) {
			if (value) {
				auto loop = GetToggleLoopForKey(key);
				TaskQueue::AddTask(key, loop);
			}
			else {
				TaskQueue::RemoveTask(key);
			}
		}
	}
	else {
		Game::PrintSubtitle("Error: Toggle does not exist");
	}
}

bool ToggleController::ToggleExistsForKey(string key)
{
	return toggles.count(key) != 0;
}

bool ToggleController::ToggleEventHandlerExistsForKey(string key)
{
	return toggleActions.count(key) != 0;
}

bool ToggleController::ToggleLoopExistsForKey(string key)
{
	return toggleLoops.count(key) != 0;
}

#pragma endregion

#pragma region Getters

bool *ToggleController::GetToggleForKey(string key)
{
	return toggles[key];
}

std::function<void(bool value)> ToggleController::GetToggleEventHandlerForKey(string key)
{
	return toggleActions[key];
}

std::function<void()> ToggleController::GetToggleLoopForKey(string key)
{
	return toggleLoops[key];
}

std::vector<string> ToggleController::Keys()
{
	std::vector<string> keys;
	std::transform(std::begin(toggles), std::end(toggles), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

#pragma endregion
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
	// MARK: Toggles
	RegisterToggle("toggle_playerInvincible", Toggles::playerInvincible);
	RegisterToggle("toggle_playerVisible", Toggles::playerVisible);
	RegisterToggle("toggle_playerSuperRun", Toggles::playerSuperRun);
	RegisterToggle("toggle_playerSuperJump", Toggles::playerSuperJump);
	RegisterToggle("toggle_spawnInsideVehicle", Toggles::spawnInsideVehicle);
	RegisterToggle("toggle_horseEngineTest", Toggles::horseEngineTest);
	RegisterToggle("toggle_weaponInfiniteAmmo", Toggles::weaponInfiniteAmmo);
	// MARK: Toggle actions
	RegisterToggleAction("toggle_playerInvincible", Toggles::OnPlayerInvincibleToggle);
	RegisterToggleAction("toggle_playerVisible", Toggles::OnPlayerVisibleToggle);
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
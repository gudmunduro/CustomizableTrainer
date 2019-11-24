#include "pch.h"
#include "ActionManager.h"
#include "Actions.h"
#include "Routine.h"

// MARK: Manage
void ActionManager::RegisterAction(string key, std::function<void(json params)> action)
{
	if (actions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	actions[key] = action;
}

void ActionManager::RegisterActions()
{
	// MARK: Player
	RegisterAction("action_setPlayerMaxHealth", Actions::SetPlayerMaxHealth);
	RegisterAction("action_setPlayerModel", Actions::ChangeModel);
	RegisterAction("action_clearPlayerWantedLevel", Actions::ClearPlayerWantedLevel);
	RegisterAction("action_restorePlayerStamina", Actions::RestorePlayerStamina);
	// MARK: Vehicle
	RegisterAction("action_spawnVehicle", Actions::SpawnVehicle);
	RegisterAction("action_repairVehicle", Actions::RepairVehicle);
	RegisterAction("action_deleteCurrentVehicle", Actions::DeleteCurrentVehicle);
}

void ActionManager::RunActionForKey(string key, json params)
{
	if (DoesActionExistForKey(key)) {
		auto action = ActionManager::GetActionForKey(key);
		action(params);
	}
	else {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Action does ~r~not~w~ exist");
	}
}

// MARK: Getters
bool ActionManager::DoesActionExistForKey(string key)
{
	return actions.count(key) != 0;
}
std::function<void(json params)> ActionManager::GetActionForKey(string key)
{
	return actions[key];
}
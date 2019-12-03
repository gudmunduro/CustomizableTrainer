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
	// Player
	RegisterAction("action_setPlayerMaxHealth", Actions::SetPlayerMaxHealth);
	RegisterAction("action_setPlayerModel", Actions::ChangeModel);
	RegisterAction("action_stopPlayerPursuit", Actions::StopPlayerPursuit);
	RegisterAction("action_cleaPlayerBounty", Actions::ClearPlayerBounty);
	RegisterAction("action_restorePlayerStamina", Actions::RestorePlayerStamina);
	RegisterAction("action_addCashFromKeyboard", Actions::AddCashFromKeyboard);
	// Vehicle
	RegisterAction("action_spawnVehicle", Actions::SpawnVehicle);
	RegisterAction("action_repairVehicle", Actions::RepairVehicle);
	RegisterAction("action_boostVehicle", Actions::BoostVehicle);
	RegisterAction("action_teleportIntoClosestVehicle", Actions::TeleportIntoClosestVehicle);
	RegisterAction("action_deleteCurrentVehicle", Actions::DeleteCurrentVehicle);
	// Horse
	RegisterAction("action_setHorseMaxHealth", Actions::SetHorseMaxHealth);
	RegisterAction("action_spawnHorse", Actions::SpawnHorse);
	// Weapons
	RegisterAction("action_givePlayerAllWeapons", Actions::GivePlayerAllWeapons);
	RegisterAction("action_givePlayerWeapon", Actions::GivePlayerWeapon);
	RegisterAction("action_givePlayerMaxAmmo", Actions::GivePlayerMaxAmmo);
	// Weather
	RegisterAction("action_setWeather", Actions::SetWeather);
	// Time
	RegisterAction("action_addToClockTime", Actions::AddToClockTime);
	// Teleport
	RegisterAction("action_teleportPlayerToCoords", Actions::TeleportPlayerToCoords);
	RegisterAction("action_teleportPlayerToWaypoint", Actions::TeleportPlayerToWaypoint);
	RegisterAction("action_teleportPlayerForward", Actions::TeleportPlayerForward);
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

std::vector<string> ActionManager::GetKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(actions), std::end(actions), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

std::vector<MenuOptionParameter> ActionManager::GetParameterForKey(string key)
{
	std::map<string, std::vector<MenuOptionParameter>> parameters;
	parameters["action_setPlayerModel"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_spawnHorse"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_spawnVehicle"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_givePlayerWeapon"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_setWeather"] = { { { MenuOptionParameterType::String, "Weather" } } };
	parameters["action_addToClockTime"] = { { { MenuOptionParameterType::Int, "Hours" }, { MenuOptionParameterType::Int, "Minutes" }, { MenuOptionParameterType::Int, "Seconds" } } };
	parameters["action_teleportPlayerToCoords"] = { { { MenuOptionParameterType::Float, "X" }, { MenuOptionParameterType::Float, "Y" }, { MenuOptionParameterType::Float, "Z" } } };

	if (parameters.count(key) == 0) return {};
	return parameters[key];
}
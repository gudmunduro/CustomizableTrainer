#include "pch.h"
#include "ActionController.h"
#include "Actions.h"
#include "Routine.h"

#pragma region Manange

void ActionController::RegisterAction(string key, std::function<void(json params)> action)
{
	if (actions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	actions[key] = action;
}

void ActionController::RegisterActions()
{
	// Player
	RegisterAction("action_setPlayerMaxHealth", Actions::SetPlayerMaxHealth);
	RegisterAction("action_setPlayerModel", Actions::ChangeModel);
	RegisterAction("actions_setPlayerModelFromInput", Actions::ChangeFromInput);
	RegisterAction("action_stopPlayerPursuit", Actions::StopPlayerPursuit);
	RegisterAction("action_cleaPlayerBounty", Actions::ClearPlayerBounty);
	RegisterAction("action_restorePlayerStamina", Actions::RestorePlayerStamina);
	RegisterAction("action_addCashFromKeyboard", Actions::AddCashFromKeyboard);
	RegisterAction("action_playAnimOnPlayer", Actions::PlayAnimOnPlayer);
	// Vehicle
	RegisterAction("action_spawnVehicle", Actions::SpawnVehicle);
	RegisterAction("action_spawnVehicleFromInput", Actions::SpawnVehicleFromInput);
	RegisterAction("action_repairVehicle", Actions::RepairVehicle);
	RegisterAction("action_repairEngine", Actions::RepairEngine);
	RegisterAction("action_boostVehicle", Actions::BoostVehicle);
	RegisterAction("action_teleportIntoClosestVehicle", Actions::TeleportIntoClosestVehicle);
	RegisterAction("action_deleteCurrentVehicle", Actions::DeleteCurrentVehicle);
	// Peds
	RegisterAction("action_spawnPed", Actions::SpawnPed);
	RegisterAction("action_spawnPedFromInput", Actions::SpawnPedFromInput);
	RegisterAction("action_giveSpawnedPedWeapon", Actions::GiveSpawnedPedWeapon);
	RegisterAction("action_teleportPlayerToSpawnedPed", Actions::TeleportPlayerToSpawnedPed);
	RegisterAction("action_teleportSpawnedPedToPlayer", Actions::TeleportSpawnedPedToPlayer);
	RegisterAction("action_deleteSpawnedPed", Actions::DeleteSpawnedPed);
	RegisterAction("action_giveAllSpawnedPedsWeapon", Actions::GiveAllSpawnedPedsWeapon);
	RegisterAction("action_teleportAllSpawnedPedsToPlayer", Actions::TeleportAllSpawnedPedsToPlayer);
	RegisterAction("action_deleteAllSpawnedPeds", Actions::DeleteAllSpawnedPeds);
	// Horse
	RegisterAction("action_setHorseMaxHealth", Actions::SetHorseMaxHealth);
	RegisterAction("action_spawnHorse", Actions::SpawnHorse);
	RegisterAction("action_spawnHorseFromInput", Actions::SpawnHorseFromInput);
	// Weapons
	RegisterAction("action_givePlayerAllWeapons", Actions::GivePlayerAllWeapons);
	RegisterAction("action_givePlayerWeapon", Actions::GivePlayerWeapon);
	RegisterAction("action_removeAllWeaponsFromPlayer", Actions::RemoveAllWeaponsFromPlayer);
	RegisterAction("action_equipSelectedWeapon", Actions::EquipSelectedWeapon);
	RegisterAction("action_removeSelectedWeapon", Actions::RemoveSelectedWeapon);
	RegisterAction("action_fillAmmoInSelectedWeapon", Actions::FillAmmoInSelectedWeapon);
	RegisterAction("action_givePlayerMaxAmmo", Actions::GivePlayerMaxAmmo);
	RegisterAction("action_givePlayerMaxAmmoOfType", Actions::GivePlayerMAaxAmmoOfType);
	// Weather
	RegisterAction("action_setWeather", Actions::SetWeather);
	// Time
	RegisterAction("action_addToClockTime", Actions::AddToClockTime);
	// Teleport
	RegisterAction("action_teleportPlayerToCoords", Actions::TeleportPlayerToCoords);
	RegisterAction("action_teleportPlayerToWaypoint", Actions::TeleportPlayerToWaypoint);
	RegisterAction("action_teleportPlayerForward", Actions::TeleportPlayerForward);
	// Misc
	RegisterAction("action_revealFullMap", Actions::RevealFullMap);
	RegisterAction("action_killEveryoneNearby", Actions::KillEveryoneNearby);
	// RegisterAction("action_test", Actions::TestAction);
}

void ActionController::RunActionForKey(string key, json params)
{
	if (ActionExistsForKey(key)) {
		auto action = ActionController::GetActionForKey(key);
		action(params);
	}
	else {
		Game::PrintSubtitle("Error: Action does not exist");
	}
}

#pragma endregion

#pragma region Getters

bool ActionController::ActionExistsForKey(string key)
{
	return actions.count(key) != 0;
}

std::function<void(json params)> ActionController::GetActionForKey(string key)
{
	return actions[key];
}

std::vector<string> ActionController::Keys()
{
	std::vector<string> keys;
	std::transform(std::begin(actions), std::end(actions), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

std::vector<MenuOptionParameter> ActionController::GetParameterForKey(string key)
{
	std::map<string, std::vector<MenuOptionParameter>> parameters;
	parameters["action_setPlayerModel"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_spawnHorse"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_spawnVehicle"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_spawnPed"] = { { { MenuOptionParameterType::String, "Model" } } };
	parameters["action_givePlayerWeapon"] = { { { MenuOptionParameterType::String, "Weapon" } } };
	parameters["action_givePlayerMaxAmmoOfType"] = { { { MenuOptionParameterType::String, "Type" } } };
	parameters["action_giveSpawnedPedWeapon"] = { { { MenuOptionParameterType::String, "Weapon" } } };
	parameters["action_giveAllSpawnedPedsWeapon"] = { { { MenuOptionParameterType::String, "Weapon" } } };
	parameters["action_setWeather"] = { { { MenuOptionParameterType::String, "Weather" } } };
	parameters["action_playAnimOnPlayer"] = { { { MenuOptionParameterType::String, "Dict" }, { MenuOptionParameterType::String, "Name" } } };
	parameters["action_addToClockTime"] = { { { MenuOptionParameterType::Int, "Hours" }, { MenuOptionParameterType::Int, "Minutes" }, { MenuOptionParameterType::Int, "Seconds" } } };
	parameters["action_teleportPlayerToCoords"] = { { { MenuOptionParameterType::Float, "X" }, { MenuOptionParameterType::Float, "Y" }, { MenuOptionParameterType::Float, "Z" } } };

	if (parameters.count(key) == 0) return {};
	return parameters[key];
}

#pragma endregion
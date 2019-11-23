#include "pch.h"
#include "Actions.h"
#include "PedManager.h"
#include "Routine.h"

// MARK: Player
void Actions::SetPlayerMaxHealth(json params)
{
	auto player = PedManager::WithPlayerPed();
	player.SetHealth(player.GetMaxHealth());
	Routine::StartDrawBottomMessage("Player health filled");
}

void Actions::ClearPlayerWantedLevel(json params)
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(Game::playerId);
}

// MARK: Vehicle
void Actions::SpawnVehicle(json params)
{
	if (!params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
	}
	string vehicleName = params[0].get<string>();
	Hash vehicleHash = String::Hash(vehicleName);
	if (!STREAMING::IS_MODEL_IN_CDIMAGE(vehicleHash)) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid model");
	}
	auto playerPed = PedManager::WithPlayerPed();
	Vector3 playerPosition = playerPed.GetPosition();

	Game::RequestModel(vehicleHash);
	VEHICLE::CREATE_VEHICLE(vehicleHash, playerPosition.x + 3.0f, playerPosition.y, playerPosition.z, playerPed.GetHeading(), false, false, false, false);
}

void Actions::DeleteCurrentVehicle(json params)
{
	Vehicle currentVehicle = PedManager::WithPlayerPed().GetCurrentVehicle();
	if (currentVehicle) {
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(currentVehicle, true, false);
		VEHICLE::DELETE_VEHICLE(&currentVehicle);
		Routine::StartDrawBottomMessage("~g~Deleted!");
	}
}
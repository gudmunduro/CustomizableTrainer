#include "pch.h"
#include "Actions.h"
#include "Routine.h"
#include "Player.h"
#include "Toggles.h"

// MARK: Player
void Actions::SetPlayerMaxHealth(json params)
{
	Player player = Player();
	player.SetHealth(player.GetMaxHealth());
	Routine::StartDrawBottomMessage("Player health filled");
}

void Actions::ClearPlayerWantedLevel(json params)
{
	Player().ClearWantedLevel();
}

void Actions::ChangeModel(json params)
{
	if (!params.is_array() || !params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	string model = params[0].get<string>();
	Routine::StartDrawBottomMessage("Changing model to " + model);
	Hash modelHash = String::Hash(model);

	Player().SetModel(modelHash);
}

void Actions::RestorePlayerStamina(json params)
{
	Player().RestoreStamina();
}

// MARK: Vehicle
void Actions::SpawnVehicle(json params)
{
	if (!params.is_array() || !params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	string vehicleModel = params[0].get<string>();
	Hash vehicleHash = String::Hash(vehicleModel);
	if (!STREAMING::IS_MODEL_IN_CDIMAGE(vehicleHash)) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid model");
		return;
	}
	Player player = Player();
	Vector3 spawnPosition = player.GetPosition();

	if (!(*Toggles::spawnInsideVehicle)) {
		spawnPosition.x += 3.0f;
	}

	if (player.IsInVehicle()) {
		auto vehicle = player.GetCurrentVehicle();
		vehicle.Delete();
	}

	auto spawnedVehicle = Vehicle::Spawn(vehicleHash, spawnPosition, player.GetHeading());

	if (*Toggles::spawnInsideVehicle) {
		player.SetIntoVehicle(spawnedVehicle.GetVehicleId());
	}
}

void Actions::RepairVehicle(json params)
{
	auto currentVehicle = Player().GetCurrentVehicle();
	if (currentVehicle.Exists()) {
		currentVehicle.Repair();
	}
}

void Actions::DeleteCurrentVehicle(json params)
{
	Vehicle currentVehicle = Player().GetCurrentVehicle();
	if (currentVehicle.Exists()) {
		currentVehicle.Delete();
		Routine::StartDrawBottomMessage("~g~Deleted!");
	}
}

// Teleport
void Actions::TeleportPlayerForward(json params)
{
	auto player = Player();
	auto teleportToCoords = player.GetOffsetInWorldCoords({0, 4.0f, 0});
	player.SetCoords(teleportToCoords);
}

void Actions::TeleportPlayerToCoords(json params)
{
	if (!params.is_array() || !params[0].is_number_float() || !params[1].is_number_float() || !params[2].is_number_float()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}

	Vector3 teleportToCoords = { params[0], params[1], params[2] };
	Player().SetCoords(teleportToCoords);
}
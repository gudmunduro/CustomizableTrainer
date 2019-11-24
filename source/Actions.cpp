#include "pch.h"
#include "Actions.h"
#include "Routine.h"
#include "Player.h"

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
	}
	string vehicleModel = params[0].get<string>();
	Hash vehicleHash = String::Hash(vehicleModel);
	if (!STREAMING::IS_MODEL_IN_CDIMAGE(vehicleHash)) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid model");
	}
	Player player = Player();
	Vector3 playerPosition = player.GetPosition();

	Vehicle::Spawn(vehicleHash, playerPosition, player.GetHeading());
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

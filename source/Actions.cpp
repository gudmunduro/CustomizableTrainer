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
	player.RestoreStamina(100.0);
	player.RestoreSpecialAbility();
	Routine::StartDrawBottomMessage("Player healed");
}

void Actions::StopPlayerPursuit(json params)
{
	Player().StopPursuit();
}

void Actions::ClearPlayerBounty(json params)
{
	Player().SetBounty(0);
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

// MARK: Horse
void Actions::SetHorseMaxHealth(json params)
{
	Ped horse = Player().GetMount();
	horse.SetHealth(horse.GetMaxHealth());
	horse.SetStamina(100.0);
	Routine::StartDrawBottomMessage("Horse healed");
}

void Actions::SpawnHorse(json params)
{
	if (!params.is_array() || !params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	string model = params[0].get<string>();
	Player player;
	Vector3 spawnPosition = player.GetOffsetInWorldCoords({ 0.0, 2.0, 0.0 });
	float heading = player.GetHeading() + 90.0f;

	Ped::Spawn(String::Hash(model), spawnPosition, heading);
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
	float vehicleSpawnHeading = player.GetHeading();

	if (!(*Toggles::spawnInsideVehicle)) {
		spawnPosition = player.GetOffsetInWorldCoords({0.0, 2.0, 0.0});
		vehicleSpawnHeading += 90;
	}

	if (player.IsInVehicle()) {
		auto vehicle = player.GetCurrentVehicle();
		vehicle.Delete();
	}

	auto spawnedVehicle = Vehicle::Spawn(vehicleHash, spawnPosition, vehicleSpawnHeading);

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

void Actions::BoostVehicle(json params)
{
	auto currentVehicle = Player().GetCurrentVehicle();
	if (currentVehicle.Exists()) {
		currentVehicle.SetForwardSpeed(16.66);
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

// Weapons
void Actions::GivePlayerAllWeapons(json params)
{
	Player player;
	string weaponModels[] = { "WEAPON_KIT_CAMERA", "WEAPON_MOONSHINEJUG", "WEAPON_MELEE_LANTERN_ELECTRIC", "WEAPON_MELEE_TORCH", "WEAPON_MELEE_BROKEN_SWORD", "WEAPON_FISHINGROD",
							"WEAPON_MELEE_HATCHET", "WEAPON_MELEE_CLEAVER", "WEAPON_MELEE_ANCIENT_HATCHET", "WEAPON_MELEE_HATCHET_VIKING", "WEAPON_MELEE_HATCHET_HEWING",
							"WEAPON_MELEE_HATCHET_DOUBLE_BIT", "WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED", "WEAPON_MELEE_HATCHET_HUNTER", "WEAPON_MELEE_HATCHET_HUNTER_RUSTED",
							"WEAPON_MELEE_KNIFE_JOHN", "WEAPON_MELEE_KNIFE", "WEAPON_MELEE_KNIFE_JAWBONE", "WEAPON_THROWN_THROWING_KNIVES", "WEAPON_MELEE_KNIFE_MINER", "WEAPON_MELEE_KNIFE_CIVIL_WAR",
							"WEAPON_MELEE_KNIFE_BEAR", "WEAPON_MELEE_KNIFE_VAMPIRE", "WEAPON_LASSO", "WEAPON_MELEE_MACHETE", "WEAPON_THROWN_TOMAHAWK", "WEAPON_THROWN_TOMAHAWK_ANCIENT",
							"WEAPON_PISTOL_M1899", "WEAPON_PISTOL_MAUSER", "WEAPON_PISTOL_MAUSER_DRUNK", "WEAPON_PISTOL_SEMIAUTO", "WEAPON_PISTOL_VOLCANIC", "WEAPON_REPEATER_CARBINE",
							"WEAPON_REPEATER_EVANS", "WEAPON_REPEATER_HENRY", "WEAPON_RIFLE_VARMINT", "WEAPON_REPEATER_WINCHESTER", "WEAPON_REVOLVER_CATTLEMAN", "WEAPON_REVOLVER_CATTLEMAN_JOHN",
							"WEAPON_REVOLVER_CATTLEMAN_MEXICAN", "WEAPON_REVOLVER_CATTLEMAN_PIG", "WEAPON_REVOLVER_DOUBLEACTION", "WEAPON_REVOLVER_DOUBLEACTION_EXOTIC", "WEAPON_REVOLVER_DOUBLEACTION_GAMBLER",
							"WEAPON_REVOLVER_DOUBLEACTION_MICAH", "WEAPON_REVOLVER_LEMAT", "WEAPON_REVOLVER_SCHOFIELD", "WEAPON_REVOLVER_SCHOFIELD_GOLDEN", "WEAPON_REVOLVER_SCHOFIELD_CALLOWAY",
							"WEAPON_RIFLE_BOLTACTION", "WEAPON_SNIPERRIFLE_CARCANO", "WEAPON_SNIPERRIFLE_ROLLINGBLOCK", "WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC", "WEAPON_RIFLE_SPRINGFIELD",
							"WEAPON_SHOTGUN_DOUBLEBARREL", "WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC", "WEAPON_SHOTGUN_PUMP", "WEAPON_SHOTGUN_REPEATING", "WEAPON_SHOTGUN_SAWEDOFF", "WEAPON_SHOTGUN_SEMIAUTO",
							"WEAPON_BOW", "WEAPON_THROWN_DYNAMITE", "WEAPON_THROWN_MOLOTOV" };
	for each (string weapon in weaponModels) {
		player.GiveWeapon(String::Hash(weapon));
	}
}

void Actions::GivePlayerWeapon(json params)
{
	if (!params.is_array() || !params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	string weaponModel = params[0].get<string>();
	Hash weaponHash = String::Hash(weaponModel);
	
	Player().GiveWeapon(weaponHash);
	WEAPON::SET_PED_AMMO(Game::playerPedId, weaponHash, 9999);
}

// MARK: Weather
void Actions::SetWeather(json params)
{
	if (!params.is_array() || !params[0].is_string()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	string weather = params[0].get<string>();
	Game::SetWeather(String::Hash(weather));
}

// MARK: Time
void Actions::AddToClockTime(json params)
{
	if (!params.is_array() || !params[0].is_number_integer() || !params[1].is_number_integer() || !params[2].is_number_integer()) {
		Routine::StartDrawBottomMessage("~r~Error: ~w~Invalid parameters");
		return;
	}
	int hours = params[0].get<int>();
	int minutes = params[0].get<int>();
	int seconds = params[0].get<int>();
	TIME::ADD_TO_CLOCK_TIME(hours, minutes, seconds);
}

// MARK: Teleport
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

#include "pch.h"
#include "SpawnerSettingsSub.h"
#include "MenuSettings.h"
#include "JsonData.h"

SpawnerSettingsSub::SpawnerSettingsSub(MenuController* menuController)
	: Submenu(menuController)
{}

void SpawnerSettingsSub::Draw()
{
	Submenu::Draw();

	DrawToggle("Spawn vehicles frozen", Settings::Spawner::spawnVehiclesFrozen, [] {
		Settings::Spawner::spawnVehiclesFrozen = !Settings::Spawner::spawnVehiclesFrozen;
		JSONData::SaveMenuSettings();
	});
	DrawToggle("Spawn peds frozen", Settings::Spawner::spawnPedsFrozen, [] {
		Settings::Spawner::spawnPedsFrozen = !Settings::Spawner::spawnPedsFrozen;
		JSONData::SaveMenuSettings();
	});
}
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

	DrawTitle("Settings");

	DrawToggle("Spawn vehicles frozen", Settings::Spawner::spawnVehiclesFrozen, [] {
		Settings::Spawner::spawnVehiclesFrozen = !Settings::Spawner::spawnVehiclesFrozen;
		JSONData::SaveMenuSettings();
	});
	DrawToggle("Spawn peds frozen", Settings::Spawner::spawnPedsFrozen, [] {
		Settings::Spawner::spawnPedsFrozen = !Settings::Spawner::spawnPedsFrozen;
		JSONData::SaveMenuSettings();
	});
	DrawTextList("Move mode", MoveModeTextValue(), [](bool dir) {
		if (Settings::Spawner::moveMode == SpawnerMoveMode::Precision)
			Settings::Spawner::moveMode = SpawnerMoveMode::SurfaceEase;
		else
			Settings::Spawner::moveMode = SpawnerMoveMode::Precision;

		JSONData::SaveMenuSettings();
	});
}

std::string SpawnerSettingsSub::MoveModeTextValue()
{
	switch (Settings::Spawner::moveMode) {
		case SpawnerMoveMode::SurfaceEase:
			return "Surface ease";
		case SpawnerMoveMode::Precision:
			return "Precision";
	}

	return "Invalid";
}
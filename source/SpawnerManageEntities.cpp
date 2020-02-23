/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "SpawnerManageEntities.h"
#include "Spawner.h"
#include "SpawnerManageEntity.h"


#pragma region Categories

SpawnerManageCategories::SpawnerManageCategories(MenuController* menuController)
	: Submenu(menuController)
{}

void SpawnerManageCategories::Draw()
{
	Submenu::Draw();

	DrawTitle("Manage");
	DrawSubAction("Peds", [this] {
		auto managePedsSub = new SpawnerManageEntities(menuController, EntityType::Ped);
		menuController->AddSubmenuToStack(managePedsSub);
	});
	DrawSubAction("Vehicles", [this] {
		auto manageVehiclesSub = new SpawnerManageEntities(menuController, EntityType::Vehicle);
		menuController->AddSubmenuToStack(manageVehiclesSub);
	});
	DrawSubAction("Objects", [this] {
		auto manageObjectsSub = new SpawnerManageEntities(menuController, EntityType::Object);
		menuController->AddSubmenuToStack(manageObjectsSub);
	});
}

#pragma endregion

#pragma region Entities

SpawnerManageEntities::SpawnerManageEntities(MenuController* menuController, EntityType type)
	: Submenu(menuController), type(type)
{}

void SpawnerManageEntities::Draw()
{
	Submenu::Draw();

	DrawTitle("Manage");

	switch (type) {
	case EntityType::Ped:
		for each (auto && ped in Spawner::Spawner::database.peds) {
			DrawSubAction(ped->model, [this, ped] {
				auto managePedSub = new SpawnerManageEntity(menuController, type, std::static_pointer_cast<Spawner::DatabaseItem>(ped));
				menuController->AddSubmenuToStack(managePedSub);
			});
		}
		break;

	case EntityType::Vehicle:
		for each (auto && vehicle in Spawner::Spawner::database.vehicles) {
			DrawSubAction(vehicle->model, [this, vehicle] {
				auto manageVehicleSub = new SpawnerManageEntity(menuController, type, std::static_pointer_cast<Spawner::DatabaseItem>(vehicle));
				menuController->AddSubmenuToStack(manageVehicleSub);
			});
		}
		break;

	case EntityType::Object:
		for each (auto && object in Spawner::Spawner::database.objects) {
			DrawSubAction(object->model, [this, object] {
				auto manageObjectSub = new SpawnerManageEntity(menuController, type, std::static_pointer_cast<Spawner::DatabaseItem>(object));
				menuController->AddSubmenuToStack(manageObjectSub);
			});
		}
		break;
	}

}

#pragma endregion

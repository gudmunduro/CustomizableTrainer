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
#include "SpawnerManageEntity.h"

SpawnerManageEntity::SpawnerManageEntity(MenuController* menuController, EntityType type, std::shared_ptr<Spawner::DatabaseItem> dbItem)
	: Submenu(menuController), type(type), dbItem(dbItem), entity(GetEntity())
{}

#pragma region Draw

void SpawnerManageEntity::Draw()
{
	Submenu::Draw();

	DrawTitle(dbItem->model);
	DrawToggle("Visible", entity.IsVisible(), [this] {
		entity.SetVisible(!entity.IsVisible());
	});
}

#pragma endregion

#pragma region Booleans

bool SpawnerManageEntity::IsPed()
{
	return type == EntityType::Ped;
}

bool SpawnerManageEntity::IsVehicle()
{
	return type == EntityType::Vehicle;
}

bool SpawnerManageEntity::IsObject()
{
	return type == EntityType::Object;
}

#pragma endregion

#pragma region Getters

Ped SpawnerManageEntity::GetEntityAsPed()
{
	return std::static_pointer_cast<Spawner::PedDatabaseItem>(dbItem)->ped;
}

Vehicle SpawnerManageEntity::GetEntityAsVehicle()
{
	return std::static_pointer_cast<Spawner::VehicleDatabaseItem>(dbItem)->vehicle;
}

Object SpawnerManageEntity::GetEntityAsObject()
{
	return std::static_pointer_cast<Spawner::ObjectDatabaseItem>(dbItem)->object;
}

Entity SpawnerManageEntity::GetEntity()
{
	switch (type) {
		case EntityType::Ped: {
			auto id = GetEntityAsPed().id;
			return Entity(id);
		}
		case EntityType::Vehicle: {
			auto id = GetEntityAsVehicle().id;
			return Entity(id);
		}
		case EntityType::Object: {
			auto id = GetEntityAsObject().id;
			return Entity(id);
		}
		default:
			throw std::exception("Invlid entity type");
	}
}

#pragma endregion

/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"
#include "Submenu.h"
#include "Spawner.h"

class SpawnerManageEntity
	: public Submenu
{
public:
	SpawnerManageEntity(MenuController* menuController, EntityType type, std::shared_ptr<Spawner::DatabaseItem> dbItem);

	void Draw() override;

	bool IsPed();
	bool IsVehicle();
	bool IsObject();

	std::shared_ptr<Spawner::PedDatabaseItem> DbItemForPed();
	std::shared_ptr<Spawner::VehicleDatabaseItem> DbItemForVehicle();
	std::shared_ptr<Spawner::ObjectDatabaseItem> DbItemForObject();


private:
	Entity entity;
	EntityType type;
	std::shared_ptr<Spawner::DatabaseItem> dbItem;
};


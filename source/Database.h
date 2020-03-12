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
#include "DatabaseItem.h"

namespace Spawner {

	class Database
	{
	public:
		Database();

		int Add(EntityId entityId, EntityType type, std::string model);
		int AddPed(PedId ped, std::string model);
		int AddVehicle(VehicleId vehicle, std::string model);
		int AddObject(ObjectId object, std::string model);
		int AddPedRaw(std::shared_ptr<PedDatabaseItem> dbItem);
		int AddVehicleRaw(std::shared_ptr<VehicleDatabaseItem> dbItem);
		int AddObjectRaw(std::shared_ptr<ObjectDatabaseItem> dbItem);

		void RemoveAndDelete(std::shared_ptr<DatabaseItem> dbItem, EntityType type);

		void Remove(std::shared_ptr<DatabaseItem> dbItem, EntityType type);
		void RemovePed(int index);
		void RemoveVehicle(int index);
		void RemoveObject(int index);
		void RemoveAndDeleteAll();

		std::vector<std::shared_ptr<PedDatabaseItem>> peds;
		std::vector<std::shared_ptr<VehicleDatabaseItem>> vehicles;
		std::vector<std::shared_ptr<ObjectDatabaseItem>> objects;
	};

}
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

namespace Spawner {

#pragma region Types

	class DatabaseItem {
	public:
		DatabaseItem(std::string model)
			: model(model) 
		{}

		std::string model;
	};

	class PedDatabaseItem
		: public DatabaseItem {
	public:
		PedDatabaseItem(Ped ped, std::string model)
			: DatabaseItem(model), ped(ped) {}

		Ped ped;
	};

	class VehicleDatabaseItem
		: public DatabaseItem {
	public:
		VehicleDatabaseItem(Vehicle vehicle, std::string model)
			: DatabaseItem(model), vehicle(vehicle) {}

		Vehicle vehicle;
	};

	class ObjectDatabaseItem
		: public DatabaseItem {
	public:
		ObjectDatabaseItem(Object object, std::string model)
			: DatabaseItem(model), object(object) {}

		Object object;
	};

#pragma endregion

	class Database
	{
	public:
		Database();

		void Add(EntityId entityId, EntityType type, std::string model);
		int AddPed(Ped ped, std::string model);
		int AddVehicle(Vehicle vehicle, std::string model);
		int AddObject(Object object, std::string model);

		void RemovePed(int index);
		void RemoveVehicle(int index);
		void RemoveObject(int index);

		std::vector<std::shared_ptr<PedDatabaseItem>> peds;
		std::vector<std::shared_ptr<VehicleDatabaseItem>> vehicles;
		std::vector<std::shared_ptr<ObjectDatabaseItem>> objects;
	};

}
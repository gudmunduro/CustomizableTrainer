/*
* Customizable Trainer
* Copyright (C) 2020  Gu�mundur �li
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "Spawner.h"

namespace Spawner {

#pragma region Database

#pragma region Add

	void Database::AddObject(Object object)
	{
		objects.push_back(object);
	}

	void Database::AddVehicle(Vehicle vehicle)
	{
		vehicles.push_back(vehicle);
	}

	void Database::AddPed(Ped ped)
	{
		peds.push_back(ped);
	}

#pragma endregion

#pragma region Spawn

	void Database::SpawnObject(Hash model, Vector3 position, float rotation)
	{
		auto objectId = OBJECT::CREATE_OBJECT(model, position.x, position.y, position.z, false, true, false, 0, 0);
		AddObject(objectId);
	}

	void Database::SpawnVehicle(Hash model, Vector3 position, float rotation)
	{
		auto vehicle = Vehicle::Spawn(model, position, rotation);
		AddVehicle(vehicle);
	}

	void Database::SpawnPed(Hash model, Vector3 position, float rotation)
	{
		auto ped = Ped::Create(model, position, rotation);
		AddPed(ped);
	}

#pragma endregion

#pragma endregion

#pragma region Camera

#pragma endregion

}
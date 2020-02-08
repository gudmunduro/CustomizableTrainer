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
		auto ped = Ped::Spawn(model, position, rotation);
		AddPed(ped);
	}

#pragma endregion

#pragma endregion

#pragma region Camera

#pragma endregion

}
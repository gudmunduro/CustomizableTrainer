#include "pch.h"
#include "Database.h"

namespace Spawner {

	Database::Database()
	{}

#pragma region Add

	void Database::Add(EntityId entityId, EntityType type, std::string model)
	{
		switch (type) {
			case EntityType::Ped:
				AddPed(Ped(entityId), model);
				break;
			case EntityType::Vehicle:
				AddVehicle(Vehicle(entityId), model);
				break;
			case EntityType::Object:
				AddObject(Object(entityId), model);
				break;
		}
	}

	int Database::AddPed(Ped ped, std::string model)
	{
		auto dbItem = std::make_shared<PedDatabaseItem>(ped, model);
		peds.push_back(dbItem);
		return peds.size() - 1;
	}

	int Database::AddVehicle(Vehicle vehicle, std::string model)
	{
		auto dbItem = std::make_shared<VehicleDatabaseItem>(vehicle, model);
		vehicles.push_back(dbItem);
		return vehicles.size() - 1;
	}

	int Database::AddObject(Object object, std::string model)
	{
		auto dbItem = std::make_shared<ObjectDatabaseItem>(object, model);
		objects.push_back(dbItem);
		return objects.size() - 1;
	}

#pragma endregion

#pragma region Remove

	void Database::RemovePed(int index)
	{
		peds.erase(peds.begin() + index);
	}

	void Database::RemoveVehicle(int index)
	{
		vehicles.erase(vehicles.begin() + index);
	}

	void Database::RemoveObject(int index)
	{
		objects.erase(objects.begin() + index);
	}

#pragma endregion

}
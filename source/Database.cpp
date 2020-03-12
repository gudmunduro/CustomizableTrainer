#include "pch.h"
#include "Database.h"

namespace Spawner {

	Database::Database()
	{}

#pragma region Add

	int Database::Add(EntityId entityId, EntityType type, std::string model)
	{
		switch (type) {
			case EntityType::Ped:
				return AddPed(entityId, model);
			case EntityType::Vehicle:
				return AddVehicle(entityId, model);
			case EntityType::Object:
				return AddObject(entityId, model);
		}

		return 0;
	}

	int Database::AddPed(PedId ped, std::string model)
	{
		auto dbItem = std::make_shared<PedDatabaseItem>(ped, model);
		peds.push_back(dbItem);
		return peds.size() - 1;
	}

	int Database::AddVehicle(VehicleId vehicle, std::string model)
	{
		auto dbItem = std::make_shared<VehicleDatabaseItem>(vehicle, model);
		vehicles.push_back(dbItem);
		return vehicles.size() - 1;
	}

	int Database::AddObject(ObjectId object, std::string model)
	{
		auto dbItem = std::make_shared<ObjectDatabaseItem>(object, model);
		objects.push_back(dbItem);
		return objects.size() - 1;
	}

	int Database::AddPedRaw(std::shared_ptr<PedDatabaseItem> dbItem)
	{
		peds.push_back(dbItem);
		return peds.size() - 1;
	}

	int Database::AddVehicleRaw(std::shared_ptr<VehicleDatabaseItem> dbItem)
	{
		vehicles.push_back(dbItem);
		return vehicles.size() - 1;
	}

	int Database::AddObjectRaw(std::shared_ptr<ObjectDatabaseItem> dbItem)
	{
		objects.push_back(dbItem);
		return objects.size() - 1;
	}

#pragma endregion

#pragma region Remove

	void Database::RemoveAndDelete(std::shared_ptr<DatabaseItem> dbItem, EntityType type)
	{
		switch (type) {
		case EntityType::Ped:
			Ped(dbItem->entityId).Delete();
			break;
		case EntityType::Vehicle:
			Vehicle(dbItem->entityId).Delete();
			break;
		case EntityType::Object:
			Object(dbItem->entityId).Delete();
		}
		Remove(dbItem, type);
	}

	void Database::Remove(std::shared_ptr<DatabaseItem> dbItem, EntityType type)
	{
		switch (type) {
			case EntityType::Ped: {
				auto pos = std::find(peds.begin(), peds.end(), dbItem) - peds.begin();
				if (pos < peds.size()) RemovePed(pos);
				break;
			}
			case EntityType::Vehicle: {
				auto pos = std::find(vehicles.begin(), vehicles.end(), dbItem) - vehicles.begin();
				if (pos < vehicles.size()) RemoveVehicle(pos);
				break;
			}
			case EntityType::Object: {
				auto pos = std::find(objects.begin(), objects.end(), dbItem) - objects.begin();
				if (pos < objects.size()) RemoveObject(pos);
				break;
			}
		}
	}

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

	void Database::RemoveAndDeleteAll()
	{
		for (int i = 0; i < peds.size(); i++) {
			Ped(peds[i]->entityId).Delete();
		}
		for (int i = 0; i < vehicles.size(); i++) {
			Vehicle(vehicles[i]->entityId).Delete();
		}
		for (int i = 0; i < objects.size(); i++) {
			Object(objects[i]->entityId).Delete();
		}

		peds.clear();
		vehicles.clear();
		objects.clear();
	}

#pragma endregion

}
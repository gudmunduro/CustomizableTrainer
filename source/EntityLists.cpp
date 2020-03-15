#include "pch.h"
#include "EntityLists.h"
#include "JsonData.h"

void EntityLists::LoadAll()
{
	weapons = JSONData::GetWeapons();
	vehicles = JSONData::GetVehicles();
	peds = JSONData::GetPeds();
	objects = JSONData::GetObjects();
}

std::optional<std::string> EntityLists::GetStringValueForPedModel(Hash model)
{
	for (auto&& pedCat : peds) {
		for (auto&& pedSubCat : pedCat.second) {
			for (auto&& ped : pedSubCat.second) {
				if (String::Hash(ped.model) == model)
					return ped.model;
			}
		}
	}

	return std::nullopt;
}

std::optional<std::string> EntityLists::GetStringValueForVehicleModel(Hash model)
{
	for (auto&& vehicleCat : vehicles) {
		for (auto&& vehicle : vehicleCat.second) {
			if (String::Hash(vehicle.model) == model)
				return vehicle.model;
		}
	}

	return std::nullopt;
}

std::optional<std::string> EntityLists::GetStringValueForObjectModel(Hash model)
{
	for (auto&& objectCat : objects) {
		for (auto&& object : objectCat.second) {
			if (String::Hash(object.model) == model)
				return object.model;
		}
	}
	
	return std::nullopt;
}
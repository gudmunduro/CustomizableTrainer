#pragma once
#include "pch.h"

class EntityLists
{
public:
	static inline std::vector<std::pair<std::string, std::vector<WeaponData>>> weapons;
	static inline std::vector<std::pair<std::string, std::vector<VehicleData>>> vehicles;
	static inline std::map<std::string, std::vector<std::pair<std::string, std::vector<PedData>>>> peds;
	static inline std::vector<std::pair<std::string, std::vector<ObjectData>>> objects;

	static void LoadAll();
	static std::optional<std::string> GetStringValueForPedModel(Hash model);
	static std::optional<std::string> GetStringValueForVehicleModel(Hash model);
	static std::optional<std::string> GetStringValueForObjectModel(Hash model);
};


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
};


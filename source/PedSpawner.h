#pragma once
#include "pch.h"
#include "Ped.h"

class SpawnerPed
{
public:
	inline SpawnerPed(string name, Ped ped) : name(name), ped(ped) {};
	string name;
	Ped ped;
};

class PedSpawner
{
public:
	static void Spawn(Hash model);
	static void Spawn(string model);

	static SpawnerPed CurrentPed();

	static inline int currentPedIndex = 0;
	static inline std::vector<SpawnerPed> peds;
};


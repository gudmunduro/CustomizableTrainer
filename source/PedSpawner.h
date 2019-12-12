#pragma once
#include "pch.h"
#include "Ped.h"

class SpawnerPed
{
public:
	inline SpawnerPed(string name, Ped ped) : name(name), ped(ped) {};
	string name;
	Ped ped;
	bool isBodyGuard = false;
	bool isInvincible = false;
};

class PedSpawner
{
public:
	static void Spawn(string name, string model);

	static void SetCurrentPedIndex(int index);

	static bool IsAnyPedSelected();

	static Ped CurrentPed();
	static std::shared_ptr<SpawnerPed> CurrentPedData();

	static void Delete(int index);
	static void DeleteCurrent();

	static inline int currentPedIndex = -1;
	static inline std::vector<std::shared_ptr<SpawnerPed>> peds;
};


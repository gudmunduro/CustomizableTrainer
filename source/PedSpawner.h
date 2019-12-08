#pragma once
#include "pch.h"

class PedSpawner
{
public:
	static void Spawn(Hash model);
	static void Spawn(string model);

	static Ped CurrentPed();

	static inline int currentPedIndex;
	static inline std::vector<Ped> peds;
};


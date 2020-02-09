/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "PedSpawner.h"
#include "Toggles.h"
#include "Routine.h"

void PedSpawner::Spawn(string name, string model)
{
	Player player;
	auto modelHash = String::Hash(model);
	auto spawnPosition = player.OffsetInWorldCoords({ 0.0, 2.0, 0.0 });
	auto heading = player.Heading() + 180.0f;

	auto ped = Ped::Spawn(modelHash, spawnPosition, heading);

	peds.push_back(std::make_shared<SpawnerPed>(SpawnerPed(name, ped)));
}

void PedSpawner::SetCurrentPedIndex(int index)
{
	currentPedIndex = index;

	Toggles::spawnedPedBodyguard = CurrentPedData()->isBodyGuard;
	Toggles::spawnedPedInvincible = CurrentPedData()->isInvincible;
}

bool PedSpawner::IsAnyPedSelected()
{
	return currentPedIndex != -1;
}

Ped PedSpawner::CurrentPed()
{
	return peds[currentPedIndex]->ped;
}

std::shared_ptr<SpawnerPed> PedSpawner::CurrentPedData()
{
	return peds[currentPedIndex];
}

void PedSpawner::Delete(int index)
{
	peds[index]->ped.Delete();
	peds.erase(peds.begin() + index);
}

void PedSpawner::DeleteCurrent()
{
	Delete(currentPedIndex);
	currentPedIndex = -1;
}
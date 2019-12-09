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

	*Toggles::spawnedPedBodyguard = CurrentPedData()->isBodyGuard;
	*Toggles::spawnedPedInvincible = CurrentPedData()->isInvincible;
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

void PedSpawner::DeleteCurrent()
{
	CurrentPed().Delete();
	peds.erase(peds.begin() + currentPedIndex);
	currentPedIndex = -1;
}
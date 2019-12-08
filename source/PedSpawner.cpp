#include "pch.h"
#include "PedSpawner.h"

void PedSpawner::Spawn(Hash model)
{
	Game::RequestModel(model);

}

void PedSpawner::Spawn(string model)
{
	Spawn(String::Hash(model));
}

Ped PedSpawner::CurrentPed()
{
	return peds[currentPedIndex];
}

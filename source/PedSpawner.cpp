#include "pch.h"
#include "PedSpawner.h"

void PedSpawner::Spawn(Hash model)
{
	Player player;
	Vector3 spawnPosition = player.GetOffsetInWorldCoords({ 0.0, 2.0, 0.0 });
	float heading = player.GetHeading() + 180.0f;

	Ped::Spawn(model, spawnPosition, heading);
}

void PedSpawner::Spawn(string model)
{
	Spawn(String::Hash(model));
}

Ped PedSpawner::CurrentPed()
{
	return peds[currentPedIndex];
}

#include "pch.h"
#include "PedManager.h"

PedManager::PedManager(Ped pedId)
{
	this->pedId = pedId;
}

void PedManager::SetHealth(int health)
{
	ENTITY::SET_ENTITY_HEALTH(pedId, health, false);
}

int PedManager::GetMaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(pedId, false);
}

// MARK: Getters
PedManager PedManager::WithPlayerPed()
{
	return PedManager(PLAYER::PLAYER_PED_ID());
}
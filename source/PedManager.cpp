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

// Getters
int PedManager::GetMaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(pedId, false);
}

Vector3 PedManager::GetPosition()
{
	return ENTITY::GET_ENTITY_COORDS(pedId, true, false);
}

float PedManager::GetHeading()
{
	return ENTITY::GET_ENTITY_HEADING(pedId);
}

Vehicle PedManager::GetCurrentVehicle()
{
	return PED::GET_VEHICLE_PED_IS_IN(pedId, false);
}

// MARK: Getters
PedManager PedManager::WithPlayerPed()
{
	return PedManager(Game::playerPedId);
}
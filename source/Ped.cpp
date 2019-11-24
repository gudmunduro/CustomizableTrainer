#include "pch.h"
#include "Ped.h"

Ped::Ped(PedId pedId)
{
	this->pedId = pedId;
}

void Ped::SetHealth(int health)
{
	ENTITY::SET_ENTITY_HEALTH(pedId, health, false);
}

void Ped::SetVisible(bool visible)
{
	ENTITY::SET_ENTITY_VISIBLE(pedId, visible);
}

void Ped::SetIntoVehicle(VehicleId vehicle, int seat) 
{
	PED::SET_PED_INTO_VEHICLE(pedId, vehicle, seat);
}

// MARK: Booleans
bool Ped::IsInVehicle()
{
	return PED::IS_PED_IN_ANY_VEHICLE(pedId, true);
}

// Getters
PedId Ped::GetPedId()
{
	return pedId;
}

int Ped::GetMaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(pedId, false);
}

Vector3 Ped::GetPosition()
{
	return ENTITY::GET_ENTITY_COORDS(pedId, true, false);
}

float Ped::GetHeading()
{
	return ENTITY::GET_ENTITY_HEADING(pedId);
}

Vehicle Ped::GetCurrentVehicle()
{
	VehicleId currentVehicleId = PED::GET_VEHICLE_PED_IS_IN(pedId, false);
	return Vehicle(currentVehicleId);
}

// MARK: 
Ped Ped::PlayerPed()
{
	return Ped(Game::playerPedId);
}
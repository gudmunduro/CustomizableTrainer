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

void Ped::SetCoords(Vector3 coords) 
{
	ENTITY::SET_ENTITY_COORDS(pedId, coords.x, coords.y, coords.z, false, false, false, true);
}

void Ped::SetStamina(float stamina)
{
	PED::SET_PED_STAMINA(pedId, stamina);
}

void Ped::SetInvincible(bool invincible)
{
	ENTITY::SET_ENTITY_INVINCIBLE(pedId, invincible);
}

void Ped::ClearWetness()
{
	PED::CLEAR_PED_WETNESS(pedId);
}

void Ped::GiveWeapon(Hash model)
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(pedId, model, 9999, true, 0x2cd419dc);
}

// MARK: Booleans
bool Ped::IsInVehicle()
{
	return PED::IS_PED_IN_ANY_VEHICLE(pedId, true);
}

bool Ped::IsOnMount()
{
	return PED::IS_PED_ON_MOUNT(pedId);
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

Vector3 Ped::GetOffsetInWorldCoords(Vector3 offset)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedId, offset.x, offset.y, offset.z);
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

Ped Ped::GetMount()
{
	return PED::GET_MOUNT(pedId);
}

// MARK: Static functions
Ped Ped::Spawn(Hash model, Vector3 position, float heading)
{
	Game::RequestModel(model);
	PedId pedId = PED::CREATE_PED(model, position.x, position.y, position.z, heading, false, false, false, false);
	Ped ped = Ped(pedId);
	ped.SetVisible(true);
	return ped;
}
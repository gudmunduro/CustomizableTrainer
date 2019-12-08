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

void Ped::SetPedVisible(bool visible)
{
	PED::SET_PED_VISIBLE(pedId, visible);
}

void Ped::SetIntoVehicle(VehicleId vehicle, int seat) 
{
	PED::SET_PED_INTO_VEHICLE(pedId, vehicle, seat);
}

void Ped::SetCoords(Vector3 coords) 
{
	ENTITY::SET_ENTITY_COORDS(pedId, coords.x, coords.y, coords.z, false, false, false, true);
}

void Ped::SetCoordsNoOffset(Vector3 coords, bool xAxis, bool yAxis, bool zAxis)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedId, coords.x, coords.y, coords.z, xAxis, yAxis, zAxis);
}

void Ped::SetStamina(float stamina)
{
	PED::SET_PED_STAMINA(pedId, stamina);
}

void Ped::SetInvincible(bool invincible)
{
	ENTITY::SET_ENTITY_INVINCIBLE(pedId, invincible);
}

void Ped::SetIntoClosestVehicle()
{
	auto playerLocation = Position();
	auto closestVehicle = Vehicle::Closest(playerLocation);

	if (closestVehicle.Exists()) {
		SetIntoVehicle(closestVehicle.GetVehicleId());
	}
}

void Ped::SetCanRagdoll(bool toggle)
{
	PED::SET_PED_CAN_RAGDOLL(pedId, toggle);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedId, toggle);
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
PedId Ped::Id()
{
	return pedId;
}

int Ped::MaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(pedId, false);
}

Vector3 Ped::Position()
{
	return ENTITY::GET_ENTITY_COORDS(pedId, true, false);
}

Vector3 Ped::OffsetInWorldCoords(Vector3 offset)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedId, offset.x, offset.y, offset.z);
}

float Ped::Heading()
{
	return ENTITY::GET_ENTITY_HEADING(pedId);
}

Vehicle Ped::CurrentVehicle()
{
	VehicleId currentVehicleId = PED::GET_VEHICLE_PED_IS_IN(pedId, false);
	return Vehicle(currentVehicleId);
}

Ped Ped::Mount()
{
	return PED::GET_MOUNT(pedId);
}

Hash Ped::Model()
{
	return ENTITY::GET_ENTITY_MODEL(pedId);
}

// MARK: Static methods
Ped Ped::Spawn(Hash model, Vector3 position, float heading)
{
	Game::RequestModel(model);
	PedId pedId = PED::CREATE_PED(model, position.x, position.y, position.z, heading, false, false, false, false);
	Ped ped = Ped(pedId);
	ped.SetPedVisible(true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
	return ped;
}
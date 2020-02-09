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
#include "Ped.h"

Ped::Ped(PedId pedId)
{
	this->id = pedId;
}

#pragma region Setters

void Ped::SetHealth(int health)
{
	ENTITY::SET_ENTITY_HEALTH(id, health, false);
}

void Ped::SetVisible(bool visible)
{
	ENTITY::SET_ENTITY_VISIBLE(id, visible);
}

void Ped::SetPedVisible(bool visible)
{
	PED::SET_PED_VISIBLE(id, visible);
}

void Ped::SetIntoVehicle(VehicleId vehicle, int seat) 
{
	PED::SET_PED_INTO_VEHICLE(id, vehicle, seat);
}

void Ped::SetCoords(Vector3 coords) 
{
	ENTITY::SET_ENTITY_COORDS(id, coords.x, coords.y, coords.z, false, false, false, true);
}

void Ped::SetCoordsNoOffset(Vector3 coords, bool xAxis, bool yAxis, bool zAxis)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(id, coords.x, coords.y, coords.z, xAxis, yAxis, zAxis);
}

void Ped::SetStamina(float stamina)
{
	PED::SET_PED_STAMINA(id, stamina);
}

void Ped::SetInvincible(bool invincible)
{
	ENTITY::SET_ENTITY_INVINCIBLE(id, invincible);
}

void Ped::SetIntoClosestVehicle()
{
	auto playerLocation = Position();
	auto closestVehicle = Vehicle::Closest(playerLocation);

	if (closestVehicle.Exists()) {
		SetIntoVehicle(closestVehicle.Id());
	}
}

void Ped::SetCanRagdoll(bool toggle)
{
	PED::SET_PED_CAN_RAGDOLL(id, toggle);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(id, toggle);
}

void Ped::SetAsGroupMember(int group)
{
	PED::SET_PED_AS_GROUP_MEMBER(id, group);
}

void Ped::SetCurrentWeapon(Hash model)
{
	WEAPON::SET_CURRENT_PED_WEAPON(id, model, true, 0, false, false);
}

void Ped::SetAmmo(Hash weapon, int ammo)
{
	WEAPON::SET_PED_AMMO(id, weapon, ammo);
}

void Ped::SetAmmoByType(Hash type, int ammo)
{
	WEAPON::SET_PED_AMMO_BY_TYPE(id, type, ammo);
}

void Ped::SetCanBeKnockedOffVehicle(int state)
{
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(id, state);
}

#pragma endregion

#pragma region Booleans

bool Ped::IsInVehicle(bool atGetIn)
{
	return PED::IS_PED_IN_ANY_VEHICLE(id, atGetIn);
}

bool Ped::IsOnMount()
{
	return PED::IS_PED_ON_MOUNT(id);
}

bool Ped::IsOnFoot()
{
	return PED::IS_PED_ON_FOOT(id);
}

bool Ped::IsShooting()
{
	return PED::IS_PED_SHOOTING(id);
}

bool Ped::HasWeapon(Hash weaponHash)
{
	return WEAPON::HAS_PED_GOT_WEAPON(id, weaponHash, 0, 0);
}

#pragma endregion

#pragma region Actions

void Ped::SetAsMissionEntity()
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(id, true, false);
}

void Ped::RemoveFromGroup()
{
	PED::REMOVE_PED_FROM_GROUP(id);
}

void Ped::ClearWetness()
{
	PED::CLEAR_PED_WETNESS(id);
}

void Ped::GiveWeapon(Hash model)
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(id, model, 9999, true, 0x2cd419dc);
}

void Ped::RemoveWeapon(Hash model)
{
	WEAPON::REMOVE_WEAPON_FROM_PED(id, model, true, -142743235);
}

void Ped::RemoveAllWeapons()
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(id, true, true);
}

void Ped::Delete()
{
	PED::DELETE_PED(&id);
}

#pragma endregion

#pragma region Getters

int Ped::MaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(id, false);
}

Vector3 Ped::Position()
{
	return ENTITY::GET_ENTITY_COORDS(id, true, false);
}

Vector3 Ped::OffsetInWorldCoords(Vector3 offset)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(id, offset.x, offset.y, offset.z);
}

float Ped::Heading()
{
	return ENTITY::GET_ENTITY_HEADING(id);
}

Vehicle Ped::CurrentVehicle()
{
	VehicleId currentVehicleId = PED::GET_VEHICLE_PED_IS_IN(id, false);
	return Vehicle(currentVehicleId);
}

Ped Ped::Mount()
{
	return PED::GET_MOUNT(id);
}

Hash Ped::Model()
{
	return ENTITY::GET_ENTITY_MODEL(id);
}

#pragma endregion

#pragma region Static methods

Ped Ped::Create(Hash model, Vector3 position, float heading)
{
	Game::RequestModel(model);
	PedId pedId = PED::CREATE_PED(model, position.x, position.y, position.z, heading, false, false, false, false);
	Ped ped = Ped(pedId);
	ped.SetPedVisible(true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
	return ped;
}

#pragma endregion

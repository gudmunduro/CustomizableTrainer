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
#include "EntityLists.h"

Ped::Ped(PedId pedId)
	: Entity(pedId)
{}

#pragma region Setters

void Ped::SetPedVisible(bool visible)
{
	PED::SET_PED_VISIBLE(id, visible);
}

void Ped::SetIntoVehicle(VehicleId vehicle, int seat) 
{
	PED::SET_PED_INTO_VEHICLE(id, vehicle, seat);
}

void Ped::SetStamina(float stamina)
{
	PED::SET_PED_STAMINA(id, stamina);
}

void Ped::SetIntoClosestVehicle()
{
	auto playerLocation = Position();
	auto closestVehicle = Vehicle::Closest(playerLocation);

	if (closestVehicle.Exists()) {
		SetIntoVehicle(closestVehicle.id);
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

bool Ped::IsPlayer()
{
	return PED::IS_PED_A_PLAYER(id);
}

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
	SetAsMissionEntity();
	PED::DELETE_PED(&id);
}

Ped Ped::Clone()
{
	return Ped(PED::CLONE_PED(id, Heading(), false, false));
}

#pragma endregion

#pragma region Getters

Vehicle Ped::CurrentVehicle()
{
	VehicleId currentVehicleId = PED::GET_VEHICLE_PED_IS_IN(id, false);
	return Vehicle(currentVehicleId);
}

Ped Ped::Mount()
{
	return PED::GET_MOUNT(id);
}

std::optional<std::string> Ped::ModelName()
{
	return EntityLists::GetStringValueForPedModel(Model());
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

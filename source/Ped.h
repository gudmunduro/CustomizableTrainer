/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"
#include "Vehicle.h"

class Ped
{
public:
	Ped(int pedId);

#pragma region Setters

	void SetHealth(int health);
	void SetVisible(bool visible);
	void SetPedVisible(bool visible);
	void SetIntoVehicle(VehicleId vehicle, int seat = -1);
	void SetCoords(Vector3 coords);
	void SetCoordsNoOffset(Vector3 coords, bool xAxis = false, bool yAxis = false, bool zAxis = true);
	void SetStamina(float stamina);
	void SetInvincible(bool invincible);
	void SetIntoClosestVehicle();
	void SetCanRagdoll(bool toggle);
	void SetAsGroupMember(int group);
	void SetCurrentWeapon(Hash model);
	void SetAmmo(Hash weapon, int ammo);
	void SetAmmoByType(Hash type, int ammo);
	void SetCanBeKnockedOffVehicle(int state);

#pragma endregion

#pragma region Booleans

	bool IsInVehicle(bool atGetIn = true);
	bool IsOnMount();
	bool IsOnFoot();
	bool IsShooting();
	bool HasWeapon(Hash weaponHash);

#pragma endregion

#pragma region Getters

	int MaxHealth();
	Vector3 Position();
	Vector3 OffsetInWorldCoords(Vector3 offset);
	float Heading();
	Vehicle CurrentVehicle();
	Ped Mount();
	Hash Model();

#pragma endregion

#pragma region Actions

	void SetAsMissionEntity();

	void RemoveFromGroup();
	void ClearWetness();
	void GiveWeapon(Hash model);
	void RemoveWeapon(Hash model);
	void RemoveAllWeapons();
	void Delete();

#pragma endregion

#pragma region Static methods

	static Ped Create(Hash model, Vector3 position, float heading = 0);

#pragma endregion

#pragma region Variables

PedId id;

#pragma endregion

};


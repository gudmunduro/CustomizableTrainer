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
#include "Vehicle.h"
#include "Game.h"

Vehicle::Vehicle(VehicleId vehicleId)
	: Entity(vehicleId)
{}

#pragma region Booleans

bool Vehicle::IsBoat()
{
	return VEHICLE::IS_THIS_MODEL_A_BOAT(Model());
}

#pragma endregion

#pragma region Getters

#pragma endregion

#pragma region Setters

void Vehicle::SetVehicleEngineOn(bool on)
{
	VEHICLE::SET_VEHICLE_ENGINE_ON(id, on, true);
}

void Vehicle::SetEnginePowerMultiplier(float value)
{
	VEHICLE::_SET_VEHICLE_ENGINE_POWER_MULTIPLIER(id, value);
}

void Vehicle::SetForwardSpeed(float speed)
{
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(id, speed);
}

#pragma endregion

#pragma region Actions

void Vehicle::Repair()
{
	VEHICLE::SET_VEHICLE_FIXED(id);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(id, 0.0f);
}

void Vehicle::Delete()
{
	SetAsMissionEntity();
	VEHICLE::DELETE_VEHICLE(&id);
}

#pragma endregion

#pragma region Static methods

Vehicle Vehicle::Closest(Vector3 position, float radius)
{
	return Vehicle(VEHICLE::GET_CLOSEST_VEHICLE(position.x, position.y, position.z, radius, 0, 70));
}

Vehicle Vehicle::Spawn(Hash model, Vector3 postion, float heading)
{
	Game::RequestModel(model);
	VehicleId vehicleId = VEHICLE::CREATE_VEHICLE(model, postion.x, postion.y, postion.z, heading, false, false, false, false);
	DECORATOR::DECOR_SET_BOOL(vehicleId, "wagon_block_honor", true);
	return Vehicle(vehicleId);
}

#pragma endregion
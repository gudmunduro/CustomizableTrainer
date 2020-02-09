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
{
	this->vehicleId = vehicleId;
}

#pragma region Booleans

bool Vehicle::Exists()
{
	return vehicleId != 0 && ENTITY::DOES_ENTITY_EXIST(vehicleId);
}

bool Vehicle::IsBoat()
{
	return VEHICLE::IS_THIS_MODEL_A_BOAT(Model());
}

#pragma endregion

#pragma region Getters

VehicleId Vehicle::GetVehicleId()
{
	return vehicleId;
}

Vector3 Vehicle::OffsetInWorldCoords(Vector3 offset)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vehicleId, offset.x, offset.y, offset.z);
}

Hash Vehicle::Model()
{
	return ENTITY::GET_ENTITY_MODEL(vehicleId);
}

float Vehicle::Speed()
{
	return ENTITY::GET_ENTITY_SPEED(vehicleId);
}

void Vehicle::Dimensions(Vector3 *dim1, Vector3 *dim2)
{
	Vector3 dimensions1, dimensions2;
	GAMEPLAY::GET_MODEL_DIMENSIONS(Model(), &dimensions1, &dimensions2);
	dimensions1.x = abs(dimensions1.x); dimensions2.x = abs(dimensions2.x);
	dimensions1.y = abs(dimensions1.y); dimensions2.y = abs(dimensions2.y);
	dimensions1.z = abs(dimensions1.z); dimensions2.z = abs(dimensions2.z);
}

#pragma endregion

#pragma region Setters

void Vehicle::SetAsMissionEntity()
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vehicleId, true, false);
}

void Vehicle::SetVehicleEngineOn(bool on)
{
	VEHICLE::SET_VEHICLE_ENGINE_ON(vehicleId, on, true);
}

void Vehicle::SetEnginePowerMultiplier(float value)
{
	VEHICLE::_SET_VEHICLE_ENGINE_POWER_MULTIPLIER(vehicleId, value);
}

void Vehicle::SetForwardSpeed(float speed)
{
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehicleId, speed);
}

void Vehicle::SetCoords(Vector3 coords)
{
	ENTITY::SET_ENTITY_COORDS(vehicleId, coords.x, coords.y, coords.z, false, false, false, true);
}

void Vehicle::SetCoordsNoOffset(Vector3 coords, bool xAxis, bool yAxis, bool zAxis)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vehicleId, coords.x, coords.y, coords.z, xAxis, yAxis, zAxis);
}

void Vehicle::SetVisible(bool value)
{
	ENTITY::SET_ENTITY_VISIBLE(vehicleId, value);
}

void Vehicle::SetInvincible(bool value)
{
	ENTITY::SET_ENTITY_INVINCIBLE(vehicleId, value);
}

void Vehicle::ApplyForceRelative(Vector3 direction, Vector3 offset)
{
	ENTITY::APPLY_FORCE_TO_ENTITY(vehicleId, 1, direction.x, direction.y, direction.z, offset.x, offset.y, offset.z, false, true, true, true, false, true);
}

void Vehicle::Repair()
{
	VEHICLE::SET_VEHICLE_FIXED(vehicleId);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(vehicleId, 0.0f);
}

void Vehicle::Delete()
{
	SetAsMissionEntity();
	VEHICLE::DELETE_VEHICLE(&vehicleId);
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
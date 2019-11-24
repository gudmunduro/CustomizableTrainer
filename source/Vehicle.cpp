#include "pch.h"
#include "Vehicle.h"
#include "Game.h"

Vehicle::Vehicle(VehicleId vehicleId)
{
	this->vehicleId = vehicleId;
}

// MARK: Booleans
bool Vehicle::Exists()
{
	return vehicleId != 0 && ENTITY::DOES_ENTITY_EXIST(vehicleId);
}

// Getters
VehicleId Vehicle::GetVehicleId()
{
	return vehicleId;
}

// MARK: Manage
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

// MARK:
Vehicle Vehicle::Spawn(Hash model, Vector3 postion, float heading)
{
	Game::RequestModel(model);
	VehicleId vehicleId = VEHICLE::CREATE_VEHICLE(model, postion.x + 3.0f, postion.y, postion.z, heading, false, false, false, false);
	return Vehicle(vehicleId);
}
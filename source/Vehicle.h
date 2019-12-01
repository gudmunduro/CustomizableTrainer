#pragma once
#include "pch.h"

class Vehicle
{
public:
	Vehicle(VehicleId vehicleId);
	bool Exists();
	VehicleId GetVehicleId();
	void SetAsMissionEntity();
	void SetVehicleEngineOn(bool on);
	void SetEnginePowerMultiplier(float value);
	void SetForwardSpeed(float speed);
	void SetCoords(Vector3 coords);
	void SetCoordsNoOffset(Vector3 coords, bool xAxis = false, bool yAxis = false, bool zAxis = true);
	void Repair();
	void Delete();
	static Vehicle Closest(Vector3 position, float radius = 100.0);
	static Vehicle Spawn(Hash model, Vector3 postion, float heading = 0.0f);
private:
	int vehicleId;
};


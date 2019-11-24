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
	void Repair();
	void Delete();
	static Vehicle Spawn(Hash model, Vector3 postion, float heading = 0.0f);
private:
	int vehicleId;
};


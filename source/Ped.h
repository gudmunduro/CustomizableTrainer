#pragma once
#include "pch.h"
#include "Vehicle.h"

class Ped
{
public:
	Ped(int pedId);
	void SetHealth(int health);
	void SetVisible(bool visible);
	void SetIntoVehicle(VehicleId vehicle, int seat = -1);
	// MARK: Booleans
	bool IsInVehicle();
	// MARK: Getters
	PedId GetPedId();
	int GetMaxHealth();
	Vector3 GetPosition();
	float GetHeading();
	Vehicle GetCurrentVehicle();

	// MARK: 
	static Ped PlayerPed();
private:
	int pedId;
};


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
	void SetCoords(Vector3 coords);
	// MARK: Booleans
	bool IsInVehicle();
	// MARK: Getters
	PedId GetPedId();
	int GetMaxHealth();
	Vector3 GetPosition();
	Vector3 GetOffsetInWorldCoords(Vector3 offset);
	float GetHeading();
	Vehicle GetCurrentVehicle();

	// MARK: 
	static Ped PlayerPed();
private:
	int pedId;
};


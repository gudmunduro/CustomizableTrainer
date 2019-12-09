#pragma once
#include "pch.h"
#include "Vehicle.h"

class Ped
{
public:
	Ped(int pedId);
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
	void SetAsMissionEntity();
	void SetAsGroupMember(int group);
	void RemoveFromGroup();
	void ClearWetness();
	void GiveWeapon(Hash model);
	void Delete();
	// MARK: Booleans
	bool IsInVehicle();
	bool IsOnMount();
	// MARK: Getters
	PedId Id();
	int MaxHealth();
	Vector3 Position();
	Vector3 OffsetInWorldCoords(Vector3 offset);
	float Heading();
	Vehicle CurrentVehicle();
	Ped Mount();
	Hash Model();
	// MARK: Static functions
	static Ped Spawn(Hash model, Vector3 position, float heading = 0);
private:
	int pedId;
};


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

class Vehicle
	: public Entity
{
public:
	Vehicle(VehicleId vehicleId);

#pragma region Booleans

	bool IsBoat();

#pragma endregion

#pragma region Getters

	std::optional<std::string> ModelName();

#pragma endregion

#pragma region Setters

	void SetVehicleEngineOn(bool on);
	void SetEnginePowerMultiplier(float value);
	void SetForwardSpeed(float speed);

#pragma endregion

#pragma region Actions

	void Repair();
	void Delete();

#pragma endregion

#pragma region Static methods

	static Vehicle Closest(Vector3 position, float radius = 100.0);
	static Vehicle Create(Hash model, Vector3 postion, float heading = 0.0f);

#pragma endregion

};


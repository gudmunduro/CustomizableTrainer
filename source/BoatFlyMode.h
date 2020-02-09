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

class BoatFlyMode
{
public:
	BoatFlyMode();

	void Accelerate();
	void Decelerate();
	void FlyUp();
	void UpDown(float force);
	void Turn(float force);

	void Yaw(float force);

	void RespondToControls();

	void DisableControls();

	void Tick();

private:
	float speed;
	Vehicle boat = Vehicle(0);
	Player player;
};


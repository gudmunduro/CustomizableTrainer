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


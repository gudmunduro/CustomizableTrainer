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
#include "BoatFlyMode.h"
#include "Controls.h"
#include "MenuSettings.h"

#pragma region Setup

BoatFlyMode::BoatFlyMode()
{
	auto model = String::Hash("rowboat");
	auto pos = player.ped.Position();
	auto heading = player.ped.Heading();

	if (player.ped.IsInVehicle() && !player.ped.CurrentVehicle().IsBoat()) {
		player.ped.CurrentVehicle().Delete();
	}

	if (!player.ped.IsInVehicle() || player.ped.IsInVehicle() && !player.ped.CurrentVehicle().IsBoat()) {
		boat = Vehicle::Create(model, pos, heading);
		player.ped.SetIntoVehicle(boat.id);
	}
	else {
		boat = player.ped.CurrentVehicle();
	}
	speed = boat.Speed();
}

#pragma endregion

#pragma region Fly

void BoatFlyMode::Accelerate()
{
	if (speed > 100.0f) return;
	speed += 1.0f;
}

void BoatFlyMode::Decelerate()
{
	if (speed < 0) return;
	speed -= 1.0f;
}

void BoatFlyMode::FlyUp()
{
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.id, 1, 0.0, 0.0, 0.6, /**/ -0.8, -2.4, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.id, 1, 0.0, 0.0, 0.6, /**/ 0.8, -2.4, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.id, 1, 0.0, 0.0, 0.6, /**/ -0.8, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.id, 1, 0.0, 0.0, 0.6, /**/ 0.8, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
}

void BoatFlyMode::UpDown(float force)
{
	boat.ApplyForceRelative({ 0, 0, force }, { 0, 1.0f, 0 });
}

void BoatFlyMode::Turn(float force)
{
	if (force < 0.0f) {
		boat.ApplyForceRelative({ 0, force, 0 }, { 2.0f, 0.2f, 0 });
	}
	else if (force > 0.0f) {
		boat.ApplyForceRelative({ 0, force, 0 }, { 2.0f, -0.2f, 0 });
	}
	/*if (force < 0.0f) {
		boat.ApplyForceRelative({ 1.0f, 0, -0.1f }, { force, 0, 0 });
	}
	else if (force > 0.0f) {
		boat.ApplyForceRelative({ -1.0f, 0, -0.1f }, { force, 0, 0 });
	}*/
}

void BoatFlyMode::Yaw(float force)
{
	//boat.ApplyForceRelative({ 0, 0, force }, { 1.0f, 1.0f, 0 });
	//boat.ApplyForceRelative({ 0, 0, force }, { 1.0f, -2.0f, 0 });
	Vector3 rotation = ENTITY::GET_ENTITY_ROTATION(boat.id, 2);
	
	rotation.y += force;

	ENTITY::SET_ENTITY_ROTATION(boat.id, rotation.x, rotation.y, rotation.z, 2, true);
}

#pragma endregion

#pragma region Controls

void BoatFlyMode::RespondToControls()
{
	DisableControls();

	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeAccelerate))
		Accelerate();
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeDecelerate))
		Decelerate();
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeYawRight))
		Yaw(0.8f);
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeYawLeft))
		Yaw(-0.8f);
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeUp))
		UpDown(0.4f);
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeDown))
		UpDown(-0.4f);
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeLeft))
		Turn(0.4f);
	if (Controls::IsFunctionControlPressed(FunctionControl::BoatFlyModeRight))
		Turn(-0.4f);

	if (Controls::IsUsingController()) {
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) > 0.0f) { // Down
			float force = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) / 2;
			UpDown(force);
		}
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) < 0.0f) { // Up
			float force = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) / 2;
			UpDown(force);
		}
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) > 0.0f) { // Right
			float force = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) / 2 * -1;
			Turn(force);
		}
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) < 0.0f) { // Left
			float force = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) / 2 * -1;
			Turn(force);
		}
	}
}

void BoatFlyMode::DisableControls()
{
	if (!Controls::IsUsingController()) return;

	Hash controlsToDisable[] = {
		Settings::Controls::Controller::BoatFlyModeAccelerate,
		Settings::Controls::Controller::BoatFlyModeDecelerate,
		Settings::Controls::Controller::BoatFlyModeFlyUp,
		XboxControl::INPUT_FRONTEND_AXIS_Y,
		XboxControl::INPUT_FRONTEND_AXIS_Y
	};

	for each (auto control in controlsToDisable) {
		CONTROLS::DISABLE_CONTROL_ACTION(0, control, true);
	}
}

#pragma endregion

void BoatFlyMode::Tick()
{
	if (player.ped.IsInVehicle() && player.ped.CurrentVehicle().IsBoat() && player.ped.CurrentVehicle().id != boat.id) {
		boat = player.ped.CurrentVehicle();
		speed = 1.0f;
	}

	if (boat.Exists()) boat.SetForwardSpeed(speed);

	if (!(player.ped.IsInVehicle() && player.ped.CurrentVehicle().id == boat.id)) return;

	RespondToControls();
	player.ped.SetCanBeKnockedOffVehicle(1);
}

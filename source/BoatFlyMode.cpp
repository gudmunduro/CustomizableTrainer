#include "pch.h"
#include "BoatFlyMode.h"
#include "ControlManager.h"
#include "MenuSettings.h"

// MARK: Setup

BoatFlyMode::BoatFlyMode()
{
	auto model = String::Hash("rowboat");
	auto pos = player.Position();
	auto heading = player.Heading();

	if (player.IsInVehicle() && !player.CurrentVehicle().IsBoat()) {
		player.CurrentVehicle().Delete();
	}

	if (!player.IsInVehicle() || player.IsInVehicle() && !player.CurrentVehicle().IsBoat()) {
		boat = Vehicle::Spawn(model, pos, heading);
		player.SetIntoVehicle(boat.GetVehicleId());
	}
	else {
		boat = player.CurrentVehicle();
	}
	speed = boat.Speed();
}

// MARK: Fly

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
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.GetVehicleId(), 1, 0.0, 0.0, 0.6, /**/ -0.8, -2.4, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.GetVehicleId(), 1, 0.0, 0.0, 0.6, /**/ 0.8, -2.4, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.GetVehicleId(), 1, 0.0, 0.0, 0.6, /**/ -0.8, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
	ENTITY::APPLY_FORCE_TO_ENTITY(boat.GetVehicleId(), 1, 0.0, 0.0, 0.6, /**/ 0.8, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
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
}

void BoatFlyMode::Yaw(float force)
{
	//boat.ApplyForceRelative({ 0, 0, force }, { 1.0f, 1.0f, 0 });
	//boat.ApplyForceRelative({ 0, 0, force }, { 1.0f, -2.0f, 0 });
	Vector3 rotation = ENTITY::GET_ENTITY_ROTATION(boat.GetVehicleId(), 2);
	
	rotation.y += force;

	ENTITY::SET_ENTITY_ROTATION(boat.GetVehicleId(), rotation.x, rotation.y, rotation.z, 2, true);
}


// MARK: Controls

void BoatFlyMode::RespondToControls()
{
	DisableControls();

	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeAccelerate))
		Accelerate();
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeDecelerate))
		Decelerate();
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeYawRight))
		Yaw(0.8f);
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeYawLeft))
		Yaw(-0.8f);
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeUp))
		UpDown(0.4f);
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeDown))
		UpDown(-0.4f);
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeLeft))
		Turn(0.4f);
	if (ControlManager::IsFunctionControlPressed(FunctionControl::BoatFlyModeRight))
		Turn(-0.4f);

	if (ControlManager::IsUsingController()) {
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
	if (!ControlManager::IsUsingController()) return;

	Hash controlsToDisable[] = {
		MenuSettings::ControllerBoatFlyModeAccelerate,
		MenuSettings::ControllerBoatFlyModeDecelerate,
		MenuSettings::ControllerBoatFlyModeFlyUp,
		XboxControl::INPUT_FRONTEND_AXIS_Y,
		XboxControl::INPUT_FRONTEND_AXIS_Y
	};

	for each (auto control in controlsToDisable) {
		CONTROLS::DISABLE_CONTROL_ACTION(0, control, true);
	}
}

// MARK: Main

void BoatFlyMode::Tick()
{
	if (!(player.IsInVehicle() && player.CurrentVehicle().IsBoat())) return;

	RespondToControls();
	player.SetCanBeKnockedOffVehicle(1);
	boat.SetForwardSpeed(speed);
}

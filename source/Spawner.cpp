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
#include "Spawner.h"
#include "Controls.h"
#include "CameraUtils.h"

namespace Spawner {

#pragma region Database

	// Add

	void Database::AddObject(Object object)
	{
		objects.push_back(object);
	}

	void Database::AddVehicle(Vehicle vehicle)
	{
		vehicles.push_back(vehicle);
	}

	void Database::AddPed(Ped ped)
	{
		peds.push_back(ped);
	}


	// Spawn

	void Database::SpawnObject(Hash model, Vector3 position, float rotation)
	{
		auto objectId = OBJECT::CREATE_OBJECT(model, position.x, position.y, position.z, false, true, false, 0, 0);
		AddObject(objectId);
	}

	void Database::SpawnVehicle(Hash model, Vector3 position, float rotation)
	{
		auto vehicle = Vehicle::Spawn(model, position, rotation);
		AddVehicle(vehicle);
	}

	void Database::SpawnPed(Hash model, Vector3 position, float rotation)
	{
		auto ped = Ped::Create(model, position, rotation);
		AddPed(ped);
	}

#pragma endregion Database

#pragma region Camera

	Camera::Camera()
	{
		Player player;
		auto playerPos = player.ped.Position();
		cam = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		nextPositionOffset = {0, 0, 0};
		nextRotationOffset = {0, 0, 0};
		CAM::SET_CAM_ACTIVE(cam, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_COORD(cam, playerPos.x, playerPos.y, playerPos.z);
	}

	Camera::~Camera()
	{
		CAM::SET_CAM_ACTIVE(cam, false);
		CAM::DESTROY_CAM(cam, false);
	}

	// Controls

	void Camera::RespondToMoveControls()
	{
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) > 0.0f) // Down
			nextPositionOffset.y -= CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) / 2;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) < 0.0f) // Up
			nextPositionOffset.y += CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_Y) / 2 * -1;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) > 0.0f) // Right
			nextPositionOffset.x += CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) / 2;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) < 0.0f) // Left
			nextPositionOffset.x -= CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, XboxControl::INPUT_FRONTEND_AXIS_X) / 2 * -1;
	}

	void Camera::RespondToRotateControls()
	{
		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_ud")) > 0.0f) // Down
			nextRotationOffset.x -= CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_ud")) * 3;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_ud")) < 0.0f) // Up
			nextRotationOffset.x += CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_ud")) * -3;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_lr")) > 0.0f) // Right
			nextRotationOffset.z += CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_lr")) * -3;

		if (CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_lr")) < 0.0f) // Left
			nextRotationOffset.z -= CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, String::Hash("input_look_lr")) * 3;
	}

	void Camera::RespondToControls()
	{
		CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
		RespondToMoveControls();
		RespondToRotateControls();
	}

	//

	void Camera::ResetValues()
	{
		nextRotationOffset = { 0, 0, 0 };
		nextPositionOffset = { 0, 0, 0 };
	}

	void Camera::UpdatePosition()
	{
		if (nextPositionOffset.x + nextPositionOffset.y + nextPositionOffset.z == 0) // If they are all zero
			return;
		Vector3 nextPosition = CameraUtils::GetOffsetFromCameraInWorldCoords(cam, nextPositionOffset);
		CAM::SET_CAM_COORD(cam, nextPosition.x, nextPosition.y, nextPosition.z);
	}

	void Camera::UpdateRotation()
	{
		if (nextRotationOffset.x + nextRotationOffset.y + nextRotationOffset.z == 0) // If they are all zero
			return;
		Vector3 currentRotation = CAM::GET_CAM_ROT(cam, 2);
		CAM::SET_CAM_ROT(cam, currentRotation.x + nextRotationOffset.x, currentRotation.y + nextRotationOffset.y, currentRotation.z + nextRotationOffset.z, 2);
	}

	void Camera::Tick()
	{
		ResetValues();
		RespondToControls();
		UpdatePosition();
		UpdateRotation();
	}

#pragma endregion

#pragma region Spawner

	// Setters

	void Spawner::SetFreeCamEnabled(bool enabled)
	{
		if (enabled == isFreeCamEnabled) return;
		isFreeCamEnabled = enabled;

		if (isFreeCamEnabled)
			camera = std::make_unique<Camera>();
		else
			camera = std::nullopt;
	}

	// Spawn

	void Spawner::ShowSelectedObjectOnGround()
	{
		
	}

	void Spawner::Tick()
	{
		if (isFreeCamEnabled && camera)
			camera.value()->Tick();
	}

#pragma endregion

}
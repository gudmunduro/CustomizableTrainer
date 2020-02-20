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
#include "Camera.h"
#include "CameraUtils.h"
#include "Raycast.h"

namespace Spawner {

#pragma region Camera

	FreeCam::FreeCam()
	{
		Player player;
		auto playerPos = player.ped.Position();
		cam = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		nextPositionOffset = {0, 0, 0};
		nextRotationOffset = {0, 0, 0};
		CAM::SET_CAM_ACTIVE(cam, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_COORD(cam, playerPos.x + 5.0f, playerPos.y, playerPos.z);
	}

	FreeCam::~FreeCam()
	{
		CAM::SET_CAM_ACTIVE(cam, false);
		CAM::DESTROY_CAM(cam, false);
	}

	// Controls

	void FreeCam::RespondToMoveControls()
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

	void FreeCam::RespondToRotateControls()
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

	void FreeCam::RespondToControls()
	{
		CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
		RespondToMoveControls();
		RespondToRotateControls();
	}

	//

	void FreeCam::ResetValues()
	{
		nextRotationOffset = { 0, 0, 0 };
		nextPositionOffset = { 0, 0, 0 };
	}

	void FreeCam::UpdatePosition()
	{
		if (nextPositionOffset.x + nextPositionOffset.y + nextPositionOffset.z == 0) // If they are all zero
			return;
		auto&& nextPosition = CameraUtils::GetOffsetFromCameraInWorldCoords(cam, nextPositionOffset);
		CAM::SET_CAM_COORD(cam, nextPosition.x, nextPosition.y, nextPosition.z);
	}

	void FreeCam::UpdateRotation()
	{
		if (nextRotationOffset.x + nextRotationOffset.y + nextRotationOffset.z == 0) // If they are all zero
			return;
		auto&& currentRotation = CAM::GET_CAM_ROT(cam, 2);
		CAM::SET_CAM_ROT(cam, currentRotation.x + nextRotationOffset.x, currentRotation.y + nextRotationOffset.y, currentRotation.z + nextRotationOffset.z, 2);
	}

	void FreeCam::Tick()
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

		if (isFreeCamEnabled) {
			camera = std::make_shared<FreeCam>();
			TaskQueue::AddTask("spawner", Tick);
		}
		else {
			camera = std::nullopt;
			TaskQueue::RemoveTask("spawner");
		}
	}

	void Spawner::SetEntityForSpawner(std::string model, EntityType type)
	{
		isSelectingEntityForSpawn = true;
		if (selectedEntityForSpawn != 0 && ENTITY::DOES_ENTITY_EXIST(selectedEntityForSpawn)) {
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(selectedEntityForSpawn, false, false);
			ENTITY::DELETE_ENTITY(&selectedEntityForSpawn);
			selectedEntityForSpawn = 0;
		}
		selectedEntityForSpawnModel = model;
		selectedEntityForSpawnType = type;
	}

	void Spawner::DisableSpawnerMode()
	{
		if (!isSelectingEntityForSpawn) return;
		isSelectingEntityForSpawn = false;
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(selectedEntityForSpawn, false, false);
		ENTITY::DELETE_ENTITY(&selectedEntityForSpawn);
	}

	// Booleans

	bool Spawner::IsFreeCamEnabled()
	{
		return isFreeCamEnabled;
	}

	// Spawn

	void Spawner::ShowSpawnerModePreview()
	{
		if (!camera) return;
		auto&& cam = (camera.value());
		auto&& pos = CAM::GET_CAM_COORD(cam->cam);
		auto&& dir = Camera::DirectionFromScreenCentre(cam->cam);

		auto&& result = RaycastResult::Raycast(pos, dir, 15000.0f, IntersectOptions::Map);

		if (result.DidHitAnything()) {
			auto&& hitPos = result.HitCoords();

			if (selectedEntityForSpawn == 0
				|| !ENTITY::DOES_ENTITY_EXIST(selectedEntityForSpawn)) {

				auto&& model = String::Hash(selectedEntityForSpawnModel);
				Game::RequestModel(model);

				switch (selectedEntityForSpawnType) {
				case EntityType::Object:
					selectedEntityForSpawn
						= OBJECT::CREATE_OBJECT(model, hitPos.x, hitPos.y, hitPos.z, false, false, false, false, false);
					break;
				case EntityType::Vehicle:
					selectedEntityForSpawn
						= VEHICLE::CREATE_VEHICLE(model, hitPos.x, hitPos.y, hitPos.z, 0, false, false, false, false);
					break;
				case EntityType::Ped:
					selectedEntityForSpawn
						= PED::CREATE_PED(model, hitPos.x, hitPos.y, hitPos.z, 0, false, false, false, false);
					break;
				}

				Game::SetModelAsNoLongerNeeded(model);
			}

			ENTITY::SET_ENTITY_COORDS(selectedEntityForSpawn, hitPos.x, hitPos.y, hitPos.z, false, false, false, false);
			ENTITY::SET_ENTITY_ALPHA(selectedEntityForSpawn, 150, false);
		}
	}

	void Spawner::SpawnSelectedEntity()
	{
		EntityId spawnedEntity;
		auto&& model = String::Hash(selectedEntityForSpawnModel);
		auto&& pos = ENTITY::GET_ENTITY_COORDS(selectedEntityForSpawn, true, false);
		Game::RequestModel(model);

		switch (selectedEntityForSpawnType) {
		case EntityType::Object:
			spawnedEntity
				= OBJECT::CREATE_OBJECT(model, pos.x, pos.y, pos.z, false, false, false, false, false);
			break;
		case EntityType::Vehicle:
			spawnedEntity
				= VEHICLE::CREATE_VEHICLE(model, pos.x, pos.y, pos.z, 0, false, false, false, false);
			break;
		case EntityType::Ped:
			spawnedEntity
				= PED::CREATE_PED(model, pos.x, pos.y, pos.z, 0, false, false, false, false);
			break;
		default:
			Game::PrintSubtitle("Error: Invalid entitiy type");
			return;
		}

		Game::SetModelAsNoLongerNeeded(model);

		database.push_back(DatabaseEntity(spawnedEntity, selectedEntityForSpawnType, selectedEntityForSpawnModel, ""));
	}

	//

	void Spawner::Tick()
	{
		if (isFreeCamEnabled && camera)
			camera.value()->Tick();

		if (isSelectingEntityForSpawn)
			ShowSpawnerModePreview();
	}

#pragma endregion

}
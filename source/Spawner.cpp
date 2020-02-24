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

#pragma region Setters

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

#pragma endregion

#pragma region Booleans

	bool Spawner::IsFreeCamEnabled()
	{
		return isFreeCamEnabled;
	}

#pragma endregion

#pragma region Spawn

	void Spawner::ShowSpawnerModePreview()
	{
		if (!camera) return;

		auto&& cam = (camera.value());
		auto&& pos = CAM::GET_CAM_COORD(cam->cam);
		auto&& rot = CAM::GET_CAM_ROT(cam->cam, 2);
		auto&& dir = Camera::DirectionFromScreenCentre(cam->cam);

		auto&& result = RaycastResult::Raycast(pos, dir, 100.0f, IntersectOptions::Everything);

		Vector3 nextPos;

		if (result.DidHitAnything()) {
			nextPos = result.HitCoords();
		}
		else { // Hit nothing
			Vector3 offset = { 0, 10.0, 0 };
			nextPos = CameraUtils::GetOffsetFromCameraInWorldCoords(camera.value()->cam, offset );
		}

		if (selectedEntityForSpawn == 0
			|| !ENTITY::DOES_ENTITY_EXIST(selectedEntityForSpawn)) {

			auto&& model = String::Hash(selectedEntityForSpawnModel);
			Game::RequestModel(model);

			switch (selectedEntityForSpawnType) {
			case EntityType::Object:
				selectedEntityForSpawn
					= OBJECT::CREATE_OBJECT(model, nextPos.x, nextPos.y, nextPos.z, false, false, false, false, false);
				break;
			case EntityType::Vehicle:
				selectedEntityForSpawn
					= VEHICLE::CREATE_VEHICLE(model, nextPos.x, nextPos.y, nextPos.z, 0, false, false, false, false);
				break;
			case EntityType::Ped:
				selectedEntityForSpawn
					= PED::CREATE_PED(model, nextPos.x, nextPos.y, nextPos.z, 0, false, false, false, false);
				PED::SET_PED_VISIBLE(selectedEntityForSpawn, true);
				break;
			}

			Game::SetModelAsNoLongerNeeded(model);

			ENTITY::SET_ENTITY_COORDS(selectedEntityForSpawn, nextPos.x, nextPos.y, nextPos.z, false, false, false, false);
			ENTITY::SET_ENTITY_ALPHA(selectedEntityForSpawn, 150, false);
			ENTITY::SET_ENTITY_COLLISION(selectedEntityForSpawn, false, false);
		}

		ENTITY::SET_ENTITY_ROTATION(selectedEntityForSpawn, rot.x, rot.y, rot.z, 2, false);
		ENTITY::FREEZE_ENTITY_POSITION(selectedEntityForSpawn, true);
	}

	void Spawner::SpawnSelectedEntity()
	{
		EntityId spawnedEntity;
		auto&& model = String::Hash(selectedEntityForSpawnModel);
		auto&& rot = ENTITY::GET_ENTITY_ROTATION(selectedEntityForSpawn, 2);
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
			PED::SET_PED_VISIBLE(spawnedEntity, true);
			break;
		default:
			Game::PrintSubtitle("Error: Invalid entitiy type");
			return;
		}

		ENTITY::SET_ENTITY_ROTATION(spawnedEntity, rot.x, rot.y, rot.z, 2, false);

		Game::SetModelAsNoLongerNeeded(model);

		database.Add(spawnedEntity, selectedEntityForSpawnType, selectedEntityForSpawnModel);
	}

#pragma endregion

	void Spawner::Tick()
	{
		if (isFreeCamEnabled && camera)
			camera.value()->Tick();

		if (isSelectingEntityForSpawn)
			ShowSpawnerModePreview();
	}

}
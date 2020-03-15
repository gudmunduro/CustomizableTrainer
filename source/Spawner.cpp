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
#include "MenuSettings.h"

namespace Spawner {

#pragma region Setters

	void Spawner::SetSpawnOnlyModeEnabled(bool enabled)
	{
		if (isFreeCamEnabled || isSpawnOnlyModeEnabled == enabled)
			return;

		isSpawnOnlyModeEnabled = enabled;

		if (enabled) {
			TaskQueue::AddTask("spawner", Tick);
		}
		else {
			TaskQueue::RemoveTask("spawner");
		}
	}

	void Spawner::SetFreeCamEnabled(bool enabled)
	{
		if (enabled == isFreeCamEnabled) return;

		if (isSpawnOnlyModeEnabled)
			SetSpawnOnlyModeEnabled(false);

		isFreeCamEnabled = enabled;

		if (isFreeCamEnabled) {
			camera = std::make_shared<FreeCam>();
			TaskQueue::AddTask("spawner", Tick);
		}
		else {
			camera = std::nullopt;
			TaskQueue::RemoveTask("spawner");
			HideControls();
		}
	}

	void Spawner::SetSelectedEntityForSpawn(std::string model, EntityType type)
	{
		isSelectingEntityForSpawn = true;
		if (selectedEntityForSpawn != 0 && ENTITY::DOES_ENTITY_EXIST(selectedEntityForSpawn)) {
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(selectedEntityForSpawn, false, false);
			ENTITY::DELETE_ENTITY(&selectedEntityForSpawn);
			selectedEntityForSpawn = 0;
		}
		selectedEntityForSpawnModel = model;
		selectedEntityForSpawnType = type;
		selectedEntityRot = { 0, 0, 0 };
		isPreviewSpawnFailing = false;
	}

	void Spawner::SetSelectedEntityForMove(EntityId entityId) 
	{
		auto entity = Entity(entityId);

		isMovingEntity = true;
		selectedEntityForMove = entityId;
		selectedEntityRot = entity.Rotation();

		if (Settings::Spawner::moveMode == SpawnerMoveMode::Precision) {
			if (auto dbItem = database.FindByEntityId(entityId); dbItem) {
				dbItem.value()->SetDynamic(false);
			}
			else {
				entity.SetFrozen(true);
				entity.SetDynamic(false);
			}
			camera.value()->SetAllowRollAdjustments(true);

			entity.SetCollisionEnabled(false);
			auto pos = entity.GetOffsetInWorldCoords({ 0, precisionMoveOffset * -1, 0 });
			CAM::SET_CAM_COORD(camera.value()->cam, pos.x, pos.y, pos.z);
			CAM::SET_CAM_ROT(camera.value()->cam, selectedEntityRot.x, selectedEntityRot.y, selectedEntityRot.z, 2);
		}
		else {
			camera.value()->SetAllowRollAdjustments(false);
		}
	}

	void Spawner::DisableSpawnerMode()
	{
		if (!isSelectingEntityForSpawn) return;
		isSelectingEntityForSpawn = false;
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(selectedEntityForSpawn, false, false);
		ENTITY::DELETE_ENTITY(&selectedEntityForSpawn);
	}

#pragma endregion

#pragma region Getters

	void Spawner::GetFreecamAimPos(Vector3& position, Vector3& rotation, EntityId ignore)
	{
		auto&& cam = (camera.value());
		auto&& pos = CAM::GET_CAM_COORD(cam->cam);
		auto&& rot = CAM::GET_CAM_ROT(cam->cam, 2);
		auto&& dir = Camera::DirectionFromScreenCentre(cam->cam);

		auto&& result = RaycastResult::Raycast(pos, dir, 100.0f, IntersectOptions::Everything, ignore);

		if (result.DidHitAnything()) {
			position = result.HitCoords();
		}
		else {
			Vector3 offset = { 0, 10.0, 0 };
			position = CameraUtils::GetOffsetFromCameraInWorldCoords(camera.value()->cam, offset);
		}

		rotation = rot;
	}

	void Spawner::GetPosInFrontOfFreecam(Vector3& position, Vector3& rotation)
	{
		auto&& cam = (camera.value());
		auto&& pos = CAM::GET_CAM_COORD(cam->cam);
		auto&& rot = CAM::GET_CAM_ROT(cam->cam, 2);

		Vector3 offset = { 0, precisionMoveOffset, -1.0f };
		position = CameraUtils::GetOffsetFromCameraInWorldCoords(cam->cam, offset);
		rotation = rot;
	}

	EntityId Spawner::GetFreecamAimEntity()
	{
		auto&& cam = (camera.value());
		auto&& pos = CAM::GET_CAM_COORD(cam->cam);
		auto&& rot = CAM::GET_CAM_ROT(cam->cam, 2);
		auto&& dir = Camera::DirectionFromScreenCentre(cam->cam);

		auto&& result = RaycastResult::Raycast(pos, dir, 100.0f, IntersectOptions::Everything);

		if (result.DidHitAnything()) {
			return result.HitEntity();
		}
		return 0;
	}

	void Spawner::GetPosInFrontOfPlayer(Vector3& position, Vector3& rotation)
	{
		Player player;
		position = player.ped.GetOffsetInWorldCoords({ 0, 5.0f, 0 });
		rotation = player.ped.Rotation();
		rotation.z += 90;
	}

#pragma endregion

#pragma region Booleans

	bool Spawner::IsFreeCamEnabled()
	{
		return isFreeCamEnabled;
	}

#pragma endregion

#pragma region Actions

	void Spawner::CopyEntity(EntityId entityId)
	{
		Entity entityToCopy(entityId);
		auto oldDbItem = database.FindByEntityId(entityId);
		std::shared_ptr<DatabaseItem> newDbItem;

		if (entityToCopy.IsPed()) {
			Ped pedToCopy(entityId);
			auto newPed = pedToCopy.Clone();

			int dbItemId = database.Add(newPed.id, EntityType::Ped, newPed.ModelName().value_or("Unknown"));
			newDbItem = database.peds[dbItemId];

			if (oldDbItem) {
				std::shared_ptr<PedDatabaseItem> oldPedDbItem = std::static_pointer_cast<PedDatabaseItem>(oldDbItem.value());
				std::shared_ptr<PedDatabaseItem> newPedDbItem = std::static_pointer_cast<PedDatabaseItem>(newDbItem);

				newPedDbItem->weapons = oldPedDbItem->weapons;
			}
		}
		else if (entityToCopy.IsVehicle()) {
			Vehicle vehicleToCopy(entityId);
			auto newVehicle = Vehicle::Create(vehicleToCopy.Model(), vehicleToCopy.Position(), vehicleToCopy.Heading());
			newVehicle.SetRotation(vehicleToCopy.Rotation());

			int dbItemId = database.Add(newVehicle.id, EntityType::Vehicle, newVehicle.ModelName().value_or("Unknown"));
			newDbItem = database.vehicles[dbItemId];
		}
		else if (entityToCopy.IsObject()) {
			Object objectToCopy(entityId);
			auto newObject = Object::Create(objectToCopy.Model(), objectToCopy.Position(), objectToCopy.Heading());
			newObject.SetRotation(objectToCopy.Rotation());

			int dbItemId = database.Add(newObject.id, EntityType::Object, newObject.ModelName().value_or("Unknown"));
			newDbItem = database.objects[dbItemId];
		}

		if (oldDbItem) {
			newDbItem->SetInvincible(oldDbItem.value()->IsInvincible());
			newDbItem->SetVisible(oldDbItem.value()->IsVisible());
			newDbItem->SetCollisionEnabled(oldDbItem.value()->IsCollisionEnabled());
			newDbItem->SetDynamic(oldDbItem.value()->IsDynamic());
			newDbItem->SetFrozen(oldDbItem.value()->IsFrozen());
			newDbItem->SetGravityEnabled(oldDbItem.value()->IsGravityEnabled());
		}
	}

#pragma endregion

#pragma region Spawn

	void Spawner::ShowSpawnerModePreview()
	{
		if (isPreviewSpawnFailing) return;

		Vector3 nextPos, nextRot;

		if (camera)
			// Freecam enabled
			GetFreecamAimPos(nextPos, nextRot);
		else
			GetPosInFrontOfPlayer(nextPos, nextRot);

		if (selectedEntityForSpawn == 0
			|| !ENTITY::DOES_ENTITY_EXIST(selectedEntityForSpawn)) {

			auto&& model = String::Hash(selectedEntityForSpawnModel);
			if (!Game::RequestModel(model)) {
				isPreviewSpawnFailing = true;
				return;
			}

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

			ENTITY::SET_ENTITY_ALPHA(selectedEntityForSpawn, 150, false);
			ENTITY::SET_ENTITY_COLLISION(selectedEntityForSpawn, false, false);
		}

		ENTITY::SET_ENTITY_COORDS(selectedEntityForSpawn, nextPos.x, nextPos.y, nextPos.z, false, false, false, false);
		ENTITY::SET_ENTITY_ROTATION(selectedEntityForSpawn, selectedEntityRot.x, selectedEntityRot.y, nextRot.z, 2, false);
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

		int dbItemIndex = database.Add(spawnedEntity, selectedEntityForSpawnType, selectedEntityForSpawnModel);

		switch (selectedEntityForSpawnType) {
			case EntityType::Vehicle:
				database.vehicles[dbItemIndex]->SetFrozen(Settings::Spawner::spawnVehiclesFrozen);
				break;
			case EntityType::Ped:
				database.peds[dbItemIndex]->SetFrozen(Settings::Spawner::spawnPedsFrozen);
				break;
		}
	}

	void Spawner::SpawnFromData(std::string model, EntityType type, json data)
	{
		std::shared_ptr<DatabaseItem> dbItem = nullptr;

		Vector3 pos = { data["position"]["x"], data["position"]["y"], data["position"]["z"] };
		Vector3 rot = { data["rotation"]["pitch"], data["rotation"]["roll"], data["rotation"]["yaw"] };
		float heading = data["heading"];

		switch (type) {
			case EntityType::Ped: {
				auto entityId = Ped::Create(String::Hash(model), pos, heading).id;
				auto pedDbItem = std::make_shared<PedDatabaseItem>(entityId, model);

				// Ped specific options
				pedDbItem->SetBodyguard(data["bodyguard"]);
				pedDbItem->weapons = data["weapons"].get<std::vector<WeaponData>>();

				for (auto&& weapon : pedDbItem->weapons) {
					auto modelHash = String::Hash(weapon.model);
					pedDbItem->ped.GiveWeapon(modelHash);
					pedDbItem->ped.SetAmmo(modelHash, 9999);
				}

				dbItem = pedDbItem;
				break;
			}
			case EntityType::Vehicle: {
				auto entityId = Vehicle::Create(String::Hash(model), pos, heading).id;
				auto vehicleDbItem = std::make_shared<VehicleDatabaseItem>(entityId, model);

				// Vehicle specific options

				dbItem = vehicleDbItem;
				break;
			}
			case EntityType::Object: {
				auto entityId = Object::Create(String::Hash(model), pos, heading).id;
				auto objectDbItem = std::make_shared<ObjectDatabaseItem>(entityId, model);

				// Object specific options

				dbItem = objectDbItem;
				break;
			}
		}

		dbItem->SetInvincible(data["invincible"]);
		dbItem->SetVisible(data["visible"]);
		dbItem->SetDynamic(data["dynamic"]);
		dbItem->SetCollisionEnabled(data["collision"]);
		dbItem->SetFrozen(data["frozen"]);
		dbItem->SetGravityEnabled(data["gravity"]);

		Entity(dbItem->entityId).SetRotation(rot);

		switch (type) {
		case EntityType::Ped:
			database.AddPedRaw(std::static_pointer_cast<PedDatabaseItem>(dbItem));
			break;
		case EntityType::Vehicle:
			database.AddVehicleRaw(std::static_pointer_cast<VehicleDatabaseItem>(dbItem));
			break;
		case EntityType::Object:
			database.AddObjectRaw(std::static_pointer_cast<ObjectDatabaseItem>(dbItem));
			break;
		}
	}

#pragma endregion

#pragma region Move

	void Spawner::MoveEntityToFreecamPos()
	{
		if (!ENTITY::DOES_ENTITY_EXIST(selectedEntityForMove))
			return;

		Vector3 nextPos, nextRot;

		if (Settings::Spawner::moveMode == SpawnerMoveMode::SurfaceEase) {
			GetFreecamAimPos(nextPos, nextRot, selectedEntityForMove);
			ENTITY::SET_ENTITY_ROTATION(selectedEntityForMove, selectedEntityRot.x, selectedEntityRot.y, nextRot.z, 2, false);
		}
		else {
			GetPosInFrontOfFreecam(nextPos, nextRot);
			ENTITY::SET_ENTITY_ROTATION(selectedEntityForMove, nextRot.x, nextRot.y, nextRot.z, 2, false);
		}

		ENTITY::SET_ENTITY_COORDS(selectedEntityForMove, nextPos.x, nextPos.y, nextPos.z, false, false, false, false);
	}

	void Spawner::SelectEntityTick()
	{
		if (!isMovingEntity) {
			EntityId hitEntity = GetFreecamAimEntity();

			if (hitEntity != 0) {
				middleCrossColor = { 0, 150, 0, 200 };
				if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerSelectEntity))
					SetSelectedEntityForMove(hitEntity);
				if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerCopyEntity))
					CopyEntity(hitEntity);
			}
		}

		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerSelectEntity) && isMovingEntity) {
			MoveEntityToFreecamPos();
			middleCrossColor = { 0, 100, 0, 200 };
		}
		else if (isMovingEntity) {
			isMovingEntity = false;
			
			auto entity = Entity(selectedEntityForMove);
			if (auto dbItem = database.FindByEntityId(selectedEntityForMove); dbItem)
				entity.SetCollisionEnabled(dbItem.value()->IsCollisionEnabled());
			else
				entity.SetCollisionEnabled(true);

			camera.value()->SetAllowRollAdjustments(false);
		}
	}

#pragma endregion

#pragma region Draw

	void Spawner::DrawMiddleCross()
	{
		Game::DrawSprite("scoretimer_textures", "scoretimer_generic_cross", { 50.0f, 50.0f }, { 2.5f * 16 / 9, 2.5f * 16 / 9 }, 45.0f, middleCrossColor);
	}

	void Spawner::DrawControls()
	{
		std::string controls;

		if (Controls::IsUsingController()) {
			controls = "~INPUT_FRONTEND_LT~ Move ~INPUT_FRONTEND_RT~ Fast move ~INPUTGROUP_MOVE~ Move";
			if (isMovingEntity && Settings::Spawner::moveMode == SpawnerMoveMode::SurfaceEase || isSelectingEntityForSpawn) {
				controls = "~INPUT_FRONTEND_RB~~INPUT_FRONTEND_LB~Roll ~INPUT_FRONTEND_RS~~INPUT_FRONTEND_LS~Pitch" + controls;
			}
			else if (isMovingEntity && Settings::Spawner::moveMode == SpawnerMoveMode::Precision) {
				controls = "~INPUT_FRONTEND_RB~~INPUT_FRONTEND_LB~Roll ~INPUT_FRONTEND_RS~~INPUT_FRONTEND_LS~Zoom" + controls;
			}
		}
		else {
			controls = "~INPUT_ATTACK~ Select ~INPUT_SPRINT~ Fast move ~INPUTGROUP_MOVE~ Move";
			if (isMovingEntity || isSelectingEntityForSpawn) {
				controls = "~INPUT_FRONTEND_RB~~INPUT_FRONTEND_LB~Roll ~INPUT_FRONTEND_RS~~INPUT_FRONTEND_LS~Pitch" + controls;
			}
			else if (isMovingEntity && Settings::Spawner::moveMode == SpawnerMoveMode::Precision) {
				controls = "~INPUT_FRONTEND_RB~~INPUT_FRONTEND_LB~Roll ~INPUT_FRONTEND_RS~~INPUT_FRONTEND_LS~Zoom" + controls;
			}
		}

		char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", (char*)controls.c_str());
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(varString);
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}

	void Spawner::HideControls()
	{
		char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", " ");
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(varString);
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	}

#pragma endregion

#pragma region Controls

	void Spawner::RespondToEntityRotationControls()
	{
		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerRollRight))
			selectedEntityRot.y += 0.5f;
		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerRollLeft))
			selectedEntityRot.y -= 0.5f;

		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerPitchUp))
			selectedEntityRot.x += 0.5f;
		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerPitchDown))
			selectedEntityRot.x -= 0.5f;
	}

	void Spawner::RespondToPrecisionMoveControls()
	{
		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerPitchUp) && precisionMoveOffset > 0)
			precisionMoveOffset -= 0.05;
		if (Controls::IsFunctionControlPressed(FunctionControl::SpawnerPitchDown))
			precisionMoveOffset += 0.05;
	}

	void Spawner::RespondToControls()
	{
		if (isFreeCamEnabled && camera) {
			if (Settings::Spawner::moveMode == SpawnerMoveMode::SurfaceEase)
				RespondToEntityRotationControls();
			else if (Settings::Spawner::moveMode == SpawnerMoveMode::Precision)
				RespondToPrecisionMoveControls();
		}
	}

#pragma endregion

	void Spawner::ResetValues()
	{
		middleCrossColor = { 140, 140, 140, 200 };
	}

	void Spawner::Tick()
	{
		ResetValues();

		if (isFreeCamEnabled && camera) {
			camera.value()->Tick();
			if (!isSelectingEntityForSpawn) {
				SelectEntityTick();
			}
			DrawMiddleCross();
			DrawControls();
		}

		RespondToControls();

		if (isSelectingEntityForSpawn)
			ShowSpawnerModePreview();
	}

}
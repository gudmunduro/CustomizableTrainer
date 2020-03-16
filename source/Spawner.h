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
#include "Freecam.h"
#include "Database.h"

namespace Spawner {

#pragma region Types

	class DatabaseEntity {
	public:
		DatabaseEntity(EntityId entityId, EntityType type, std::string model, std::string name)
			: entityId(entityId), type(type), model(model), name(name) {}

		EntityId entityId;
		EntityType type;
		std::string model;
		std::string name;
	};

#pragma endregion

	class Spawner {
	public:
		static void SetSpawnOnlyModeEnabled(bool enabled);
		static void SetFreeCamEnabled(bool enabled);
		static void SetSelectedEntityForSpawn(std::string model, EntityType type);
		static void SetSelectedEntityForMove(EntityId entity);
		static void DisableSpawnerMode();
		static void GetFreecamAimPos(Vector3& position, Vector3& rotation, EntityId ignore = 0);
		static void GetPosInFrontOfFreecam(Vector3& position, Vector3& rotation);
		static EntityId GetFreecamAimEntity();
		static void GetPosInFrontOfPlayer(Vector3& position, Vector3& rotation);
		static bool IsFreeCamEnabled();
		static void CopyEntity(EntityId entityId);
		static void DeleteEntity(EntityId entityId);
		static void ShowSpawnerModePreview();
		static void SpawnSelectedEntity();
		static void SpawnFromData(std::string model, EntityType type, json data);
		static void MoveEntityToFreecamPos();
		static void SelectEntityTick();
		static void DrawMiddleCross();
		static void DrawControls();
		static void HideControls();
		static void RespondToEntityRotationControls();
		static void RespondToPrecisionMoveControls();
		static void RespondToControls();
		static void ResetValues();
		static void Tick();

		static inline std::optional<Vector3> startPosition = std::nullopt;
		static inline Database database;
		static inline std::optional<std::shared_ptr<FreeCam>> camera = std::nullopt;
	private:
		static inline bool isSelectingEntityForSpawn = false;
		static inline bool isFreeCamEnabled = false;
		static inline bool isSpawnOnlyModeEnabled = false;
		static inline bool isMovingEntity = false;
		static inline bool isPreviewSpawnFailing = false;
		static inline std::string selectedEntityForSpawnModel = "";
		static inline EntityType selectedEntityForSpawnType = EntityType::Object;
		static inline EntityId selectedEntityForSpawn = 0;
		static inline EntityId selectedEntityForMove = 0;
		static inline Vector3 selectedEntityRot = { 0, 0, 0 };
		static inline float precisionMoveOffset = 8.0f;
		static inline Color middleCrossColor = { 140, 140, 140, 200 };
	};
}

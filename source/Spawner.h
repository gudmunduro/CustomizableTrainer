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
		static void SetFreeCamEnabled(bool enabled);
		static void SetEntityForSpawner(std::string model, EntityType type);
		static void DisableSpawnerMode();
		static bool IsFreeCamEnabled();
		static void ShowSpawnerModePreview();
		static void SpawnSelectedEntity();
		static void Tick();

		static inline std::vector<DatabaseEntity> database;
		static inline std::optional<std::shared_ptr<FreeCam>> camera = std::nullopt;
	private:
		static inline bool isSelectingEntityForSpawn = false;
		static inline bool isFreeCamEnabled = false;
		static inline std::string selectedEntityForSpawnModel = "";
		static inline EntityType selectedEntityForSpawnType = EntityType::Object;
		static inline ObjectId selectedEntityForSpawn = 0;
	};
}

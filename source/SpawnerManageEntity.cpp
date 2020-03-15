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
#include "SpawnerManageEntity.h"
#include "WeaponSelection.h"
#include "SpawnerManualPlacementSub.h"

SpawnerManageEntity::SpawnerManageEntity(MenuController* menuController, EntityType type, std::shared_ptr<Spawner::DatabaseItem> dbItem)
	: Submenu(menuController), type(type), dbItem(dbItem), entity(dbItem->entityId)
{}

#pragma region Draw

void SpawnerManageEntity::Draw()
{
	Submenu::Draw();

	DrawTitle(dbItem->model);
	DrawToggle("Visible", dbItem->IsVisible(), [this] {
		bool toggledValue = !dbItem->IsVisible();
		dbItem->SetVisible(toggledValue);
	});
	DrawToggle("Invincible", dbItem->IsInvincible(), [this] {
		bool toggledValue = !dbItem->IsInvincible();
		dbItem->SetInvincible(toggledValue);
	});

	if (IsPed()) {
		auto pedDbItem = DbItemForPed();

		DrawToggle("Bodyguard", pedDbItem->IsBodyguard(), [this, pedDbItem] {
			bool toggledValue = !pedDbItem->IsBodyguard();
			pedDbItem->SetBodyguard(toggledValue);
		});

		DrawSubAction("Manage weapons", [this, pedDbItem] {
			auto weaponSelection = new WeaponSelectionSub(menuController, pedDbItem->ped, [pedDbItem] (WeaponData weapon) {
				pedDbItem->weapons.push_back(weapon);
				}, [pedDbItem] (WeaponData weapon) {
					auto& weapons = pedDbItem->weapons;
					weapons.erase(std::remove(weapons.begin(), weapons.end(), weapon), weapons.end());
			});
			menuController->AddSubmenuToStack(weaponSelection);
		});
	}

	DrawToggle("Dynamic", dbItem->IsDynamic(), [this] {
		bool toggledValue = !dbItem->IsDynamic();
		dbItem->SetDynamic(toggledValue);
		dbItem->SetFrozen(!toggledValue);
	});
	DrawToggle("Frozen", dbItem->IsFrozen(), [this] {
		bool toggledValue = !dbItem->IsFrozen();
		dbItem->SetFrozen(toggledValue);
	});
	DrawToggle("Collision", dbItem->IsCollisionEnabled(), [this] {
		bool toggledValue = !dbItem->IsCollisionEnabled();
		dbItem->SetCollisionEnabled(toggledValue);
	});
	DrawToggle("Gravity", dbItem->IsGravityEnabled(), [this] {
		bool toggledValue = !dbItem->IsGravityEnabled();
		dbItem->SetGravityEnabled(toggledValue);
	});
	DrawAction("Teleport to", [this] {
		auto pos = Entity(dbItem->entityId).Position();
		Player().ped.SetCoords(pos);
	});
	DrawAction("Teleport to player", [this] {
		auto pos = Player().ped.Position();
		Entity(dbItem->entityId).SetCoords(pos);
	});
	DrawSubAction("Manual placement", [this] {
		auto manPlacementSub = new SpawnerManualPlacementSub(menuController, entity);
		menuController->AddSubmenuToStack(manPlacementSub);
	});
	DrawAction("Delete", [this] {
		Spawner::Spawner::database.RemoveAndDelete(dbItem, type);
		menuController->GoToLastSub();
	});
}

#pragma endregion

#pragma region Booleans

bool SpawnerManageEntity::IsPed()
{
	return type == EntityType::Ped;
}

bool SpawnerManageEntity::IsVehicle()
{
	return type == EntityType::Vehicle;
}

bool SpawnerManageEntity::IsObject()
{
	return type == EntityType::Object;
}

#pragma endregion

#pragma region Getters

std::shared_ptr<Spawner::PedDatabaseItem> SpawnerManageEntity::DbItemForPed()
{
	return std::static_pointer_cast<Spawner::PedDatabaseItem>(dbItem);
}

std::shared_ptr<Spawner::VehicleDatabaseItem> SpawnerManageEntity::DbItemForVehicle()
{
	return std::static_pointer_cast<Spawner::VehicleDatabaseItem>(dbItem);
}

std::shared_ptr<Spawner::ObjectDatabaseItem> SpawnerManageEntity::DbItemForObject()
{
	return std::static_pointer_cast<Spawner::ObjectDatabaseItem>(dbItem);
}

#pragma endregion

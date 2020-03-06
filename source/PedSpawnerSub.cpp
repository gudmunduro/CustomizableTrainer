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
#include "PedSpawnerSub.h"
#include "PedSpawner.h"
#include "Toggles.h"
#include "Controls.h"

PedSpawnerSub::PedSpawnerSub(MenuController *menuController)
	: Submenu(menuController)
{
	
}

#pragma region Draw

void PedSpawnerSub::Draw()
{
	Submenu::Draw();
	
	DrawTitle("Ped spawner");
	DrawSub("Spawn", "required_sub_spawnPed");

	if (PedSpawner::peds.size() > 0) {
		DrawAction("All >", [this] {
			Toggles::allSpawnedPedsInvincible = true;
			Toggles::allSpawnedPedsBodyguard = true;

			for (auto&& ped : PedSpawner::peds) {
				if (!ped->isInvincible)
					Toggles::allSpawnedPedsInvincible = false;
				if (!ped->isBodyGuard)
					Toggles::allSpawnedPedsBodyguard = false;
			}

			menuController->SetSubmenuWithKey("required_sub_allSpawnedPedsOptions");
		});
	}

	for (int i = 0; i < PedSpawner::peds.size(); i++) {
		auto ped = PedSpawner::peds[i];

		DrawAction(ped->name + " >", [this, i] {
			PedSpawner::SetCurrentPedIndex(i);
			menuController->SetSubmenuWithKey("required_sub_spawnedPedOptions");
		});
	}
}

#pragma region Getters

int PedSpawnerSub::OptionCount()
{
	return PedSpawner::peds.size() + 1 + (!PedSpawner::peds.empty() ? 1 : 0);
}

#pragma endregion

#pragma region Controls

void PedSpawnerSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}

#pragma endregion
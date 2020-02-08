#include "pch.h"
#include "PedSpawnerSub.h"
#include "PedSpawner.h"
#include "Toggles.h"

PedSpawnerSub::PedSpawnerSub(MenuController *menuController)
	: FixedSubmenu(menuController)
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

			for each (auto ped in PedSpawner::peds) {
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
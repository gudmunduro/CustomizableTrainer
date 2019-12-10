#include "pch.h"
#include "PedSpawnerSub.h"
#include "PedSpawner.h"

PedSpawnerSub::PedSpawnerSub(MenuController *menuController)
	: FixedSubmenu(menuController)
{
	
}

// MARK: Draw

void PedSpawnerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Ped spanwer");
	DrawSub("Spawn", "required_sub_spawnPed");

	for (int i = 0; i < PedSpawner::peds.size(); i++) {
		auto ped = PedSpawner::peds[i];

		DrawAction(ped->name + " >", [this, i] {
			PedSpawner::SetCurrentPedIndex(i);
			menuController->SetSubmenuWithKey("required_sub_spawnedPedOptions");
		});
	}
}

// MARK: Getters

int PedSpawnerSub::OptionCount()
{
	return PedSpawner::peds.size() + 1;
}
#include "pch.h"
#include "PedSpawnerSub.h"
#include "PedSpawner.h"

PedSpawnerSub::PedSpawnerSub(MenuController *menuController)
	: FixedSubmenu(menuController)
{
	
}

void PedSpawnerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Ped spanwer");
	DrawSub("Spawn", "required_sub_spawn");

	for (int i = 0; i < PedSpawner::peds.size(); i++) {
		auto ped = PedSpawner::peds[i];

		DrawAction(ped.name + " >", [this, i] {
			PedSpawner::currentPedIndex = i;
			menuController->SetSubmenuWithKey("required_sub_spawnedPedOptions");
		});
	}
}
#include "pch.h"
#include "SpawnerSub.h"
#include "SpawnerModelSelection.h"

SpawnerSub::SpawnerSub(MenuController* menuController)
	: Submenu(menuController)
{
	
}

void SpawnerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Spawner");
	DrawToggle("Freecam", Spawner::Spawner::IsFreeCamEnabled(), [this] {
		Spawner::Spawner::SetFreeCamEnabled(!Spawner::Spawner::IsFreeCamEnabled());
	});
	DrawAction("Manage entities >", [] {
		Game::PrintSubtitle("Not implemented");
	});
	DrawAction("Spawn >", [this] {
		auto selectCatSub = new SpawnerSelectCatSub(menuController);
		menuController->AddSubmenuToStack(selectCatSub);
	});
	DrawAction("Settings >", [] {
		Game::PrintSubtitle("Not implemented");
	});

}

void SpawnerSub::SubDidDraw()
{
	Submenu::SubDidDraw();
}

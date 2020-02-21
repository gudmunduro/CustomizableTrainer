#include "pch.h"
#include "SpawnerSub.h"
#include "SpawnerModelSelection.h"
#include "SpawnerManageEntities.h"

SpawnerSub::SpawnerSub(MenuController* menuController)
	: Submenu(menuController)
{}

void SpawnerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Spawner");
	DrawToggle("Freecam", Spawner::Spawner::IsFreeCamEnabled(), [this] {
		Spawner::Spawner::SetFreeCamEnabled(!Spawner::Spawner::IsFreeCamEnabled());
	});
	DrawSubAction("Manage entities >", [this] {
		auto manageSub = new SpawnerManageCategories(menuController);
		menuController->AddSubmenuToStack(manageSub);
	});
	DrawSubAction("Spawn", [this] {
		auto selectCatSub = new SpawnerSelectCatSub(menuController);
		menuController->AddSubmenuToStack(selectCatSub);
	});
	DrawSubAction("Settings", [] {
		Game::PrintSubtitle("Not implemented");
	});

}

void SpawnerSub::SubDidDraw()
{
	Submenu::SubDidDraw();
}

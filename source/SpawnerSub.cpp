#include "pch.h"
#include "SpawnerSub.h"
#include "SpawnerModelSelection.h"
#include "SpawnerManageEntities.h"
#include "SpawnerLoadSub.h"
#include "JsonData.h"

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
	DrawSubAction("Manage entities", [this] {
		auto manageSub = new SpawnerManageCategories(menuController);
		menuController->AddSubmenuToStack(manageSub);
	});
	DrawSubAction("Spawn", [this] {
		auto selectCatSub = new SpawnerSelectCatSub(menuController);
		menuController->AddSubmenuToStack(selectCatSub);
	});
	DrawSubAction("Manage saved files", [this] {
		auto loadSub = new SpawnerLoadSub(menuController);
		menuController->AddSubmenuToStack(loadSub);
	});
	DrawSubAction("Settings", [] {
		Game::PrintSubtitle("Not implemented");
	});

}

void SpawnerSub::SubDidDraw()
{
	Submenu::SubDidDraw();
}

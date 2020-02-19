#include "pch.h"
#include "SpawnerSub.h"

SpawnerSub::SpawnerSub(MenuController* menuController)
	: Submenu(menuController)
{

}

void SpawnerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Spawner");
	DrawToggle("Freecam", isFreeCamEnabled, [this] {
		isFreeCamEnabled = !isFreeCamEnabled;

		if (isFreeCamEnabled)
			freeCam = std::make_unique<Spawner::Camera>();
		else
			freeCam = std::nullopt;
	});
}

void SpawnerSub::SubDidDraw()
{
	Submenu::SubDidDraw();

	// Only for prototyping
	if (isFreeCamEnabled && freeCam) {
		freeCam.value()->Tick();
	}
}

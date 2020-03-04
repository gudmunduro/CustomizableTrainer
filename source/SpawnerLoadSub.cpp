#include "pch.h"
#include "SpawnerLoadSub.h"
#include "JsonData.h"

SpawnerLoadSub::SpawnerLoadSub(MenuController* menuController)
	: Submenu(menuController)
{
	for (auto&& entry : std::filesystem::directory_iterator("CustomizableTrainer\\Spawner\\")) {
		auto filename = entry.path().filename().string();
		filename = filename.substr(0, filename.find("."));
		names.push_back(filename);
	}
}

void SpawnerLoadSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Load");

	for (auto&& name : names) {
		DrawAction(name, [name] {
			JSONData::LoadSpawnerDataFromFile(name);
		});
	}
}


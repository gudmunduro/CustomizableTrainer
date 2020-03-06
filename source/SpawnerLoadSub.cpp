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

	DrawTitle("Manage saved files");

	DrawAction("Save current", [] {
		auto name = Game::GetInputWithKeyboard();
		if (!name) return;

		if (name != "") JSONData::SaveSpawnerDataToFile(*name);
	});

	for (auto&& name : names) {
		DrawAction("Load " + name, [name] {
			JSONData::LoadSpawnerDataFromFile(name);
		});
	}
}


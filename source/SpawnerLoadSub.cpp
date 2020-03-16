#include "pch.h"
#include "SpawnerLoadSub.h"
#include "JsonData.h"
#include "Spawner.h"

SpawnerLoadSub::SpawnerLoadSub(MenuController* menuController)
	: Submenu(menuController)
{
	LoadFiles();
}

void SpawnerLoadSub::LoadFiles()
{
	for (auto&& entry : std::filesystem::directory_iterator("CustomizableTrainer\\Spawner\\")) {
		auto filename = entry.path().filename().string();
		filename = filename.substr(0, filename.find("."));
		names.push_back(filename);
	}
}

void SpawnerLoadSub::ReloadFiles()
{
	names.clear();
	LoadFiles();
}

void SpawnerLoadSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Manage saved files");

	DrawAction("Save current", [this] {
		auto name = Game::GetInputWithKeyboard();
		if (!name) return;

		if (name != "") JSONData::SaveSpawnerDataToFile(*name);
		ReloadFiles();
	});

	for (auto&& name : names) {
		DrawAction("Load " + name, [name] {
			JSONData::LoadSpawnerDataFromFile(name);
			if (Spawner::Spawner::startPosition)
				Player().ped.SetCoords(*Spawner::Spawner::startPosition);
		});
	}
}


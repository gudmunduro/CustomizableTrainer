#include "pch.h"
#include "ObjectSelection.h"
#include "JsonData.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

ObjectSelectionCatSub::ObjectSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<ObjectData> objects, ObjectSelectionMode mode, std::function<void(ObjectData)> onSelection)
	: Submenu(menuController), title(title), objects(objects), mode(mode), onSelection(onSelection)
{
	if (mode == ObjectSelectionMode::SpawnerMode && objects.size() > 0)
		Spawner::Spawner::SetEntityForSpawner(objects[0].model, EntityType::Object);
}

void ObjectSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	optionAddIndex = scrollPosition - 1;
	for (int i = scrollPosition; i < ((OptionCount() > 8) ? (scrollPosition + 8) : OptionCount()); i++) {
		auto&& object = objects[i];

		DrawAction(object.name, [this, object] {
			switch (mode) {
				case ObjectSelectionMode::SpawnerMode:
					Spawner::Spawner::SpawnSelectedEntity();
					break;
				case ObjectSelectionMode::Select:
					onSelection(object);
					menuController->GoToLastSub();
					break;
			}
		});
	}
}

void ObjectSelectionCatSub::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);

	if (mode == ObjectSelectionMode::SpawnerMode)
		Spawner::Spawner::SetEntityForSpawner(objects[to].model, EntityType::Object);
}

int ObjectSelectionCatSub::OptionCount()
{
	return objects.size();
}

#pragma endregion


#pragma region Category list

ObjectSelectionSub::ObjectSelectionSub(MenuController* menuController, ObjectSelectionMode mode, std::function<void(ObjectData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), objects(JSONData::GetObjects()), objectCats()
{
	for (int i = 0; i < objects.size(); i++) {
		objectCats.push_back({objects[i].first, i});
	}
}

void ObjectSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Objects");

	DrawAction("Custom input", [this] {
		if (auto&& modelName = Game::GetInputWithKeyboard(); modelName) {
			switch (mode) {
				case ObjectSelectionMode::SpawnerMode:
					Spawner::Spawner::SetEntityForSpawner(*modelName, EntityType::Object);
					Spawner::Spawner::SpawnSelectedEntity();
					Spawner::Spawner::DisableSpawnerMode();
					break;
				case ObjectSelectionMode::Select:
					onSelection({ *modelName, *modelName });
					menuController->GoToLastSub();
					break;
			}
		}
	});

	for (auto&& objectCat : objectCats) {
		DrawSubAction(objectCat.first, [this, objectCat] {
			auto objectCatSub = new ObjectSelectionCatSub(menuController, objectCat.first,
				objects[objectCat.second].second, mode, [this](ObjectData selected) {

					if (mode == ObjectSelectionMode::Select)
						onSelection(selected);
			});

			menuController->AddSubmenuToStack(objectCatSub);
		});
	}
}

void ObjectSelectionSub::SubDidAppear()
{
	Submenu::SubDidAppear();

	if (mode == ObjectSelectionMode::SpawnerMode)
		Spawner::Spawner::DisableSpawnerMode();
}

#pragma endregion

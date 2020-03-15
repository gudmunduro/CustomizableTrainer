#include "pch.h"
#include "PedSelection.h"
#include "EntityLists.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

PedSelectionSub::PedSelectionSub(MenuController* menuController, const std::string title, std::vector<PedData> peds, PedSelectionMode mode, std::function<void(PedData)> onSelection)
	: Submenu(menuController), title(title), peds(peds), mode(mode), onSelection(onSelection)
{
	if (mode == PedSelectionMode::SpawnerMode && peds.size() > 0 && !peds[0].model._Starts_with("mp"))
		Spawner::Spawner::SetSelectedEntityForSpawn(peds[0].model, EntityType::Ped);
}

void PedSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for (auto && ped : peds) {
		DrawAction(ped.name, [this, ped] {
			switch (mode) {
			case PedSelectionMode::Spawn:
				if (ped.model._Starts_with("mp")) {
					Game::PrintSubtitle("Spawning mp models is not supported");
					break;
				}
				Actions::SpawnPed({ ped.model });
				break;
			case PedSelectionMode::SpawnerMode:
				if (ped.model._Starts_with("mp")) {
					Game::PrintSubtitle("Spawning mp models is not supported");
					break;
				}
				Spawner::Spawner::SpawnSelectedEntity();
				break;
			case PedSelectionMode::ModelSelection:
				if (ped.model._Starts_with("mp")) {
					Game::PrintSubtitle("Changing to mp models is not supported");
					break;
				}
				Player().SetModel(String::Hash(ped.model));
				break;
			case PedSelectionMode::Select:
				onSelection(ped);
				menuController->GoToLastSub();
				break;
			}
		});
	}
}

void PedSelectionSub::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);

	if (mode == PedSelectionMode::SpawnerMode && !peds[to].model._Starts_with("mp"))
		Spawner::Spawner::SetSelectedEntityForSpawn(peds[to].model, EntityType::Ped);
}

#pragma endregion


#pragma region Sub Category list

PedSubCatSelectionSub::PedSubCatSelectionSub(MenuController* menuController, PedSelectionMode mode, std::string title, std::vector<std::pair<std::string, std::vector<PedData>>> peds, std::function<void(PedData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), peds(peds), title(title)
{}

void PedSubCatSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for (auto && pedCat : peds) {
		DrawSubAction(pedCat.first, [this, pedCat] {
			auto PedCatSub = new PedSelectionSub(menuController, pedCat.first,
				pedCat.second, mode, [this](PedData selected) {
					if (mode == PedSelectionMode::Select)
						onSelection(selected);
				});

			menuController->AddSubmenuToStack(PedCatSub);
		});
	}
}

void PedSubCatSelectionSub::SubDidAppear()
{
	Submenu::SubDidAppear();

	if (mode == PedSelectionMode::SpawnerMode)
		Spawner::Spawner::DisableSpawnerMode();
}

#pragma endregion

#pragma region Category list

PedCatSelectionSub::PedCatSelectionSub(MenuController* menuController, PedSelectionMode mode, std::function<void(PedData)> onSelection)
	: Submenu(menuController), peds(EntityLists::peds), mode(mode), onSelection(onSelection)
{}

void PedCatSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Peds");

	DrawAction("Custom input", [this] {
		if (auto&& modelName = Game::GetInputWithKeyboard(); modelName) {
			switch (mode) {
			case PedSelectionMode::Spawn:
				Actions::SpawnPed({ *modelName });
				break;
			case PedSelectionMode::SpawnerMode:
				Spawner::Spawner::SetSelectedEntityForSpawn(*modelName, EntityType::Ped);
				Spawner::Spawner::Tick();
				Spawner::Spawner::SpawnSelectedEntity();
				Spawner::Spawner::DisableSpawnerMode();
				break;
			case PedSelectionMode::ModelSelection:
				Player().SetModel(String::Hash(*modelName));
				break;
			case PedSelectionMode::Select:
				onSelection({ *modelName, *modelName });
				menuController->GoToLastSub();
				break;
			}
		}
	});

	for (auto && pedType : peds) {
		DrawSubAction(pedType.first, [this, pedType] {
			auto subCat = new PedSubCatSelectionSub(menuController, mode, pedType.first, pedType.second, onSelection);
			menuController->AddSubmenuToStack(subCat);
		});
	}
}

#pragma endregion

#include "pch.h"
#include "PedSelection.h"
#include "JsonData.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

PedSelectionSub::PedSelectionSub(MenuController* menuController, const std::string title, const std::vector<PedData> Peds, PedSelectionMode mode, std::function<void(PedData)> onSelection)
	: Submenu(menuController), title(title), peds(Peds), mode(mode), onSelection(onSelection)
{
	if (mode == PedSelectionMode::SpawnerMode && Peds.size() > 0)
		Spawner::Spawner::SetEntityForSpawner(Peds[0].model, EntityType::Ped);
}

void PedSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for each (auto && ped in peds) {
		DrawAction(ped.name, [this, ped] {
			switch (mode) {
			case PedSelectionMode::Spawn:
				if (ped.model._Starts_with("mp")) {
					Game::PrintSubtitle("Spawning mp models in not available");
					break;
				}
				Actions::SpawnPed({ ped.model });
				break;
			case PedSelectionMode::SpawnerMode:
				if (ped.model._Starts_with("mp")) {
					Game::PrintSubtitle("Spawning mp models in not available");
					break;
				}
				Spawner::Spawner::SpawnSelectedEntity();
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
		Spawner::Spawner::SetEntityForSpawner(peds[to].model, EntityType::Ped);
}

#pragma endregion


#pragma region Sub Category list

PedSubCatSelectionSub::PedSubCatSelectionSub(MenuController* menuController, PedSelectionMode mode, std::vector<std::pair<std::string, std::vector<PedData>>> peds, std::function<void(PedData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), peds(peds)
{
}

void PedSubCatSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Peds");

	for each (auto && pedCat in peds) {
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
	: Submenu(menuController), peds(JSONData::GetPeds()), mode(mode), onSelection(onSelection)
{}

void PedCatSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Peds");

	for each (auto && pedType in peds) {
		DrawSubAction(pedType.first, [this, pedType] {
			auto subCat = new PedSubCatSelectionSub(menuController, mode, pedType.second, onSelection);
			menuController->AddSubmenuToStack(subCat);
		});
	}
}

#pragma endregion

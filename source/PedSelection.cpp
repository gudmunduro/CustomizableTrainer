#include "pch.h"
#include "PedSelection.h"
#include "JsonData.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

PedSelectionCatSub::PedSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<PedData> Peds, PedSelectionMode mode, std::function<void(PedData)> onSelection)
	: Submenu(menuController), title(title), peds(Peds), mode(mode), onSelection(onSelection)
{
	if (mode == PedSelectionMode::SpawnerMode && Peds.size() > 0)
		Spawner::Spawner::SetEntityForSpawner(Peds[0].model, EntityType::Ped);
}

void PedSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for each (auto && ped in peds) {
		DrawAction(ped.name, [this, ped] {
			switch (mode) {
			case PedSelectionMode::Spawn:
				Actions::SpawnPed({ ped.model });
				break;
			case PedSelectionMode::SpawnerMode:
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

void PedSelectionCatSub::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);

	if (mode == PedSelectionMode::SpawnerMode)
		Spawner::Spawner::SetEntityForSpawner(peds[to].model, EntityType::Ped);
}

#pragma endregion


#pragma region Sub Category list

PedSelectionSub::PedSelectionSub(MenuController* menuController, PedSelectionMode mode, std::vector<std::pair<std::string, std::vector<PedData>>> peds, std::function<void(PedData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), peds(peds)
{
}

void PedSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Peds");

	for each (auto && pedCat in peds) {
		DrawSubAction(pedCat.first, [this, pedCat] {
			auto PedCatSub = new PedSelectionCatSub(menuController, pedCat.first,
				pedCat.second, mode, [this](PedData selected) {

					if (mode == PedSelectionMode::Select)
						onSelection(selected);
				});

			menuController->AddSubmenuToStack(PedCatSub);
			});
	}
}

void PedSelectionSub::SubDidAppear()
{
	Submenu::SubDidAppear();

	if (mode == PedSelectionMode::SpawnerMode)
		Spawner::Spawner::DisableSpawnerMode();
}

#pragma endregion

#pragma region Category list

HumanAnimalSelectionSub::HumanAnimalSelectionSub(MenuController* menuController)
	: Submenu(menuController)
{}

void HumanAnimalSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Peds");
	DrawSubAction("Human");
}

#pragma endregion

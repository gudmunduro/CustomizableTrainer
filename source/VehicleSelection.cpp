#include "pch.h"
#include "VehicleSelection.h"
#include "JsonData.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

VehicleSelectionCatSub::VehicleSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<VehicleData> vehicles, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection)
	: Submenu(menuController), title(title), vehicles(vehicles), mode(mode), onSelection(onSelection)
{
	if (mode == VehicleSelectionMode::SpawnerMode && vehicles.size() > 0)
		Spawner::Spawner::SetEntityForSpawner(vehicles[0].model, EntityType::Vehicle);
}

void VehicleSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for (auto && vehicle : vehicles) {
		DrawAction(vehicle.name, [this, vehicle] {
			switch (mode) {
				case VehicleSelectionMode::Spawn:
					Actions::SpawnVehicle({ vehicle.model });
					break;
				case VehicleSelectionMode::SpawnerMode:
					Spawner::Spawner::SpawnSelectedEntity();
					break;
				case VehicleSelectionMode::Select:
					onSelection(vehicle);
					menuController->GoToLastSub();
					break;
			}
		});
	}
}

void VehicleSelectionCatSub::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);

	if (mode == VehicleSelectionMode::SpawnerMode)
		Spawner::Spawner::SetEntityForSpawner(vehicles[to].model, EntityType::Vehicle);
}

#pragma endregion


#pragma region Category list

VehicleSelectionSub::VehicleSelectionSub(MenuController* menuController, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), vehicles(JSONData::GetVehicles())
{
}

void VehicleSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Vehicles");

	DrawAction("Custom input", [this] {
		if (auto&& modelName = Game::GetInputWithKeyboard(); modelName) {
			switch (mode) {
				case VehicleSelectionMode::Spawn:
					Actions::SpawnVehicle({ *modelName });
					break;
				case VehicleSelectionMode::SpawnerMode:
					Spawner::Spawner::SetEntityForSpawner(*modelName, EntityType::Vehicle);
					Spawner::Spawner::SpawnSelectedEntity();
					Spawner::Spawner::DisableSpawnerMode();
					break;
				case VehicleSelectionMode::Select:
					onSelection({ *modelName, *modelName });
					menuController->GoToLastSub();
					break;
			}
		}
	});
	
	for (auto && vehicleCat : vehicles) {
		DrawSubAction(vehicleCat.first, [this, vehicleCat] {
			auto vehicleCatSub = new VehicleSelectionCatSub(menuController, vehicleCat.first,
				vehicleCat.second, mode, [this] (VehicleData selected) {

					if (mode == VehicleSelectionMode::Select)
						onSelection(selected);
			});

			menuController->AddSubmenuToStack(vehicleCatSub);
		});
	}
}

void VehicleSelectionSub::SubDidAppear()
{
	Submenu::SubDidAppear();

	if (mode == VehicleSelectionMode::SpawnerMode)
		Spawner::Spawner::DisableSpawnerMode();
}

#pragma endregion

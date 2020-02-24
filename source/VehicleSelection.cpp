#include "pch.h"
#include "VehicleSelection.h"
#include "JsonData.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

VehicleSelectionCatSub::VehicleSelectionCatSub(MenuController* menuController, const std::string& title, const std::vector<VehicleData>& vehicles, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection)
	: Submenu(menuController), title(title), vehicles(vehicles), mode(mode), onSelection(onSelection)
{
	if (mode == VehicleSelectionMode::SpawnerMode && vehicles.size() > 0)
		Spawner::Spawner::SetEntityForSpawner(vehicles[0].model, EntityType::Vehicle);
}

void VehicleSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	for each (auto && vehicle in vehicles) {
		DrawAction(vehicle.name, [this, vehicle] {
			switch (mode) {
				case VehicleSelectionMode::Spawn:
					Actions::SpawnVehicle({ vehicle.model });
				case VehicleSelectionMode::SpawnerMode:
					Spawner::Spawner::SpawnSelectedEntity();
				case VehicleSelectionMode::Select:
					onSelection(vehicle);
			}

			menuController->GoToLastSub();
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
	: Submenu(menuController), mode(mode), onSelection(onSelection)
{
	vehicles = JSONData::GetVehicles();
}

void VehicleSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Vehicles");
	
	for each (auto && vehicleCat in vehicles) {
		DrawAction(vehicleCat.first, [this, vehicleCat] {
			auto vehicleCatSub = new VehicleSelectionCatSub(menuController, vehicleCat.first,
				vehicleCat.second, mode, [this] (VehicleData selected) {

					if (mode == VehicleSelectionMode::Select)
						onSelection(selected);
			});

			menuController->AddSubmenuToStack(vehicleCatSub);
		});
	}
}

#pragma endregion

#include "pch.h"
#include "VehicleSelection.h"
#include "EntityLists.h"
#include "Actions.h"
#include "Spawner.h"

#pragma region Category

VehicleSelectionCatSub::VehicleSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<VehicleData> vehicles, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection)
	: Submenu(menuController), title(title), vehicles(vehicles), mode(mode), onSelection(onSelection)
{
	if (mode == VehicleSelectionMode::SpawnerMode && vehicles.size() > 0)
		Spawner::Spawner::SetSelectedEntityForSpawn(vehicles[0].model, EntityType::Vehicle);
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
		Spawner::Spawner::SetSelectedEntityForSpawn(vehicles[to].model, EntityType::Vehicle);
}

#pragma endregion


#pragma region Category list

VehicleSelectionSub::VehicleSelectionSub(MenuController* menuController, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection)
	: Submenu(menuController), mode(mode), onSelection(onSelection), vehicles(EntityLists::vehicles)
{
}

void VehicleSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Vehicles");

	if (mode == VehicleSelectionMode::Spawn)
		DrawSub("Spawn Options", "required_sub_vehicleSpawnerOptions");

	DrawAction("Custom input", [this] {
		if (auto&& modelName = Game::GetInputWithKeyboard(); modelName) {
			switch (mode) {
				case VehicleSelectionMode::Spawn:
					Actions::SpawnVehicle({ *modelName });
					break;
				case VehicleSelectionMode::SpawnerMode:
					Spawner::Spawner::SetSelectedEntityForSpawn(*modelName, EntityType::Vehicle);
					Spawner::Spawner::Tick();
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

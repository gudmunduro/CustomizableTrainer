#pragma once
#include "pch.h"
#include "Submenu.h"

enum class VehicleSelectionMode {
	Spawn,
	Select,
	SpawnerMode
};

#pragma region Category

class VehicleSelectionCatSub
	: public Submenu {
public:
	VehicleSelectionCatSub(MenuController *menuController, const std::string title, const std::vector<VehicleData> vehicles, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection);

	void Draw() override;
	void SelectionDidChange(int to, int from);

private:
	std::function<void(VehicleData)> onSelection;
	const std::vector<VehicleData> vehicles;
	const std::string title;
	VehicleSelectionMode mode;
};

#pragma endregion

#pragma region Category list

class VehicleSelectionSub
	: public Submenu {
public:
	VehicleSelectionSub(MenuController* menuController, VehicleSelectionMode mode, std::function<void(VehicleData)> onSelection = [](VehicleData v) {});

	void Draw() override;

	void SubDidAppear() override;

private:
	std::vector<std::pair<std::string, std::vector<VehicleData>>> vehicles;
	std::function<void(VehicleData)> onSelection;
	VehicleSelectionMode mode;
};

#pragma endregion

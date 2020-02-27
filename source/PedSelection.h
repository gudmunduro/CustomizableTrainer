#pragma once
#include "pch.h"
#include "Submenu.h"

enum class PedSelectionMode {
	Spawn,
	Select,
	SpawnerMode
};

#pragma region Category

class PedSelectionCatSub
	: public Submenu {
public:
	PedSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<PedData> Peds, PedSelectionMode mode, std::function<void(PedData)> onSelection);

	void Draw() override;
	void SelectionDidChange(int to, int from);

private:
	std::function<void(PedData)> onSelection;
	const std::vector<PedData> peds;
	const std::string title;
	PedSelectionMode mode;
};

#pragma endregion

#pragma region Category list

class PedSelectionSub
	: public Submenu {
public:
	PedSelectionSub(MenuController* menuController, PedSelectionMode mode, std::vector<std::pair<std::string, std::vector<PedData>>> peds, std::function<void(PedData)> onSelection);

	void Draw() override;

	void SubDidAppear() override;

private:
	std::vector<std::pair<std::string, std::vector<PedData>>> peds;
	std::function<void(PedData)> onSelection;
	PedSelectionMode mode;
};

#pragma endregion

#pragma region

class HumanAnimalSelectionSub
	: public Submenu {
public:
	HumanAnimalSelectionSub(MenuController *menuController);

	void Draw() override;
};

#pragma endregion
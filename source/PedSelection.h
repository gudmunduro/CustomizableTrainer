#pragma once
#include "pch.h"
#include "Submenu.h"

enum class PedSelectionMode {
	Spawn,
	Select,
	SpawnerMode,
	ModelSelection
};

#pragma region Category

class PedSelectionSub
	: public Submenu {
public:
	PedSelectionSub(MenuController* menuController, const std::string title, const std::vector<PedData>& Peds, PedSelectionMode mode, std::function<void(PedData)> onSelection);

	void Draw() override;
	void SelectionDidChange(int to, int from);

private:
	std::function<void(PedData)> onSelection;
	const std::vector<PedData>& peds;
	const std::string title;
	PedSelectionMode mode;
};

#pragma endregion

#pragma region Category list

class PedSubCatSelectionSub
	: public Submenu {
public:
	PedSubCatSelectionSub(MenuController* menuController, PedSelectionMode mode, std::string title, const std::vector<std::pair<std::string, std::vector<PedData>>>& peds, std::function<void(PedData)> onSelection);

	void Draw() override;

	void SubDidAppear() override;

private:
	const std::vector<std::pair<std::string, std::vector<PedData>>>& peds;
	std::function<void(PedData)> onSelection;
	PedSelectionMode mode;
	std::string title;
};

#pragma endregion

#pragma region

class PedCatSelectionSub
	: public Submenu {
public:
	PedCatSelectionSub(MenuController* menuController, PedSelectionMode mode, std::function<void(PedData)> onSelection = {});

	void Draw() override;

private:
	const std::map<std::string, std::vector<std::pair<std::string, std::vector<PedData>>>>& peds;
	PedSelectionMode mode;
	std::function<void(PedData)> onSelection;
};

#pragma endregion
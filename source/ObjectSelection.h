#pragma once
#include "pch.h"
#include "Submenu.h"

enum class ObjectSelectionMode {
	Select,
	SpawnerMode
};

#pragma region Category

class ObjectSelectionCatSub
	: public Submenu {
public:
	ObjectSelectionCatSub(MenuController* menuController, const std::string title, const std::vector<ObjectData> objects, ObjectSelectionMode mode, std::function<void(ObjectData)> onSelection);

	void Draw() override;
	void SelectionDidChange(int to, int from);

	int OptionCount() override;

private:
	std::function<void(ObjectData)> onSelection;
	const std::vector<ObjectData> objects;
	const std::string title;
	ObjectSelectionMode mode;
};

#pragma endregion

#pragma region Category list

class ObjectSelectionSub
	: public Submenu {
public:
	ObjectSelectionSub(MenuController* menuController, ObjectSelectionMode mode, std::function<void(ObjectData)> onSelection = {});

	void Draw() override;

	void SubDidAppear() override;

private:
	std::vector<std::pair<std::string, std::vector<ObjectData>>> objects;
	std::vector<std::pair<std::string, int>> objectCats;
	std::function<void(ObjectData)> onSelection;
	ObjectSelectionMode mode;
};

#pragma endregion

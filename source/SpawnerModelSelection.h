#pragma once
#include "pch.h"
#include "Submenu.h"

#pragma region Objects

class SpawnerObjectsSub
	: public Submenu {
public:
	SpawnerObjectsSub(MenuController* menuController);
	void Draw() override;
	void DrawObject(std::string title, std::string model);
	void SelectionDidChange(int to, int from) override;

};

#pragma endregion

#pragma region Categories

class SpawnerSelectCatSub
	: public Submenu {
public:
	SpawnerSelectCatSub(MenuController* menuController);
	void SubDidAppear() override;
	void Draw() override;
};

#pragma endregion

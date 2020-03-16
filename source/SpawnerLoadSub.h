#pragma once
#include "Submenu.h"

class SpawnerLoadSub :
	public Submenu
{
public:
	SpawnerLoadSub(MenuController *menuController);

	void LoadFiles();

	void ReloadFiles();

	void Draw() override;
private:
	std::vector<std::string> names;
};


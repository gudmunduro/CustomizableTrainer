#pragma once
#include "Submenu.h"

class SpawnerLoadSub :
	public Submenu
{
public:
	SpawnerLoadSub(MenuController *menuController);

	void Draw() override;
private:
	std::vector<std::string> names;
};


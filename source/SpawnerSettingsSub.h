#pragma once
#include "Submenu.h"
class SpawnerSettingsSub :
	public Submenu
{
public:
	SpawnerSettingsSub(MenuController *menuController);
	void Draw() override;
};


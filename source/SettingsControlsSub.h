#pragma once
#include "Submenu.h"
class SettingsControlsSub :
	public Submenu
{
public:
	SettingsControlsSub(MenuController *menuController);

protected:
	void Draw() override;
};


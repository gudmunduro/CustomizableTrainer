#pragma once
#include "FixedSubmenu.h"
class SettingsControlsSub :
	public FixedSubmenu
{
public:
	SettingsControlsSub(MenuController *menuController);
	void Draw() override;
	int OptionCount() override;
};


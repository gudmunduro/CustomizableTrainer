#pragma once
#include "FixedSubmenu.h"
class SettingsSub :
	public FixedSubmenu
{
public:
	SettingsSub(MenuController *menuController);
	void Draw() override;
	int OptionCount() override;
};


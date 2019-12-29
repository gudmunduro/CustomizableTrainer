#pragma once
#include "FixedSubmenu.h"
class SettingsSub :
	public FixedSubmenu
{
public:
	SettingsSub(MenuController *menuController);

protected:
	void Draw() override;
};


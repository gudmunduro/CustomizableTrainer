#pragma once
#include "FixedSubmenu.h"
class SettingsControlsSub :
	public FixedSubmenu
{
public:
	SettingsControlsSub(MenuController *menuController);

protected:
	void Draw() override;
};


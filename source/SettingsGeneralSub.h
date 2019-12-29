#pragma once
#include "FixedSubmenu.h"
class SettingsGeneralSub :
	public FixedSubmenu
{
public:
	SettingsGeneralSub(MenuController *menuController);

protected:
	void Draw() override;
};


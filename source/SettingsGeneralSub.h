#pragma once
#include "Submenu.h"
class SettingsGeneralSub :
	public Submenu
{
public:
	SettingsGeneralSub(MenuController *menuController);

protected:
	void Draw() override;
};


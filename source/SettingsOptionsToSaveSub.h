#pragma once
#include "Submenu.h"
class SettingsOptionsToSaveSub :
	public Submenu
{
public:
	SettingsOptionsToSaveSub(MenuController *menuController);

	void Draw() override;
	void RespondToControls();
};


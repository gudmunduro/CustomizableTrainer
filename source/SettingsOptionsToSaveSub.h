#pragma once
#include "FixedSubmenu.h"
class SettingsOptionsToSaveSub :
	public FixedSubmenu
{
public:
	SettingsOptionsToSaveSub(MenuController *menuController);

	void Draw() override;
	void RespondToControls();
};


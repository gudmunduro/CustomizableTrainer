#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsHotkeysSub : public FixedSubmenu
{
public:
	SettingsHotkeysSub(MenuController *menuController);

	void Draw() override;
	int OptionCount() override;

};


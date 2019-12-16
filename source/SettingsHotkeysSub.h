#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsHotkeysSub : public FixedSubmenu
{
public:
	SettingsHotkeysSub(MenuController *menuController);

	void Draw() override;
	void RespondToControls() override;
	int OptionCount() override;

};


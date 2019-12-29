#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsHotkeysSub : public FixedSubmenu
{
public:
	SettingsHotkeysSub(MenuController *menuController);

protected:
	void Draw() override;
	void RespondToControls() override;
};


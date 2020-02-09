#pragma once
#include "pch.h"
#include "Submenu.h"

class SettingsHotkeysSub 
	: public Submenu
{
public:
	SettingsHotkeysSub(MenuController *menuController);

protected:
	void Draw() override;
	void RespondToControls() override;
};


#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsHotkeyActionSub :
	public FixedSubmenu
{
public:
	SettingsHotkeyActionSub(MenuController* menuController, MenuOptionType type, std::function<void(int action)> onActionSet);

protected:
	void Draw() override;
	void DrawToggleMenu();
	void DrawNumberMenu();
	void DrawActionSet(string text, int action);

	MenuOptionType type;
	std::function<void(int action)> onActionSet;
};


#pragma once
#include "pch.h"
#include "Submenu.h"

class SettingsHotkeyActionSub :
	public Submenu
{
public:
	SettingsHotkeyActionSub(MenuController* menuController, MenuOptionType type, std::function<void(int action)> onActionSet);

protected:
	void Draw() override;
	void DrawToggleMenu();
	void DrawNumberMenu();
	void DrawActionSet(std::string text, int action);

	MenuOptionType type;
	std::function<void(int action)> onActionSet;
};


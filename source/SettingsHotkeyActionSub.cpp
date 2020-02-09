/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "SettingsHotkeyActionSub.h"

#pragma region Setup

SettingsHotkeyActionSub::SettingsHotkeyActionSub(MenuController* menuController, MenuOptionType type, std::function<void(int action)> onActionSet)
	: FixedSubmenu(menuController)
{
	this->type = type;
	this->onActionSet = onActionSet;
}

#pragma endregion

#pragma region Draw menu

void SettingsHotkeyActionSub::Draw()
{
	FixedSubmenu::Draw();

	switch (type) {
	case MenuOptionType::Toggle:
		DrawToggleMenu();
		break;
	case MenuOptionType::Number:
		DrawNumberMenu();
		break;
	}
}

void SettingsHotkeyActionSub::DrawToggleMenu()
{
	DrawTitle("Toggle action");
	DrawActionSet("Toggle", 0);
	DrawActionSet("On", 1);
	DrawActionSet("Off", 2);
}

void SettingsHotkeyActionSub::DrawNumberMenu()
{
	DrawTitle("Toggle action");
	DrawActionSet("Increment", 0);
	DrawActionSet("Decrement", 1);
}

#pragma endregion

#pragma region Draw option

void SettingsHotkeyActionSub::DrawActionSet(string text, int action) 
{
	DrawAction(text, [this, action] {
		if (onActionSet)
			onActionSet(action);
		menuController->GoToLastSub();
	});
}

#pragma endregion

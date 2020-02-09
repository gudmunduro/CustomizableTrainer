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
#include "SettingsSub.h"
#include "Controls.h"

SettingsSub::SettingsSub(MenuController* menuController) : Submenu(menuController)
{
}

void SettingsSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Settings");
	DrawSub("General", "builtin_sub_settingsGeneral");
	DrawSub("Color scheme", "builtin_sub_settingsColorScheme");
	DrawSub("Controls", "builtin_sub_settingsControls");
	DrawSub("Hotkeys", "builtin_sub_settingsHotkeys");
	DrawSub("Options to save", "builtin_sub_settingsOptionsToSave");
}

void SettingsSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}
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
#include "SettingsHotkeysSub.h"
#include "HotkeyController.h"
#include "Controls.h"
#include "ConfirmDialog.h"
#include "SettingsEditAddHotkeySub.h"

SettingsHotkeysSub::SettingsHotkeysSub(MenuController* menuController) : Submenu(menuController)
{
}

void SettingsHotkeysSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Hotkeys");

	DrawAction("Add >", [this] {
		auto hotkeySub = new SettingsEditAddHotkeySub(nullptr, menuController);
		menuController->AddSubmenuToStack(hotkeySub);
	});

	for (int i = 0; i < HotkeyController::hotkeys.size(); i++) {
		auto hotkey = &HotkeyController::hotkeys[i];

		DrawAction(hotkey->name + " >", [this, hotkey] {
			auto hotkeySub = new SettingsEditAddHotkeySub(hotkey, menuController);
			menuController->AddSubmenuToStack(hotkeySub);
		});
	}
}

void SettingsHotkeysSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (selection != 0 && Controls::IsMenuControlPressed(MenuControl::MenuEditModeDeleteOption)) {
		auto confirmDialog = new ConfirmDialog(menuController, "Delete hotkey?", "", "Delete", "Cancel", [this](bool deleteHotkey) {
			if (deleteHotkey) {
				HotkeyController::hotkeys.erase(HotkeyController::hotkeys.begin() + selection - 1);
				HotkeyController::Save();
			}
		});
		menuController->AddSubmenuToStack(confirmDialog);
	}
}

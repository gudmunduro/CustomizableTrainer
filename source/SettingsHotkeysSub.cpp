#include "pch.h"
#include "SettingsHotkeysSub.h"
#include "HotkeyController.h"
#include "Controls.h"
#include "ConfirmDialog.h"
#include "SettingsEditAddHotkeySub.h"

SettingsHotkeysSub::SettingsHotkeysSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

void SettingsHotkeysSub::Draw()
{
	FixedSubmenu::Draw();

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
	FixedSubmenu::RespondToControls();

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

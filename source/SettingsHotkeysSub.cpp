#include "pch.h"
#include "SettingsHotkeysSub.h"
#include "HotkeyController.h"

SettingsHotkeysSub::SettingsHotkeysSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

void SettingsHotkeysSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Hotkeys");

	DrawAction("Add >", [this] {
		
	});

	for each (auto hotkey in HotkeyController::hotkeys) {
		DrawAction(hotkey.name + " >", [this] {
			
		});
	}
}

int SettingsHotkeysSub::OptionCount()
{
	return HotkeyController::hotkeys.size() + 1;
}
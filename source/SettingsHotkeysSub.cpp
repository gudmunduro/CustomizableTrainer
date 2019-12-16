#include "pch.h"
#include "SettingsHotkeysSub.h"
#include "HotkeyController.h"
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

int SettingsHotkeysSub::OptionCount()
{
	return HotkeyController::hotkeys.size() + 1;
}
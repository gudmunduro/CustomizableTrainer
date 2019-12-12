#include "pch.h"
#include "SettingsSub.h"

SettingsSub::SettingsSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

void SettingsSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Settings");
	DrawSub("Controls", "builtin_sub_settingsControls");
	DrawSub("Hotkeys", "builtin_sub_hotkeys");
}

int SettingsSub::OptionCount()
{
	return 2;
}
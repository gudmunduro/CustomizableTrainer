#include "pch.h"
#include "SettingsControlsSub.h"

SettingsControlsSub::SettingsControlsSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

void SettingsControlsSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Controls");
	DrawSub("Keyboard", "builtin_sub_controlsKeyboard");
	DrawSub("Controller", "builtin_sub_controlsController");
}

int SettingsControlsSub::OptionCount()
{
	return 2;
}
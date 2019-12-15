#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsEditAddHotkeySub :
	public FixedSubmenu
{
public:
	SettingsEditAddHotkeySub(string title, Hotkey* hotkeyToEdit, MenuController* menuController);

	void Draw() override;

	int OptionCount() override;

private:
	string title;
	Hotkey *hotkeyToEdit;
};


#pragma once
#include "FixedSubmenu.h"

class SettingsColorSchemeSub :
	public FixedSubmenu
{
public:
	SettingsColorSchemeSub(MenuController *menuController);

	void Draw() override;
	void DrawSetColorAction(string text, Color *color);
	int OptionCount() override;
};


#pragma once
#include "FixedSubmenu.h"

class SettingsColorSchemeSub :
	public FixedSubmenu
{
public:
	SettingsColorSchemeSub(MenuController *menuController);

protected:
	void Draw() override;
	void DrawSetColorAction(string text, Color* color);
};


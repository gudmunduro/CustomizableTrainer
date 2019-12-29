#pragma once
#include "FixedSubmenu.h"

class SettingsSetColorSub :
	public FixedSubmenu
{
public:
	SettingsSetColorSub(string title, Color *colorToChange, MenuController *menuController);

protected:
	void Draw() override;
	void DrawColorValue(string text, int* color);

	string title;
	Color* colorToChange;
};


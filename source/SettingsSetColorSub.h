#pragma once
#include "FixedSubmenu.h"

class SettingsSetColorSub :
	public FixedSubmenu
{
public:
	SettingsSetColorSub(string title, Color *colorToChange, MenuController *menuController);

	void Draw() override;

	void DrawColorValue(string text, int* color);

	int OptionCount() override;
private:
	string title;
	Color* colorToChange;
};


#pragma once
#include "Submenu.h"

class SettingsSetColorSub :
	public Submenu
{
public:
	SettingsSetColorSub(string title, Color *colorToChange, MenuController *menuController);

protected:
	void Draw() override;
	void DrawColorValue(string text, int* color);

	string title;
	Color* colorToChange;
};


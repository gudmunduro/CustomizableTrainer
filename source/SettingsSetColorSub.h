#pragma once
#include "Submenu.h"

class SettingsSetColorSub :
	public Submenu
{
public:
	SettingsSetColorSub(std::string title, Color *colorToChange, MenuController *menuController);

protected:
	void Draw() override;
	void DrawColorValue(std::string text, int* color);

	std::string title;
	Color* colorToChange;
};


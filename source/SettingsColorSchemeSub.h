#pragma once
#include "Submenu.h"

class SettingsColorSchemeSub :
	public Submenu
{
public:
	SettingsColorSchemeSub(MenuController *menuController);

protected:
	void Draw() override;
	void DrawSetColorAction(std::string text, Color& color);
};


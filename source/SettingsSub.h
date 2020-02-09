#pragma once
#include "Submenu.h"

class SettingsSub :
	public Submenu
{
public:
	SettingsSub(MenuController *menuController);

protected:
	void Draw() override;
	void RespondToControls() override;
};


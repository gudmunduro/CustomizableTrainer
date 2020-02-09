#pragma once
#include "Submenu.h"

class SettingsAddOptionToSaveSub :
	public Submenu
{
public:
	SettingsAddOptionToSaveSub(MenuController *menuController, int index = -1);
	void Draw() override;

private:
	OptionToSave savedOptionToAdd;
	bool isEditingSavedOption;
	int editingOptionIndex;
};


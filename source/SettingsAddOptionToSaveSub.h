#pragma once
#include "FixedSubmenu.h"
class SettingsAddOptionToSaveSub :
	public FixedSubmenu
{
public:
	SettingsAddOptionToSaveSub(MenuController *menuController, int index = -1);
	void Draw() override;

private:
	OptionToSave savedOptionToAdd;
	bool isEditingSavedOption;
	int editingOptionIndex;
};


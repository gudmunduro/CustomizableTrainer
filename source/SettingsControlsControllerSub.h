#pragma once
#include "pch.h"
#include "FixedSubmenu.h"
#include "ControlManager.h"

class SettingsControlsControllerSub :
	public FixedSubmenu
{
public:
	SettingsControlsControllerSub(MenuController *menuController);

	void Draw() override;
	void DrawEditControl(string text, Hash* control);

	void SubWillDraw() override;

	void RespondToControls() override;
	string ControlStringValue(Hash control);

	int OptionCount();

	bool isEditingControl = false;
	Hash* controlToEdit;
private:
};


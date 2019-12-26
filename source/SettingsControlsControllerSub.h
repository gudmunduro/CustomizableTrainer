#pragma once
#include "pch.h"
#include "FixedSubmenu.h"
#include "Controls.h"

class SettingsControlsControllerSub :
	public FixedSubmenu
{
public:
	SettingsControlsControllerSub(MenuController *menuController);

	void Draw() override;
	void DrawEditControl(string text, Hash* control);

	void SubWillDraw() override;

	void RespondToControls() override;

	int OptionCount();

	bool isEditingControl;
private:
	Hash* controlToEdit;
	float editingControlAlpha = 255.0f;
	bool editingControlAlphaDirection = false;
};


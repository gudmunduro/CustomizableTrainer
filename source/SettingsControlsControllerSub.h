#pragma once
#include "pch.h"
#include "Submenu.h"
#include "Controls.h"

class SettingsControlsControllerSub :
	public Submenu
{
public:
	SettingsControlsControllerSub(MenuController *menuController);

protected:
	void Draw() override;
	void DrawEditControl(string text, Hash* control);

	void SubWillDraw() override;

	void RespondToControls() override;

	bool isEditingControl;
	Hash* controlToEdit;
	FloatAnimation editingControlAlphaAnim;
};


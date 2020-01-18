#pragma once
#include "FixedSubmenu.h"

class SettingsControlsKeyboardSub :
	public Submenu
{
public:
	SettingsControlsKeyboardSub(MenuController *menuController);

	bool isEditingKey;

protected:
	void Draw() override;
	void DrawEditControl(string text, int* control);
	void SubWillDraw() override;
	void RespondToControls() override;

	int* keyToEdit;
	FloatAnimation editingKeyAlphaAnim;
};


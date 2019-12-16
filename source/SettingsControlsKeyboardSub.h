#pragma once
#include "FixedSubmenu.h"

class SettingsControlsKeyboardSub :
	public FixedSubmenu
{
public:
	SettingsControlsKeyboardSub(MenuController *menuController);
	void Draw() override;
	void DrawEditControl(string text, int* control);
	void SubWillDraw() override;
	void RespondToControls() override;

	int OptionCount();

	bool isEditingKey;
private:
	int* keyToEdit;
	float editingKeyAlpha = 255.0f;
	bool editingKeyAlphaDirection = false;
};


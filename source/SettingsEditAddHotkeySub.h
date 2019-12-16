#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsEditAddHotkeySub :
	public FixedSubmenu
{
public:
	SettingsEditAddHotkeySub(string title, Hotkey* hotkeyToEdit, MenuController* menuController);

	void Draw() override;

	void RespondToControls();

	string ActionString();

	string GetActionValueAsString();

	int OptionCount() override;

	void UpdateActionParameters();

private:
	string title;
	Hotkey *hotkeyToEdit;
	bool isEditingControllerControl = false;
	bool isEditingKeyboardControl = false;
	Hash *controlToEdit = 0;
	float editingControlAlpha = 255.0f;
	bool editingControlAlphaDirection = false;
};


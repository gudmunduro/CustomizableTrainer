#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsEditAddHotkeySub :
	public FixedSubmenu
{
public:

	SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, Hotkey defaultHotkeyData, MenuController* menuController);

	SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, MenuController* menuController);

protected:
	void Draw() override;
	void DrawEditControl(string text, Hash* control);
	void DrawEditKey(string text, int* key);

	void OnValueOptionPress();
	void SubWillDraw() override;

	void RespondToControls();

	string ActionString();
	string ActionValueString();
	void UpdateActionParameters();

	string title;
	Hotkey hotkeyToEdit;
	Hotkey *hotkeyToSaveTo;
	bool isEditingControllerControl = false;
	bool isEditingKeyboardControl = false;
	Hash *controlToEdit = 0;
	float editingControlAlpha = 255.0f;
	bool editingControlAlphaDirection = false;
	std::vector<MenuOptionParameter> parameters;
};


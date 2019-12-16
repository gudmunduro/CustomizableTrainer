#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class SettingsEditAddHotkeySub :
	public FixedSubmenu
{
public:
	SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, MenuController* menuController);

	void Draw() override;

	void DrawEditControl(string text, int control, std::function<void()> onPress);

	void DrawEditControl(string text, Hash* control);

	void DrawEditKey(string text, int* key);

	void OnValueOptionPress();

	void RespondToControls();

	string ActionString();

	string GetActionValueAsString();

	int OptionCount() override;

	void UpdateActionParameters();

private:
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


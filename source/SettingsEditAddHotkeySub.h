#pragma once
#include "pch.h"
#include "Submenu.h"

class SettingsEditAddHotkeySub :
	public Submenu
{
public:

	SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, Hotkey defaultHotkeyData, MenuController* menuController);

	SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, MenuController* menuController);

protected:
	void Draw() override;
	void DrawEditControl(std::string text, Hash* control);
	void DrawEditKey(std::string text, int* key);

	void OnValueOptionPress();
	void SubWillDraw() override;

	void RespondToControls();

	std::string ActionString();
	std::string ActionValueString();
	void UpdateActionParameters();

	std::string title;
	Hotkey hotkeyToEdit;
	Hotkey *hotkeyToSaveTo;
	bool isEditingControllerControl = false;
	bool isEditingKeyboardControl = false;
	Hash *controlToEdit = 0;
	float editingControlAlpha = 255.0f;
	bool editingControlAlphaDirection = false;
	std::vector<MenuOptionParameter> parameters;
};


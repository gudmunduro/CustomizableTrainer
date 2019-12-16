#include "pch.h"
#include "SettingsControlsKeyboardSub.h"
#include "ControlManager.h"
#include "MenuSettings.h"
#include "keyboard.h"
#include "JsonDataManager.h"

SettingsControlsKeyboardSub::SettingsControlsKeyboardSub(MenuController* menuController) : FixedSubmenu(menuController)
{
	isEditingKey = false;
	keyToEdit = 0;
}

// MARK: Draw

void SettingsControlsKeyboardSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Keyboard");
	DrawEditControl("Open", &MenuSettings::MenuOpen);
	DrawEditControl("Press option", &MenuSettings::MenuOptionPress);
	DrawEditControl("Up", &MenuSettings::MenuUp);
	DrawEditControl("Down", &MenuSettings::MenuDown);
	DrawEditControl("Back", &MenuSettings::MenuBack);
	DrawEditControl("Value up", &MenuSettings::MenuAdjustValueDown);
	DrawEditControl("Value down", &MenuSettings::MenuAdjustValueUp);
	DrawEditControl("Enter edit mode", &MenuSettings::MenuEditModeEnter);
	DrawEditControl("Exit edit mode", &MenuSettings::MenuEditModeExit);
	DrawEditControl("Exit edit mode and save", &MenuSettings::MenuEditModeExitAndSave);
	DrawEditControl("Move option", &MenuSettings::MenuEditModeMoveOption);
	DrawEditControl("Add option", &MenuSettings::MenuEditModeAddOption);
	DrawEditControl("Edit option", &MenuSettings::MenuEditModeAddOption);
	DrawEditControl("Delete option", &MenuSettings::MenuEditModeDeleteOption);
	DrawEditControl("Boost vehicle", &MenuSettings::BindBoost);
}

void SettingsControlsKeyboardSub::DrawEditControl(string text, int* control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		keyToEdit = control;
		isEditingKey = true;
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingKey && keyToEdit == control) ? (int) editingKeyAlpha : 255;
	Game::DrawText(ControlManager::GeyStringValueForKey(*control), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
}

// MARK: Events

void SettingsControlsKeyboardSub::SubWillDraw()
{
	if (isEditingKey) {
		ControlManager::CanceMenuControlslForThisFrame();

		if (editingKeyAlpha == 0)
			editingKeyAlphaDirection = true;
		else if (editingKeyAlpha == 255)
			editingKeyAlphaDirection = false;
		editingKeyAlpha += editingKeyAlphaDirection ? 10.2f : -10.2f;
	}

	FixedSubmenu::SubWillDraw();
}

// MARK: Controls

void SettingsControlsKeyboardSub::RespondToControls()
{
	FixedSubmenu::RespondToControls();
	if (isEditingKey) {
		for (int i = 0; i < 255; i++) {
			bool keyUp = IsKeyJustUp(i);
			if (keyUp)
			{
				*keyToEdit = i;
				isEditingKey = false;
				editingKeyAlpha = 255;
				editingKeyAlphaDirection = false;
				JSONDataManager jsonDataManager;
				jsonDataManager.SaveMenuSettings();
				break;
			}
		}
	}
}

// MARK: Getters

int SettingsControlsKeyboardSub::OptionCount()
{
	return 15;
}

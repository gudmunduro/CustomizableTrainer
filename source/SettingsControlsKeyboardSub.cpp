#include "pch.h"
#include "SettingsControlsKeyboardSub.h"
#include "Controls.h"
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
	DrawEditControl("Select", &MenuSettings::MenuOptionPress);
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
	DrawEditControl("Boat fly mode accelerate", &MenuSettings::BoatFlyModeAccelerate);
	DrawEditControl("Boat fly mode decelerate", &MenuSettings::BoatFlyModeDecelerate);
	DrawEditControl("Boat fly mode up", &MenuSettings::BoatFlyModeUp);
	DrawEditControl("Boat fly mode down", &MenuSettings::BoatFlyModeDown);
	DrawEditControl("Boat fly mode left", &MenuSettings::BoatFlyModeLeft);
	DrawEditControl("Boat fly mode right", &MenuSettings::BoatFlyModeRight);
	DrawEditControl("Boat fly mode yaw left", &MenuSettings::BoatFlyModeYawLeft);
	DrawEditControl("Boat fly mode yaw right", &MenuSettings::BoatFlyModeYawRight);
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
	Game::DrawText(Controls::GeyStringValueForKey(*control), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
}

// MARK: Events

void SettingsControlsKeyboardSub::SubWillDraw()
{
	if (isEditingKey) {
		Controls::CanceMenuControlslForThisFrame();

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
	return 23;
}

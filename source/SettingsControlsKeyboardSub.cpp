/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "SettingsControlsKeyboardSub.h"
#include "Controls.h"
#include "MenuSettings.h"
#include "keyboard.h"
#include "JsonData.h"

SettingsControlsKeyboardSub::SettingsControlsKeyboardSub(MenuController* menuController) 
	: Submenu(menuController)
{
	isEditingKey = false;
	keyToEdit = 0;

	// Setup animation
	editingKeyAlphaAnim = FloatAnimation();
	editingKeyAlphaAnim.from = 0.0f;
	editingKeyAlphaAnim.to = 255.0f;
	editingKeyAlphaAnim.duration = 300;
	editingKeyAlphaAnim.direction = Direction::Backward;
	editingKeyAlphaAnim.repeat = true;
}

#pragma region Draw

void SettingsControlsKeyboardSub::Draw()
{
	Submenu::Draw();

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

		editingKeyAlphaAnim.direction = Direction::Backward;
		editingKeyAlphaAnim.value = 255.0f;
		editingKeyAlphaAnim.Start();
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingKey && keyToEdit == control) ? (int) editingKeyAlphaAnim.value : 255;
	Game::DrawText(Controls::GeyStringValueForKey(*control), { menuPos.x + 16.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, alpha });
}

#pragma endregion

#pragma region Events

void SettingsControlsKeyboardSub::SubWillDraw()
{
	Submenu::SubWillDraw();

	if (isEditingKey)
		Controls::CanceMenuControlslForThisFrame();
}

#pragma endregion

#pragma region Controls

void SettingsControlsKeyboardSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (isEditingKey) {
		for (int i = 0; i < 255; i++) {
			bool keyUp = IsKeyJustUp(i);
			if (keyUp)
			{
				*keyToEdit = i;
				isEditingKey = false;
				editingKeyAlphaAnim.Stop();

				JSONData::SaveMenuSettings();
				break;
			}
		}
	}
}

#pragma endregion

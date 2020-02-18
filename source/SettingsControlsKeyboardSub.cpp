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
	DrawEditControl("Open", &Settings::Controls::Keyboard::MenuOpen);
	DrawEditControl("Select", &Settings::Controls::Keyboard::MenuOptionPress);
	DrawEditControl("Up", &Settings::Controls::Keyboard::MenuUp);
	DrawEditControl("Down", &Settings::Controls::Keyboard::MenuDown);
	DrawEditControl("Back", &Settings::Controls::Keyboard::MenuBack);
	DrawEditControl("Value up", &Settings::Controls::Keyboard::MenuAdjustValueDown);
	DrawEditControl("Value down", &Settings::Controls::Keyboard::MenuAdjustValueUp);
	DrawEditControl("Enter edit mode", &Settings::Controls::Keyboard::MenuEditModeEnter);
	DrawEditControl("Exit edit mode", &Settings::Controls::Keyboard::MenuEditModeExit);
	DrawEditControl("Exit edit mode and save", &Settings::Controls::Keyboard::MenuEditModeExitAndSave);
	DrawEditControl("Move option", &Settings::Controls::Keyboard::MenuEditModeMoveOption);
	DrawEditControl("Add option", &Settings::Controls::Keyboard::MenuEditModeAddOption);
	DrawEditControl("Edit option", &Settings::Controls::Keyboard::MenuEditModeAddOption);
	DrawEditControl("Delete option", &Settings::Controls::Keyboard::MenuEditModeDeleteOption);
	DrawEditControl("Boost vehicle", &Settings::Controls::Keyboard::BindBoost);
	DrawEditControl("Boat fly mode accelerate", &Settings::Controls::Keyboard::BoatFlyModeAccelerate);
	DrawEditControl("Boat fly mode decelerate", &Settings::Controls::Keyboard::BoatFlyModeDecelerate);
	DrawEditControl("Boat fly mode up", &Settings::Controls::Keyboard::BoatFlyModeUp);
	DrawEditControl("Boat fly mode down", &Settings::Controls::Keyboard::BoatFlyModeDown);
	DrawEditControl("Boat fly mode left", &Settings::Controls::Keyboard::BoatFlyModeLeft);
	DrawEditControl("Boat fly mode right", &Settings::Controls::Keyboard::BoatFlyModeRight);
	DrawEditControl("Boat fly mode yaw left", &Settings::Controls::Keyboard::BoatFlyModeYawLeft);
	DrawEditControl("Boat fly mode yaw right", &Settings::Controls::Keyboard::BoatFlyModeYawRight);
}

void SettingsControlsKeyboardSub::DrawEditControl(std::string text, int* control)
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

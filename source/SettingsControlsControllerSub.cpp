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
#include "SettingsControlsControllerSub.h"
#include "Controls.h"
#include "JsonData.h"
#include "MenuSettings.h"

SettingsControlsControllerSub::SettingsControlsControllerSub(MenuController* menuController) 
	: Submenu(menuController)
{
	isEditingControl = false;
	controlToEdit = nullptr;

	// Setup animation
	editingControlAlphaAnim = FloatAnimation();
	editingControlAlphaAnim.from = 0.0f;
	editingControlAlphaAnim.to = 255.0f;
	editingControlAlphaAnim.duration = 300;
	editingControlAlphaAnim.direction = Direction::Backward;
	editingControlAlphaAnim.repeat = true;
}

#pragma region Draw

void SettingsControlsControllerSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Controller");
	DrawEditControl("Open", &Settings::Controls::Controller::MenuOpen);
	DrawEditControl("Open modifier", &Settings::Controls::Controller::MenuOpenModifier);
	DrawEditControl("Select", &Settings::Controls::Controller::MenuOptionPress);
	DrawEditControl("Up", &Settings::Controls::Controller::MenuUp);
	DrawEditControl("Down", &Settings::Controls::Controller::MenuDown);
	DrawEditControl("Back", &Settings::Controls::Controller::MenuBack);
	DrawEditControl("Value down", &Settings::Controls::Controller::MenuAdjustValueDown);
	DrawEditControl("Value up", &Settings::Controls::Controller::MenuAdjustValueUp);
	DrawEditControl("Enter edit mode", &Settings::Controls::Controller::MenuEditModeEnter);
	DrawEditControl("Exit edit mode", &Settings::Controls::Controller::MenuEditModeExit);
	DrawEditControl("Exit edit mode and save", &Settings::Controls::Controller::MenuEditModeExitAndSave);
	DrawEditControl("Move option", &Settings::Controls::Controller::MenuEditModeMoveOption);
	DrawEditControl("Add option", &Settings::Controls::Controller::MenuEditModeAddOption);
	DrawEditControl("Edit option", &Settings::Controls::Controller::MenuEditModeEditOption);
	DrawEditControl("Delete option", &Settings::Controls::Controller::MenuEditModeDeleteOption);
	DrawEditControl("Boost vehicle", &Settings::Controls::Controller::BindBoost);
	DrawEditControl("Boat fly mode accelerate", &Settings::Controls::Controller::BoatFlyModeAccelerate);
	DrawEditControl("Boat fly mode decelerate", &Settings::Controls::Controller::BoatFlyModeDecelerate);
	DrawEditControl("Boat fly mode yaw left", &Settings::Controls::Controller::BoatFlyModeYawLeft);
	DrawEditControl("Boat fly mode yaw right", &Settings::Controls::Controller::BoatFlyModeYawRight);
}

void SettingsControlsControllerSub::DrawEditControl(std::string text, Hash* control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		if (!Controls::IsUsingController()) {
			Game::PrintSubtitle("You need to be using a controller to change controller controls");
			return;
		}
		controlToEdit = control;
		isEditingControl = true;

		editingControlAlphaAnim.direction = Direction::Backward;
		editingControlAlphaAnim.value = 255.0f;
		editingControlAlphaAnim.Start();
	});
	
	auto menuPos = menuController->position;
	int alpha = (isEditingControl && controlToEdit == control) ? (int) editingControlAlphaAnim.value : 255;
	Game::DrawText(Controls::GetStringValueForControl(*control), { menuPos.x + 16.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, alpha });
}

#pragma endregion

#pragma region Events

void SettingsControlsControllerSub::SubWillDraw()
{
	Submenu::SubWillDraw();

	if (isEditingControl)
		Controls::CanceMenuControlslForThisFrame();
}

#pragma endregion

#pragma region Controls

void SettingsControlsControllerSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (isEditingControl) {
		for each (auto control in allControls) {
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, control)) {
				*controlToEdit = control;
				isEditingControl = false;
				editingControlAlphaAnim.Stop();
				Controls::CanceMenuControlslForThisFrame();
				
				JSONData::SaveMenuSettings();
			}
		}
	}
}

#pragma endregion

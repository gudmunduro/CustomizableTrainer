#include "pch.h"
#include "SettingsControlsControllerSub.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "MenuSettings.h"
#include "Routine.h"

// MARK: Draw

SettingsControlsControllerSub::SettingsControlsControllerSub(MenuController* menuController) : FixedSubmenu(menuController)
{
	isEditingControl = false;
	controlToEdit = nullptr;
}

void SettingsControlsControllerSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Controller");
	DrawEditControl("Open", &MenuSettings::ControllerMenuOpen);
	DrawEditControl("Open modifier", &MenuSettings::ControllerMenuOpenModifier);
	DrawEditControl("Select", &MenuSettings::ControllerMenuOptionPress);
	DrawEditControl("Up", &MenuSettings::ControllerMenuUp);
	DrawEditControl("Down", &MenuSettings::ControllerMenuDown);
	DrawEditControl("Back", &MenuSettings::ControllerMenuBack);
	DrawEditControl("Value down", &MenuSettings::ControllerMenuAdjustValueDown);
	DrawEditControl("Value up", &MenuSettings::ControllerMenuAdjustValueUp);
	DrawEditControl("Enter edit mode", &MenuSettings::ControllerMenuEditModeEnter);
	DrawEditControl("Exit edit mode", &MenuSettings::ControllerMenuEditModeExit);
	DrawEditControl("Exit edit mode and save", &MenuSettings::ControllerMenuEditModeExitAndSave);
	DrawEditControl("Move option", &MenuSettings::ControllerMenuEditModeMoveOption);
	DrawEditControl("Add option", &MenuSettings::ControllerMenuEditModeAddOption);
	DrawEditControl("Edit option", &MenuSettings::ControllerMenuEditModeEditOption);
	DrawEditControl("Delete option", &MenuSettings::ControllerMenuEditModeDeleteOption);
	DrawEditControl("Boost vehicle", &MenuSettings::ControllerBindBoost);
	DrawEditControl("Boat fly mode accelerate", &MenuSettings::ControllerBoatFlyModeAccelerate);
	DrawEditControl("Boat fly mode decelerate", &MenuSettings::ControllerBoatFlyModeDecelerate);
	DrawEditControl("Boat fly mode yaw left", &MenuSettings::ControllerBoatFlyModeYawLeft);
	DrawEditControl("Boat fly mode yaw right", &MenuSettings::ControllerBoatFlyModeYawRight);
}

void SettingsControlsControllerSub::DrawEditControl(string text, Hash* control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		if (!ControlManager::IsUsingController()) {
			Routine::StartDrawBottomMessage("You need to be using a controller to change controller controls");
			return;
		}
		controlToEdit = control;
		isEditingControl = true;
	});
	
	auto menuPos = menuController->position;
	int alpha = (isEditingControl && controlToEdit == control) ? (int)editingControlAlpha : 255;
	Game::DrawText(ControlManager::GetStringValueForControl(*control), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
}

// MARK: Events

void SettingsControlsControllerSub::SubWillDraw()
{
	if (isEditingControl) {
		ControlManager::CanceMenuControlslForThisFrame();

		if (editingControlAlpha == 0)
			editingControlAlphaDirection = true;
		else if (editingControlAlpha == 255)
			editingControlAlphaDirection = false;
		editingControlAlpha += editingControlAlphaDirection ? 10.2f : -10.2f;
	}

	FixedSubmenu::SubWillDraw();
}

// MARK: Controls

void SettingsControlsControllerSub::RespondToControls()
{
	FixedSubmenu::RespondToControls();
	if (isEditingControl) {
		for each (auto control in allControls) {
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, control)) {
				*controlToEdit = control;
				isEditingControl = false;
				editingControlAlpha = 255;
				editingControlAlphaDirection = false;
				JSONDataManager jsonDataManager;
				jsonDataManager.SaveMenuSettings();
			}
		}
	}
}

// MARK: Getters

int SettingsControlsControllerSub::OptionCount()
{
	return 20;
}
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
	DrawEditControl("Press option", &MenuSettings::ControllerMenuOptionPress);
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
	DrawEditControl("Delete option", &MenuSettings::ControllerMenuEditModeDeleteOption);
	DrawEditControl("Boost vehicle", &MenuSettings::ControllerBindBoost);
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
	Game::DrawText(GetStringValueForControl(*control), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
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
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, control)) {
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

string SettingsControlsControllerSub::GetStringValueForControl(Hash control) 
{
	switch (control) {
		case XboxControl::INPUT_FRONTEND_DOWN: return "Down";
		case XboxControl::INPUT_FRONTEND_UP: return "Up";
		case XboxControl::INPUT_FRONTEND_LEFT: return "Left";
		case XboxControl::INPUT_FRONTEND_RIGHT: return "Right";
		case XboxControl::INPUT_FRONTEND_RDOWN: return "R down";
		case XboxControl::INPUT_FRONTEND_RUP: return "R up";
		case XboxControl::INPUT_FRONTEND_RLEFT: return "R left";
		case XboxControl::INPUT_FRONTEND_RRIGHT: return "R right";
		case XboxControl::INPUT_FRONTEND_AXIS_X: return "LS right";
		case XboxControl::INPUT_FRONTEND_AXIS_Y: return "LS down";
		case XboxControl::INPUT_FRONTEND_RIGHT_AXIS_X: return "RS right";
		case XboxControl::INPUT_FRONTEND_RIGHT_AXIS_Y: return "RS down";
		case XboxControl::INPUT_FRONTEND_PAUSE: return "Pause";
		case XboxControl::INPUT_FRONTEND_PAUSE_ALTERNATE: return "Pause-alt";
		case XboxControl::INPUT_FRONTEND_ACCEPT: return "A";
		case XboxControl::INPUT_FRONTEND_CANCEL: return "B";
		case XboxControl::INPUT_FRONTEND_X: return "X";
		case XboxControl::INPUT_FRONTEND_Y: return "Y";
		case XboxControl::INPUT_FRONTEND_LB: return "LB";
		case XboxControl::INPUT_FRONTEND_RB: return "RB";
		case XboxControl::INPUT_FRONTEND_LT: return "LT";
		case XboxControl::INPUT_FRONTEND_RT: return "RT";
		case XboxControl::INPUT_FRONTEND_LS: return "LS";
		case XboxControl::INPUT_FRONTEND_RS: return "RS";
		default: return "Unknown";
	}
}

int SettingsControlsControllerSub::OptionCount()
{
	return 15;
}
#include "pch.h"
#include "SettingsControlsControllerSub.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "MenuSettings.h"

// MARK: Variables

const Hash allControls[24] = { 
	XboxControl::INPUT_FRONTEND_DOWN,
	XboxControl::INPUT_FRONTEND_UP,
	XboxControl::INPUT_FRONTEND_LEFT,
	XboxControl::INPUT_FRONTEND_RIGHT,
	XboxControl::INPUT_FRONTEND_RDOWN,
	XboxControl::INPUT_FRONTEND_RUP,
	XboxControl::INPUT_FRONTEND_RLEFT,
	XboxControl::INPUT_FRONTEND_RRIGHT,
	XboxControl::INPUT_FRONTEND_AXIS_X,
	XboxControl::INPUT_FRONTEND_AXIS_Y,
	XboxControl::INPUT_FRONTEND_RIGHT_AXIS_X,
	XboxControl::INPUT_FRONTEND_RIGHT_AXIS_Y,
	XboxControl::INPUT_FRONTEND_PAUSE,
	XboxControl::INPUT_FRONTEND_PAUSE_ALTERNATE,
	XboxControl::INPUT_FRONTEND_ACCEPT,
	XboxControl::INPUT_FRONTEND_CANCEL,
	XboxControl::INPUT_FRONTEND_X,
	XboxControl::INPUT_FRONTEND_Y,
	XboxControl::INPUT_FRONTEND_LB,
	XboxControl::INPUT_FRONTEND_RB,
	XboxControl::INPUT_FRONTEND_LT,
	XboxControl::INPUT_FRONTEND_RT,
	XboxControl::INPUT_FRONTEND_LS,
	XboxControl::INPUT_FRONTEND_RS 
};


// MARK: Draw

SettingsControlsControllerSub::SettingsControlsControllerSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

void SettingsControlsControllerSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Controller");
	DrawEditControl("Open menu", &MenuSettings::ControllerMenuOpen);
	DrawEditControl("Open menu modifier", &MenuSettings::ControllerMenuOpenModifier);
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
	DrawEditControl("Bind boost", &MenuSettings::ControllerBindBoost);
}

void SettingsControlsControllerSub::DrawEditControl(string text, Hash* control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		controlToEdit = control;
		isEditingControl = true;
	});
	
	auto menuPos = menuController->position;
	Game::DrawText(ControlStringValue(*control), { menuPos.x + 0.13f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, 255 });
}

// MARK: Events

void SettingsControlsControllerSub::SubWillDraw()
{
	if (isEditingControl) {
		ControlManager::CanceMenuControlslForThisFrame();
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
				JSONDataManager jsonDataManager;
				jsonDataManager.SaveMenuSettings();
			}
		}
	}
}

// MARK: Misc

string SettingsControlsControllerSub::ControlStringValue(Hash control) 
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
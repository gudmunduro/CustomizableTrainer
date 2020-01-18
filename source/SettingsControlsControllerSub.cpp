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

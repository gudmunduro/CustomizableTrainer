#include "pch.h"
#include "ControlManager.h"
#include "keyboard.h"
#include "MenuSettings.h"

bool ControlManager::IsMenuControlPressed(MenuControl control) {
	if (shouldCancelForThisFrame) return false;
	switch (control) {
	case MenuControl::MenuOptionPress:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuOptionPress) : IsKeyJustUp(MenuSettings::MenuOptionPress);
	case MenuControl::MenuDown:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuDown) : IsKeyJustUp(MenuSettings::MenuDown);
	case MenuControl::MenuUp:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuUp) : IsKeyJustUp(MenuSettings::MenuUp);
	case MenuControl::MenuOpen:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, MenuSettings::ControllerMenuOpenModifier) && CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuOpen) : IsKeyJustUp(MenuSettings::MenuOpen);
	case MenuControl::MenuGoBack:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuBack) : IsKeyJustUp(MenuSettings::MenuBack);
	case MenuControl::MenuEditModeEnter:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeEnter) : IsKeyJustUp(MenuSettings::MenuEditModeEnter);
	case MenuControl::MenuEditModeExit:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeExit) : IsKeyJustUp(MenuSettings::MenuEditModeExit);
	case MenuControl::MenuEditModeExitAndSave:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeExitAndSave) : IsKeyJustUp(MenuSettings::MenuEditModeExitAndSave);
	case MenuControl::MenuEditModeMoveOptionn:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeMoveOption) : IsKeyJustUp(MenuSettings::MenuEditModeMoveOption);
	case MenuControl::MenuEditModeAddOption:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeAddOption) : IsKeyJustUp(MenuSettings::MenuEditModeAddOption);
	case MenuControl::MenuEditModeDeleteOption:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeDeleteOption) : IsKeyJustUp(MenuSettings::MenuEditModeDeleteOption);
	default:
		return false;
	}
}

bool ControlManager::IsUsingController()
{
	return !CONTROLS::_IS_INPUT_DISABLED(2);
}

void ControlManager::DisableMenuControls()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_ACCEPT, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_CANCEL, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_DOWN, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_UP, true);
}

void ControlManager::EnableMenuControls()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_ACCEPT, false);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_CANCEL, false);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_DOWN, false);
	CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_UP, false);
}

bool ControlManager::IsFunctionControlPressed(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT) : IsKeyDown(VK_SHIFT);
	case FunctionControl::HorseJump:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_X) : IsKeyDown(VK_SPACE);
	case FunctionControl::BindBoost:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, MenuSettings::ControllerBindBoost) : IsKeyDown(MenuSettings::BindBoost);
	default:
		return false;
	}
}

bool ControlManager::IsFunctionControlJustReleased(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return CONTROLS::IS_CONTROL_JUST_RELEASED(0, XboxControl::INPUT_FRONTEND_ACCEPT);
	default:
		return false;
	}
}

void ControlManager::CanceMenuControlslForThisFrame()
{
	shouldCancelForThisFrame = true;
}

// MARK: Events
void ControlManager::Tick()
{
	shouldCancelForThisFrame = false;
}
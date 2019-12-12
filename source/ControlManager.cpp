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
	case MenuControl::MenuAdjustValueDown:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuAdjustValueDown) : IsKeyJustUp(MenuSettings::MenuAdjustValueDown);
	case MenuControl::MenuAdjustValueUp:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuAdjustValueUp) : IsKeyJustUp(MenuSettings::MenuAdjustValueUp);
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

void ControlManager::EnableMenuOpenControls()
{
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuOpenModifier, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuOpen, true);
}

void ControlManager::EnableMenuControls()
{
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuOptionPress, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuDown, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuUp, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuBack, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeEnter, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeExit, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeExitAndSave, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeMoveOption, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeAddOption, true);
	CONTROLS::ENABLE_CONTROL_ACTION(0, MenuSettings::ControllerMenuEditModeDeleteOption, true);
}

bool ControlManager::IsFunctionControlPressed(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT) : IsKeyDown(VK_SHIFT);
	case FunctionControl::HorseJump:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_X) : IsKeyDown(VK_SPACE);
	case FunctionControl::HorseFlyUp:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_X) : IsKeyDown(VK_SPACE);
	case FunctionControl::HorseFlyDown:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_CANCEL) : IsKeyDown(VK_SPACE);
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

void ControlManager::Tick()
{
	shouldCancelForThisFrame = false;
}

string ControlManager::ControlStringFromHash(Hash control)
{
	switch (control) {
		case 97156178: return "INPUT_FRONTEND_DOWN";
		case 1662638961: return "INPUT_FRONTEND_UP";
		case 2791226036: return "INPUT_FRONTEND_LEFT";
		case 3736290067: return "INPUT_FRONTEND_RIGHT";
		case 1463068996: return "INPUT_FRONTEND_RDOWN";
		case 3621677854: return "INPUT_FRONTEND_RUP";
		case 959670863: return "INPUT_FRONTEND_RLEFT";
		case 1531509048: return "INPUT_FRONTEND_RRIGHT";
		case 4216773979: return "INPUT_FRONTEND_AXIS_X";
		case 152139984: return "INPUT_FRONTEND_AXIS_Y";
		case 1025725594: return "INPUT_FRONTEND_RIGHT_AXIS_X";
		case 3946918111: return "INPUT_FRONTEND_RIGHT_AXIS_Y";
		case 3626896338: return "INPUT_FRONTEND_PAUSE";
		case 1250966545: return "INPUT_FRONTEND_PAUSE_ALTERNATE";
		case 3350541322: return "INPUT_FRONTEND_ACCEPT";
		case 359624985: return "INPUT_FRONTEND_CANCEL";
		case 1840825903: return "INPUT_FRONTEND_X";
		case 2080465600: return "INPUT_FRONTEND_Y";
		case 3901091606: return "INPUT_FRONTEND_LB";
		case 398377320: return "INPUT_FRONTEND_RB";
		case 1360019509: return "INPUT_FRONTEND_LT";
		case 1877832124: return "INPUT_FRONTEND_RT";
		case 1137550768: return "INPUT_FRONTEND_LS";
		case 2107936042: return "INPUT_FRONTEND_RS";
		default: return "";
	}
}
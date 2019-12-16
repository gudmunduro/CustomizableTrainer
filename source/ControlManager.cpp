#include "pch.h"
#include "ControlManager.h"
#include "keyboard.h"
#include "MenuSettings.h"

bool ControlManager::IsMenuControlPressed(MenuControl control)
{
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
	case MenuControl::MenuEditModeEditOption:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeEditOption) : IsKeyJustUp(MenuSettings::MenuEditModeEditOption);
	case MenuControl::MenuEditModeDeleteOption:
		return IsUsingController() ? CONTROLS::IS_CONTROL_JUST_PRESSED(0, MenuSettings::ControllerMenuEditModeDeleteOption) : IsKeyJustUp(MenuSettings::MenuEditModeDeleteOption);
	default:
		return false;
	}
}

bool ControlManager::IsHoldingMenuControl(MenuControl control)
{
	if (shouldCancelForThisFrame) return false;
	switch (control) {
	case MenuControl::MenuAdjustValueDown:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, MenuSettings::ControllerMenuAdjustValueDown) : IsKeyDown(MenuSettings::MenuAdjustValueDown);
	case MenuControl::MenuAdjustValueUp:
		return IsUsingController() ? CONTROLS::IS_CONTROL_PRESSED(0, MenuSettings::ControllerMenuAdjustValueUp) : IsKeyDown(MenuSettings::MenuAdjustValueUp);
	default:
		return false;
	}
}

bool ControlManager::IsHotkeyPressed(Hotkey hotkey)
{
	return hotkey.keyboardKey&& IsKeyJustUp(hotkey.keyboardKey) ||
			hotkey.controllerControl && !hotkey.controllerControlModifier && CONTROLS::IS_CONTROL_JUST_PRESSED(0, hotkey.controllerControl) ||
			hotkey.controllerControl && hotkey.controllerControlModifier && CONTROLS::IS_CONTROL_JUST_PRESSED(0, hotkey.controllerControl) && CONTROLS::IS_CONTROL_PRESSED(0, hotkey.controllerControlModifier);
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

string ControlManager::GeyStringValueForKey(int key)
{
	if (key == 0) return "None";
	UINT scanCode = MapVirtualKey(key, MAPVK_VK_TO_VSC);

	CHAR szName[128];
	int result = 0;
	switch (key)
	{
	case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
	case VK_RCONTROL: case VK_RMENU:
	case VK_LWIN: case VK_RWIN: case VK_APPS:
	case VK_PRIOR: case VK_NEXT:
	case VK_END: case VK_HOME:
	case VK_INSERT: case VK_DELETE:
	case VK_DIVIDE:
	case VK_NUMLOCK:
		scanCode |= KF_EXTENDED;
	default:
		result = GetKeyNameTextA(scanCode << 16, szName, 128);
	}
	if (result == 0)
		// throw std::system_error(std::error_code(GetLastError(), std::system_category()),
		//	 "WinAPI Error occured.");
		return "Unknown";

	return szName;
}

string ControlManager::GetStringValueForControl(Hash control)
{
	switch (control) {
		case 0: return "None";
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
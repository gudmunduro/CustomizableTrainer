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
#include "Controls.h"
#include "keyboard.h"
#include "MenuSettings.h"

bool Controls::IsMenuControlPressed(MenuControl control)
{
	if (shouldCancelForThisFrame) return false;
	switch (control) {
	case MenuControl::MenuOptionPress:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuOptionPress) : IsKeyJustUp(Settings::Controls::Keyboard::MenuOptionPress);
	case MenuControl::MenuDown:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuDown) : IsKeyJustUp(Settings::Controls::Keyboard::MenuDown);
	case MenuControl::MenuUp:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuUp) : IsKeyJustUp(Settings::Controls::Keyboard::MenuUp);
	case MenuControl::MenuOpen:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::MenuOpenModifier) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuOpen) : IsKeyJustUp(Settings::Controls::Keyboard::MenuOpen);
	case MenuControl::MenuGoBack:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuBack) : IsKeyJustUp(Settings::Controls::Keyboard::MenuBack);
	case MenuControl::MenuAdjustValueDown:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuAdjustValueDown) : IsKeyJustUp(Settings::Controls::Keyboard::MenuAdjustValueDown);
	case MenuControl::MenuAdjustValueUp:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuAdjustValueUp) : IsKeyJustUp(Settings::Controls::Keyboard::MenuAdjustValueUp);
	case MenuControl::MenuEditModeEnter:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeEnter) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeEnter);
	case MenuControl::MenuEditModeExit:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeExit) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeExit);
	case MenuControl::MenuEditModeExitAndSave:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeExitAndSave) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeExitAndSave);
	case MenuControl::MenuEditModeMoveOptionn:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeMoveOption) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeMoveOption);
	case MenuControl::MenuEditModeAddOption:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeAddOption) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeAddOption);
	case MenuControl::MenuEditModeEditOption:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeEditOption) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeEditOption);
	case MenuControl::MenuEditModeDeleteOption:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Settings::Controls::Controller::MenuEditModeDeleteOption) : IsKeyJustUp(Settings::Controls::Keyboard::MenuEditModeDeleteOption);
	default:
		return false;
	}
}

bool Controls::IsHoldingMenuControl(MenuControl control)
{
	if (shouldCancelForThisFrame) return false;
	switch (control) {
	case MenuControl::MenuAdjustValueDown:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::MenuAdjustValueDown) : IsKeyDown(Settings::Controls::Keyboard::MenuAdjustValueDown);
	case MenuControl::MenuAdjustValueUp:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::MenuAdjustValueUp) : IsKeyDown(Settings::Controls::Keyboard::MenuAdjustValueUp);
	default:
		return false;
	}
}

bool Controls::IsHotkeyPressed(Hotkey hotkey)
{
	if (hotkey.keyboardKey && IsKeyJustUp(hotkey.keyboardKey))
		hotkeysPressed.push_back(hotkey.keyboardKey); // For when multiple hotkeys are assigned to the same key

	return hotkey.keyboardKey && std::find(hotkeysPressed.begin(), hotkeysPressed.end(), hotkey.keyboardKey) != hotkeysPressed.end() ||
			hotkey.controllerControl && !hotkey.controllerControlModifier && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, hotkey.controllerControl) ||
			hotkey.controllerControl && hotkey.controllerControlModifier && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, hotkey.controllerControl) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, hotkey.controllerControlModifier);
}

bool Controls::IsUsingController()
{
	return !CONTROLS::_IS_INPUT_DISABLED(2);
}

void Controls::SetMenuControlsEnabled(bool value)
{
	Hash controls[] = {
		Settings::Controls::Controller::MenuOptionPress,
		Settings::Controls::Controller::MenuDown,
		Settings::Controls::Controller::MenuUp,
		Settings::Controls::Controller::MenuBack,
		Settings::Controls::Controller::MenuAdjustValueUp,
		Settings::Controls::Controller::MenuAdjustValueDown,
		Settings::Controls::Controller::MenuEditModeEnter,
		Settings::Controls::Controller::MenuEditModeExit,
		Settings::Controls::Controller::MenuEditModeExitAndSave,
		Settings::Controls::Controller::MenuEditModeMoveOption,
		Settings::Controls::Controller::MenuEditModeEditOption,
		Settings::Controls::Controller::MenuEditModeAddOption,
		Settings::Controls::Controller::MenuEditModeDeleteOption,
		String::Hash("INPUT_WHISTLE"),
		String::Hash("INPUT_WHISTLE_HORSEBACK")
	};

	for each (auto control in controls) {
		CONTROLS::DISABLE_CONTROL_ACTION(0, control, !value);
	}
}

bool Controls::IsFunctionControlPressed(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT) : IsKeyDown(VK_SHIFT);
	case FunctionControl::HorseJump:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_X) : IsKeyDown(VK_SPACE);
	case FunctionControl::HorseFlyUp:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_X) : IsKeyDown(VK_SPACE);
	case FunctionControl::HorseFlyDown:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_CANCEL) : IsKeyDown(VK_SPACE);
	case FunctionControl::BindBoost:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BindBoost) : IsKeyDown(Settings::Controls::Keyboard::BindBoost);
	case FunctionControl::BoatFlyModeAccelerate:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BoatFlyModeAccelerate) : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeAccelerate);
	case FunctionControl::BoatFlyModeDecelerate:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BoatFlyModeDecelerate) : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeDecelerate);
	case FunctionControl::BoatFlyModeFlyUp:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BoatFlyModeFlyUp) : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeFlyUp);
	case FunctionControl::BoatFlyModeUp:
		return IsUsingController() ? false : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeUp);
	case FunctionControl::BoatFlyModeDown:
		return IsUsingController() ? false : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeDown);
	case FunctionControl::BoatFlyModeLeft:
		return IsUsingController() ? false : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeLeft);
	case FunctionControl::BoatFlyModeRight:
		return IsUsingController() ? false : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeRight);
	case FunctionControl::BoatFlyModeYawLeft:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BoatFlyModeYawLeft) : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeYawLeft);
	case FunctionControl::BoatFlyModeYawRight:
		return IsUsingController() ? CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Settings::Controls::Controller::BoatFlyModeYawRight) : IsKeyDown(Settings::Controls::Keyboard::BoatFlyModeYawRight);
	default:
		return false;
	}
}

bool Controls::IsFunctionControlJustReleased(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return CONTROLS::IS_CONTROL_JUST_RELEASED(0, XboxControl::INPUT_FRONTEND_ACCEPT);
	default:
		return false;
	}
}

void Controls::CanceMenuControlslForThisFrame()
{
	shouldCancelForThisFrame = true;
}

void Controls::ClearHotkeysPressed()
{
	hotkeysPressed.clear();
}

void Controls::Tick()
{
	shouldCancelForThisFrame = false;
}

std::string Controls::GeyStringValueForKey(int key)
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

std::string Controls::GetStringValueForControl(Hash control)
{
	switch (control) {
		case 0: return "None";
		case XboxControl::INPUT_FRONTEND_DOWN: return "Down";
		case XboxControl::INPUT_FRONTEND_UP: return "Up";
		case XboxControl::INPUT_FRONTEND_LEFT: return "Left";
		case XboxControl::INPUT_FRONTEND_RIGHT: return "Right";
		case XboxControl::INPUT_FRONTEND_PAD_LEFT: return "Left";
		case XboxControl::INPUT_FRONTEND_PAD_RIGHT: return "Right";
		case XboxControl::INPUT_FRONTEND_PAD_UP: return "Up";
		case XboxControl::INPUT_FRONTEND_PAD_DOWN: return "Down";
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

std::string Controls::ControlStringFromHash(Hash control)
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
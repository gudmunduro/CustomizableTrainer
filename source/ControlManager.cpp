#include "pch.h"
#include "ControlManager.h"

bool ControlManager::IsMenuControlPressed(MenuControl control) {
	if (shouldCancelForTick) return false;
	switch (control) {
	case MenuControl::MenuOptionPress:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT);
	case MenuControl::MenuDown:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_DOWN);
	case MenuControl::MenuUp:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_UP);
	case MenuControl::MenuOpen:
		return CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_RB) && CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_DOWN);
	case MenuControl::MenuGoBack:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_CANCEL);
	default:
		return false;
	}
}

bool ControlManager::IsFunctionControlPressed(FunctionControl control)
{
	switch (control) {
	case FunctionControl::PlayerRun:
		return CONTROLS::IS_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT);
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

void ControlManager::CanceMenuControlslForTick()
{
	shouldCancelForTick = true;
}

// MARK: Events
void ControlManager::Tick()
{
	shouldCancelForTick = false;
}
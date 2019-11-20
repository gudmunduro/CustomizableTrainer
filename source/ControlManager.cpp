#include "pch.h"
#include "ControlManager.h"

bool ControlManager::IsMenuControlPressed(MenuControl control) {
	switch (control) {
	case MenuControl::MenuOptionPress:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_ACCEPT);
	case MenuControl::MenuDown:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_DOWN);
	case MenuControl::MenuUp:
		return CONTROLS::IS_CONTROL_JUST_PRESSED(0, XboxControl::INPUT_FRONTEND_UP);
	}
}
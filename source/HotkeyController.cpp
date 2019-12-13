#include "pch.h"
#include "HotkeyController.h"
#include "ControlManager.h"
#include "keyboard.h"

HotkeyController::HotkeyController()
{
	hotkeyMap["hotkey_test"] = {
		VK_NUMPAD1,
		0,
		0,
		MenuOptionType::Action,
		"action_spawnVehicle",
		0,
		"CART01"
	};
}

void HotkeyController::Tick()
{
	for each (auto hotkey in hotkeyMap) {
		string key = hotkey.first;
		Hotkey hotkeyData = hotkey.second;

		if (ControlManager::IsHotkeyPressed(hotkeyData)) {
			
		}
	}
}
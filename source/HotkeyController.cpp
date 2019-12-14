#include "pch.h"
#include "HotkeyController.h"
#include "ControlManager.h"
#include "keyboard.h"
#include "Routine.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

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

// MARK: Run hotkey

void HotkeyController::RunHotkeyForAction(Hotkey hotkey)
{
	if (!ActionManager::DoesActionExistForKey(hotkey.key)) {
		Routine::StartDrawBottomMessage("Error: Action key for hotkey is invalid");
	}
	ActionManager::RunActionForKey(hotkey.key, hotkey.value);
}

void HotkeyController::RunHotkeyForToggle(Hotkey hotkey)
{
	if (!ToggleManager::DoesToggleExistForKey(hotkey.key)) {
		Routine::StartDrawBottomMessage("Error: Toggle key for hotkey is invalid");
		return;
	}
	switch (hotkey.action) {
	case 0:
		ToggleManager::Toggle(hotkey.key);
		break;
	case 1:
		if (!hotkey.value.is_boolean()) {
			Routine::StartDrawBottomMessage("Error: Hotkey toggle value is invalid");
			break;
		}
		*ToggleManager::GetToggleForKey(hotkey.key) = hotkey.value.get<bool>();
		break;
	}
}

void HotkeyController::RunHotkeyForNumber(Hotkey hotkey)
{
	if (!NumberController::DoesNumberExistForKey(hotkey.key)) {
		Routine::StartDrawBottomMessage("Error: Number key for hotkey is invalid");
		return;
	}
	switch (hotkey.action) {
	case 0:
		if (!hotkey.value.is_boolean()) {
			Routine::StartDrawBottomMessage("Error: Hotkey direction value is invalid");
			return;
		}
		NumberController::GetNumberAdjusterForKey(hotkey.key)(hotkey.value.get<bool>());
		break;
	case 1:
		if (!hotkey.value.is_string()) {
			Routine::StartDrawBottomMessage("Error: Hotkey number value is invalid");
			return;
		}
		NumberController::SetNumberValueForKey(hotkey.key, hotkey.value);
		break;
	}
}

void HotkeyController::RunHotkey(Hotkey hotkey)
{
	switch (hotkey.type) {
	case MenuOptionType::Action:
		RunHotkeyForAction(hotkey);
		break;
	case MenuOptionType::Toggle:
		RunHotkeyForToggle(hotkey);
		break;
	case MenuOptionType::Number:
		RunHotkeyForNumber(hotkey);
		break;
	}
}

// MARK: Core

void HotkeyController::Tick()
{
	for each (auto hotkey in hotkeyMap) {
		string key = hotkey.first;
		Hotkey hotkeyData = hotkey.second;

		if (ControlManager::IsHotkeyPressed(hotkeyData)) {
			RunHotkey(hotkeyData);
		}
	}
}
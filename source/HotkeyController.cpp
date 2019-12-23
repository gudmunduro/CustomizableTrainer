#include "pch.h"
#include "HotkeyController.h"
#include "ControlManager.h"
#include "keyboard.h"
#include "Routine.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"
#include "JsonDataManager.h"

// MARK: Setup

void HotkeyController::Setup()
{
	JSONDataManager jsonDataManager;
	hotkeys = jsonDataManager.GetHotkeysAsVector();
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
		*ToggleManager::GetToggleForKey(hotkey.key) = true;
		if (ToggleManager::DoesToggleActionExistForKey(hotkey.key)) {
			auto action = ToggleManager::GetToggleActionForKey(hotkey.key);
			action(true);
		}
		break;
	case 2:
		*ToggleManager::GetToggleForKey(hotkey.key) = false;
		if (ToggleManager::DoesToggleActionExistForKey(hotkey.key)) {
			auto action = ToggleManager::GetToggleActionForKey(hotkey.key);
			action(false);
		}
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
		NumberController::GetNumberAdjusterForKey(hotkey.key)(true);
		break;
	case 1:
		NumberController::GetNumberAdjusterForKey(hotkey.key)(false);
		break;
	case 2:
		if (!hotkey.value.is_string()) {
			Routine::StartDrawBottomMessage("Error: Hotkey number value is invalid");
			return;
		}
		NumberController::SetNumberValueForKey(hotkey.key, hotkey.value.get<string>());
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

// MARK: Manage

void HotkeyController::Save()
{
	JSONDataManager jsonDataManager;
	jsonDataManager.SaveHotkeys(hotkeys);
}

// MARK: Main

void HotkeyController::Tick()
{
	for each (auto hotkey in hotkeys) {

		if (ControlManager::IsHotkeyPressed(hotkey)) {
			RunHotkey(hotkey);
		}
	}
}
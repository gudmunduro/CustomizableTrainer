#include "pch.h"
#include "HotkeyController.h"
#include "Controls.h"
#include "keyboard.h"
#include "Routine.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "JsonData.h"

// MARK: Setup

void HotkeyController::Setup()
{
	hotkeys = JSONData::GetHotkeysAsVector();
}

// MARK: Run hotkey

void HotkeyController::RunHotkeyForAction(Hotkey hotkey)
{
	if (!ActionController::ActionExistsForKey(hotkey.key)) {
		Game::PrintSubtitle("Error: Action key for hotkey is invalid");
	}
	ActionController::RunActionForKey(hotkey.key, hotkey.value);
}

void HotkeyController::RunHotkeyForToggle(Hotkey hotkey)
{
	if (!ToggleController::ToggleExistsForKey(hotkey.key)) {
		Game::PrintSubtitle("Error: Toggle key for hotkey is invalid");
		return;
	}
	switch (hotkey.action) {
	case 0:
		ToggleController::Toggle(hotkey.key);
		break;
	case 1:
		ToggleController::SetToggleValueForKey(hotkey.key, true);
		break;
	case 2:
		ToggleController::SetToggleValueForKey(hotkey.key, false);
		break;
	}
}

void HotkeyController::RunHotkeyForNumber(Hotkey hotkey)
{
	if (!NumberController::DoesNumberExistForKey(hotkey.key)) {
		Game::PrintSubtitle("Error: Number key for hotkey is invalid");
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
			Game::PrintSubtitle("Error: Hotkey number value is invalid");
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
	JSONData::SaveHotkeys(hotkeys);
}

// MARK: Main

void HotkeyController::Tick()
{
	for each (auto hotkey in hotkeys) {

		if (Controls::IsHotkeyPressed(hotkey)) {
			RunHotkey(hotkey);
		}
	}

	Controls::ClearHotkeysPressed();
}
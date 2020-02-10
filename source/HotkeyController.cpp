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
#include "HotkeyController.h"
#include "Controls.h"
#include "keyboard.h"
#include "Routine.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "JsonData.h"

#pragma region Setup

void HotkeyController::Setup()
{
	hotkeys = JSONData::GetHotkeysAsVector();
}

#pragma endregion

#pragma region Run hotkey

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
		NumberController::SetNumberValueForKey(hotkey.key, hotkey.value.get<std::string>());
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

#pragma endregion

#pragma region Manage

void HotkeyController::Save()
{
	JSONData::SaveHotkeys(hotkeys);
}

#pragma endregion

void HotkeyController::Tick()
{
	for each (auto hotkey in hotkeys) {

		if (Controls::IsHotkeyPressed(hotkey)) {
			RunHotkey(hotkey);
		}
	}

	Controls::ClearHotkeysPressed();
}
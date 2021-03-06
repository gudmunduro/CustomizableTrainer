/*
* Customizable Trainer
* Copyright (C) 2020  Gu�mundur �li
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "SettingsEditAddHotkeySub.h"
#include "Routine.h"
#include "HotkeyController.h"
#include "Controls.h"
#include "ActionController.h"
#include "keyboard.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"
#include "SettingsHotkeyActionSub.h"

#pragma region Setup

// Set hotkeyToEdit to null to add a new hotkey
SettingsEditAddHotkeySub::SettingsEditAddHotkeySub(Hotkey *hotkeyToEdit, Hotkey defaultHotkeyData, MenuController *menuController) 
	: Submenu(menuController)
{
	if (hotkeyToEdit != nullptr) {
		this->hotkeyToEdit = *hotkeyToEdit;
		hotkeyToSaveTo = hotkeyToEdit;
		title = hotkeyToEdit->name;
	}
	else {
		title = "Add hotkey";
		this->hotkeyToEdit = defaultHotkeyData;
		hotkeyToSaveTo = nullptr;
	}
}

SettingsEditAddHotkeySub::SettingsEditAddHotkeySub(Hotkey* hotkeyToEdit, MenuController* menuController) : SettingsEditAddHotkeySub(hotkeyToEdit, {
			"Hotkey " + std::to_string(HotkeyController::hotkeys.size() + 1),
			0,
			0,
			0,
			MenuOptionType::Action,
			"",
			0,
			""
	}, menuController)
{
}

#pragma endregion

#pragma region Draw

void SettingsEditAddHotkeySub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);

	// Hotkey name
	DrawTextAction("Name", hotkeyToEdit.name, [this] {
		auto newName = Game::GetInputWithKeyboard(hotkeyToEdit.name);
		if (!newName) return;
		if (*newName == "") {
			Game::PrintSubtitle("Name cannot be empty");
			return;
		}
		hotkeyToEdit.name = *newName;
	});

	// Controls
	DrawEditKey("Key", &hotkeyToEdit.keyboardKey);
	DrawEditControl("Controller button", &hotkeyToEdit.controllerControl);
	DrawEditControl("Controller modifier", &hotkeyToEdit.controllerControlModifier);

	// Type
	DrawTextAction("Type", OptionTypeToString(hotkeyToEdit.type), [this] {
		auto setTypeSub = new AddOptionSetTypeSub(menuController, true);
		setTypeSub->onTypeSet = [this](MenuOptionType type) {
			this->hotkeyToEdit.type = type;
		};
		menuController->AddSubmenuToStack(setTypeSub);
	});

	// Option key
	DrawTextAction("Key", hotkeyToEdit.key, [this] {
		auto setKeySub = new AddOptionSetKeySub(hotkeyToEdit.type, menuController);
		setKeySub->onKeySet = [this](std::string key) {
			this->hotkeyToEdit.key = key;
			this->hotkeyToEdit.value = "";
			if (hotkeyToEdit.type == MenuOptionType::Action)
				UpdateActionParameters();
		};
		menuController->AddSubmenuToStack(setKeySub);
	});

	// Toggle/Number action
	if (ActionString() != "") {
		DrawTextAction(ActionString(), ActionValueString(), [this] {
			auto setActionSub = new SettingsHotkeyActionSub(menuController, hotkeyToEdit.type, 
				[this] (int action) {
					hotkeyToEdit.action = action;
			});
			menuController->AddSubmenuToStack(setActionSub);
		});
	}

	// Number value
	if (hotkeyToEdit.type == MenuOptionType::Number && hotkeyToEdit.action == 2) {
		DrawTextAction("Number value", hotkeyToEdit.value, [this] {
			OnValueOptionPress();
		});
	}

	// Action parameters
	if (hotkeyToEdit.type == MenuOptionType::Action && parameters.size() > 0) {
		for (int i = 0; i < parameters.size(); i++) {
			auto param = parameters[i];
			std::string value;
			switch (param.type) {
			case MenuOptionParameterType::String:
				value = hotkeyToEdit.value[i].get<std::string>();
				break;
			case MenuOptionParameterType::Int:
				value = std::to_string(hotkeyToEdit.value[i].get<int>());
				break;
			case MenuOptionParameterType::Float:
				value = std::to_string(hotkeyToEdit.value[i].get<int>());
				break;
			}

			DrawTextAction(param.name, value, [this, param, i]() {
				switch (param.type) {
				case MenuOptionParameterType::String: {
					auto inputValue = Game::GetInputWithKeyboard(hotkeyToEdit.value[i].get<std::string>());
					if (!inputValue) return;
					hotkeyToEdit.value[i] = *inputValue;
					break;
				}
				case MenuOptionParameterType::Float: {
					auto inputValue = Game::GetInputWithKeyboard(std::to_string(hotkeyToEdit.value[i].get<float>()));
					if (!inputValue) return;
					hotkeyToEdit.value[i] = std::stof(*inputValue);
					break;
				}
				case MenuOptionParameterType::Int: {
					auto inputValue = Game::GetInputWithKeyboard(std::to_string(hotkeyToEdit.value[i].get<int>()));
					if (!inputValue) return;
					hotkeyToEdit.value[i] = std::stoi(*inputValue);
					break;
				}
				}
			});
		}
	}

	// Done
	DrawAction("Done", [this] {
		if (hotkeyToSaveTo != nullptr) {
			*hotkeyToSaveTo = hotkeyToEdit;
		}
		else {
			HotkeyController::hotkeys.push_back(hotkeyToEdit);
		}
		HotkeyController::Save();

		menuController->GoToLastSub();
	});
}

#pragma endregion

#pragma region Draw option

void SettingsEditAddHotkeySub::DrawEditControl(std::string text, Hash *control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		if (!Controls::IsUsingController()) {
			Game::PrintSubtitle("You need to be using a controller to change controller controls");
			return;
		}
		isEditingKeyboardControl = false;
		isEditingControllerControl = true;
		controlToEdit = control;
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingControllerControl && controlToEdit == control) ? (int)editingControlAlpha : 255;
	Game::DrawText(Controls::GetStringValueForControl(*control), { menuPos.x + 16.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, alpha });
}

void SettingsEditAddHotkeySub::DrawEditKey(std::string text, int *key)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this] {
		isEditingControllerControl = false;
		isEditingKeyboardControl = true;
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingKeyboardControl && hotkeyToEdit.keyboardKey == *key) ? (int)editingControlAlpha : 255;
	Game::DrawText(Controls::GeyStringValueForKey(*key), { menuPos.x + 16.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, alpha });
}

#pragma endregion

#pragma region Events

void SettingsEditAddHotkeySub::OnValueOptionPress()
{
	if (hotkeyToEdit.type != MenuOptionType::Number || hotkeyToEdit.action != 2)
		return;

	try {
		auto inputValue = Game::GetInputWithKeyboard();
		if (!inputValue) return;
		hotkeyToEdit.value = *inputValue;
	}
	catch (std::exception e) {}
}

void SettingsEditAddHotkeySub::SubWillDraw()
{
	if (isEditingKeyboardControl || isEditingControllerControl) {
		Controls::CanceMenuControlslForThisFrame();

		if (editingControlAlpha == 0)
			editingControlAlphaDirection = true;
		else if (editingControlAlpha == 255)
			editingControlAlphaDirection = false;
		editingControlAlpha += editingControlAlphaDirection ? 10.2f : -10.2f;
	}

	Submenu::SubWillDraw();
}

#pragma endregion

#pragma region Controls

void SettingsEditAddHotkeySub::RespondToControls()
{
	Submenu::RespondToControls();

	if (isEditingKeyboardControl) {
		for (int i = 0; i < 255; i++) {
			bool keyUp = IsKeyJustUp(i);
			if (keyUp)
			{
				hotkeyToEdit.keyboardKey = i;
				isEditingKeyboardControl = false;
				editingControlAlpha = 255;
				editingControlAlphaDirection = false;
				Controls::CanceMenuControlslForThisFrame();
				break;
			}
		}
	}
	else if (isEditingControllerControl) {
		for (auto&& control : allControls) {
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, control)) {
				*controlToEdit = control;
				isEditingControllerControl = false;
				editingControlAlpha = 255;
				editingControlAlphaDirection = false;
				Controls::CanceMenuControlslForThisFrame();
				break;
			}
		}
	}
}

#pragma endregion

#pragma region Getters

std::string SettingsEditAddHotkeySub::ActionString()
{
	switch (hotkeyToEdit.type) {
	case MenuOptionType::Toggle: return "Toggle action";
	case MenuOptionType::Number: return "Number action";
	default: return "";
	}
}

std::string SettingsEditAddHotkeySub::ActionValueString()
{
	switch (hotkeyToEdit.type) {
	case MenuOptionType::Toggle: 
		switch (hotkeyToEdit.action) {
		case 0: return "Toggle";
		case 1: return "On";
		case 2: return "Off";
		default: return "";
		}
		break;
	case MenuOptionType::Number: 
		switch (hotkeyToEdit.action) {
		case 0: return "Increment";
		case 1: return "Decrement";
		case 2: return "Custom";
		default: return "";
		}
	default: return "";
	}
}

#pragma endregion

void SettingsEditAddHotkeySub::UpdateActionParameters()
{
	if (!(hotkeyToEdit.key != "" && hotkeyToEdit.type == MenuOptionType::Action &&
		ActionController::GetParameterForKey(hotkeyToEdit.key).size() > 0))
		return;

	parameters = ActionController::GetParameterForKey(hotkeyToEdit.key);

	hotkeyToEdit.value = json::array();

	for (auto&& param : parameters) {
		switch (param.type) {
		case MenuOptionParameterType::String:
			hotkeyToEdit.value.push_back("");
			break;
		case MenuOptionParameterType::Int:
			hotkeyToEdit.value.push_back(0);
			break;
		case MenuOptionParameterType::Float:
			hotkeyToEdit.value.push_back(0.00f);
			break;
		}
	}
}
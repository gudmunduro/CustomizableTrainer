#include "pch.h"
#include "SettingsEditAddHotkeySub.h"
#include "Routine.h"
#include "HotkeyController.h"
#include "ControlManager.h"
#include "keyboard.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"

// MARK: Setup

// Set hotkeyToEdit to null to add a new hotkey
SettingsEditAddHotkeySub::SettingsEditAddHotkeySub(string title, Hotkey *hotkeyToEdit, MenuController *menuController) : FixedSubmenu(menuController)
{
	this->title = title;

	if (hotkeyToEdit != nullptr) {
		this->hotkeyToEdit = hotkeyToEdit;
	}
	else {
		*this->hotkeyToEdit = {};
	}
}

// MARK: Draw

void SettingsEditAddHotkeySub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(title);
	DrawText("Name", hotkeyToEdit->name, [this] {
		auto newName = Game::GetInputWithKeyboard(hotkeyToEdit->name);
		if (newName == "") {
			Routine::StartDrawBottomMessage("Name cannot be empty");
		}
		hotkeyToEdit->name = newName;
	});
	DrawText("Key", ControlManager::GeyStringValueForKey(hotkeyToEdit->keyboardKey), [this] {
		isEditingControllerControl = false;
		isEditingControllerControl = true;
	});
	DrawText("Controller button", ControlManager::ControlStringFromHash(hotkeyToEdit->controllerControl), [this] {
		isEditingControllerControl = false;
		isEditingControllerControl = true;
		controlToEdit = &hotkeyToEdit->controllerControl;
	});
	DrawText("Controller modifier", ControlManager::ControlStringFromHash(hotkeyToEdit->controllerControlModifier), [this] {
		isEditingControllerControl = false;
		isEditingControllerControl = true;
		controlToEdit = &hotkeyToEdit->controllerControlModifier;
	});
	DrawText("Type", OptionTypeToString(hotkeyToEdit->type), [this] {
		auto setTypeSub = new AddOptionSetTypeSub(menuController);
		setTypeSub->onTypeSet = [this](MenuOptionType type) {
			this->hotkeyToEdit->type = type;
		};
		menuController->AddSubmenuToStack(setTypeSub);
	});
	DrawText("Key", hotkeyToEdit->key, [this] {
		auto setKeySub = new AddOptionSetKeySub(hotkeyToEdit->type, menuController);
		setKeySub->onKeySet = [this](string key) {
			this->hotkeyToEdit->key = key;
			if (hotkeyToEdit->type == MenuOptionType::Action)
				UpdateActionParameters();
		};
		menuController->AddSubmenuToStack(setKeySub);
	});
	if (ActionString() != "") {
		DrawText(ActionString(), hotkeyToEdit->key, [this] {
			auto newName = Game::GetInputWithKeyboard(hotkeyToEdit->name);
			if (newName == "") {
				Routine::StartDrawBottomMessage("Name cannot be empty");
			}
			hotkeyToEdit->name = newName;
		});
	}
	if (hotkeyToEdit->type == MenuOptionType::Toggle || hotkeyToEdit->type == MenuOptionType::Number) {
		DrawText("Value", GetActionValueAsString(), [] {
			
		});
	}
}

// MARK: Controls

void SettingsEditAddHotkeySub::RespondToControls()
{
	FixedSubmenu::RespondToControls();

	if (isEditingKeyboardControl) {
		for (int i = 0; i < 255; i++) {
			bool keyUp = IsKeyJustUp(i);
			if (keyUp)
			{
				hotkeyToEdit->keyboardKey = i;
				isEditingKeyboardControl = false;
				editingControlAlpha = 255;
				editingControlAlphaDirection = false;
				break;
			}
		}
	}
	else if (isEditingControllerControl) {
		for each (auto control in allControls) {
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, control)) {
				*controlToEdit = control;
				isEditingControllerControl = false;
				editingControlAlpha = 255;
				editingControlAlphaDirection = false;
			}
		}
	}
}

// MARK: Getters

string SettingsEditAddHotkeySub::ActionString()
{
	switch (hotkeyToEdit->type) {
	case MenuOptionType::Toggle: return "Toggle action";
	case MenuOptionType::Number: return "Number action";
	default: return "";
	}
}

string SettingsEditAddHotkeySub::GetActionValueAsString()
{
	switch (hotkeyToEdit->type) {
	case MenuOptionType::Toggle:
		switch (hotkeyToEdit->action) {
		case 1: return hotkeyToEdit->value.get<bool>() ? "On" : "Off";
		default: return "";
		}
	case MenuOptionType::Number:
		switch (hotkeyToEdit->action) {
		case 0: return hotkeyToEdit->value.get<bool>() ? "Increment" : "Decrement";
		case 1: return hotkeyToEdit->value.get<string>();
		default: return "";
		}
	default: return "";
	}
}

int SettingsEditAddHotkeySub::OptionCount()
{
	return 1;
}

// MARK: Misc

void SettingsEditAddHotkeySub::UpdateActionParameters()
{
	
}
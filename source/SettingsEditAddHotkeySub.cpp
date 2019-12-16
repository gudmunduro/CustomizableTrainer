#include "pch.h"
#include "SettingsEditAddHotkeySub.h"
#include "Routine.h"
#include "HotkeyController.h"
#include "ControlManager.h"
#include "ActionManager.h"
#include "keyboard.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"
#include "SettingsHotkeyActionSub.h"

// MARK: Setup

// Set hotkeyToEdit to null to add a new hotkey
SettingsEditAddHotkeySub::SettingsEditAddHotkeySub(Hotkey *hotkeyToEdit, MenuController *menuController) : FixedSubmenu(menuController)
{

	if (hotkeyToEdit != nullptr) {
		this->hotkeyToEdit = *hotkeyToEdit;
		hotkeyToSaveTo = hotkeyToEdit;
		title = hotkeyToEdit->name;
	}
	else {
		title = "Add hotkey";
		string defaultName = "Hotkey " + std::to_string(HotkeyController::hotkeys.size() + 1);
		this->hotkeyToEdit = {
			defaultName,
			0,
			0,
			0,
			MenuOptionType::Action,
			"",
			0,
			""
		};
		hotkeyToSaveTo = nullptr;
	}
}

// MARK: Draw

void SettingsEditAddHotkeySub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(title);

	// Hotkey name
	DrawText("Name", hotkeyToEdit.name, [this] {
		auto newName = Game::GetInputWithKeyboard(hotkeyToEdit.name);
		if (newName == "") {
			Routine::StartDrawBottomMessage("Name cannot be empty");
		}
		hotkeyToEdit.name = newName;
	});

	// Controls
	DrawEditKey("Key", &hotkeyToEdit.keyboardKey);
	DrawEditControl("Controller button", &hotkeyToEdit.controllerControl);
	DrawEditControl("Controller modifier", &hotkeyToEdit.controllerControlModifier);

	// Type
	DrawText("Type", OptionTypeToString(hotkeyToEdit.type), [this] {
		auto setTypeSub = new AddOptionSetTypeSub(menuController);
		setTypeSub->onTypeSet = [this](MenuOptionType type) {
			this->hotkeyToEdit.type = type;
		};
		menuController->AddSubmenuToStack(setTypeSub);
	});

	// Option key
	DrawText("Key", hotkeyToEdit.key, [this] {
		auto setKeySub = new AddOptionSetKeySub(hotkeyToEdit.type, menuController);
		setKeySub->onKeySet = [this](string key) {
			this->hotkeyToEdit.key = key;
			this->hotkeyToEdit.value = "";
			if (hotkeyToEdit.type == MenuOptionType::Action)
				UpdateActionParameters();
		};
		menuController->AddSubmenuToStack(setKeySub);
	});

	// Toggle/Number action
	if (ActionString() != "") {
		DrawText(ActionString(), hotkeyToEdit.key, [this] {
			auto setActionSub = new SettingsHotkeyActionSub(menuController, hotkeyToEdit.type, 
				[this] (int action) {
					hotkeyToEdit.action = action;
			});
			menuController->AddSubmenuToStack(setActionSub);
		});
	}

	// Number value
	if (hotkeyToEdit.type == MenuOptionType::Number && hotkeyToEdit.action == 0) {
		DrawText("Number value", GetActionValueAsString(), [this] {
			OnValueOptionPress();
		});
	}

	// Action parameters
	if (hotkeyToEdit.type == MenuOptionType::Action && parameters.size() > 0) {
		for (int i = 0; i < parameters.size(); i++) {
			auto param = parameters[i];
			string value;
			switch (param.type) {
			case MenuOptionParameterType::String:
				value = hotkeyToEdit.value[i].get<string>();
				break;
			case MenuOptionParameterType::Int:
				value = std::to_string(hotkeyToEdit.value[i].get<int>());
				break;
			case MenuOptionParameterType::Float:
				value = std::to_string(hotkeyToEdit.value[i].get<int>());
				break;
			}

			DrawText(param.name, value, [this, param, i]() {
				switch (param.type) {
				case MenuOptionParameterType::String:
					hotkeyToEdit.value[i] = Game::GetInputWithKeyboard(hotkeyToEdit.value[i].get<string>());
					break;
				case MenuOptionParameterType::Float:
					hotkeyToEdit.value[i] = std::stof(Game::GetInputWithKeyboard(std::to_string(hotkeyToEdit.value[i].get<float>())));
					break;
				case MenuOptionParameterType::Int:
					hotkeyToEdit.value[i] = std::stoi(Game::GetInputWithKeyboard(std::to_string(hotkeyToEdit.value[i].get<int>())));
					break;
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
	});
}

// MARK: Draw option

void SettingsEditAddHotkeySub::DrawEditControl(string text, Hash *control)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this, control] {
		isEditingControllerControl = false;
		isEditingControllerControl = true;
		controlToEdit = control;
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingControllerControl && controlToEdit == control) ? (int)editingControlAlpha : 255;
	Game::DrawText(ControlManager::ControlStringFromHash(*control), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
}

void SettingsEditAddHotkeySub::DrawEditKey(string text, int *key)
{
	if (IsOutOfBounds(optionAddIndex + 1)) {
		optionAddIndex++;
		return;
	}

	DrawAction(text, [this] {
		isEditingControllerControl = false;
		isEditingControllerControl = true;
	});

	auto menuPos = menuController->position;
	int alpha = (isEditingKeyboardControl && hotkeyToEdit.keyboardKey == *key) ? (int)editingControlAlpha : 255;
	Game::DrawText(ControlManager::GeyStringValueForKey(*key), { menuPos.x + 0.16f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, alpha });
}

// MARK: Events

void SettingsEditAddHotkeySub::OnValueOptionPress()
{
	if (hotkeyToEdit.type != MenuOptionType::Number || hotkeyToEdit.action != 0)
		return;

	try {
		hotkeyToEdit.value = Game::GetInputWithKeyboard();
	}
	catch (std::exception e) {}
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
				hotkeyToEdit.keyboardKey = i;
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
	switch (hotkeyToEdit.type) {
	case MenuOptionType::Toggle: return "Toggle action";
	case MenuOptionType::Number: return "Number action";
	default: return "";
	}
}

string SettingsEditAddHotkeySub::GetActionValueAsString()
{
	switch (hotkeyToEdit.type) {
	case MenuOptionType::Toggle:
		switch (hotkeyToEdit.action) {
		case 1: return hotkeyToEdit.value.get<bool>() ? "On" : "Off";
		default: return "";
		}
	case MenuOptionType::Number:
		switch (hotkeyToEdit.action) {
		case 0: return hotkeyToEdit.value.get<bool>() ? "Increment" : "Decrement";
		case 1: return hotkeyToEdit.value.get<string>();
		default: return "";
		}
	default: return "";
	}
}

int SettingsEditAddHotkeySub::OptionCount()
{
	return 5 + ((GetActionValueAsString() != "") ? 1 : 0) +
		(hotkeyToEdit.type == MenuOptionType::Number && hotkeyToEdit.action == 0) ? 1 : 0 +
		parameters.size();
}

// MARK: Misc

void SettingsEditAddHotkeySub::UpdateActionParameters()
{
	if (!(hotkeyToEdit.key != "" && hotkeyToEdit.type == MenuOptionType::Action &&
		ActionManager::GetParameterForKey(hotkeyToEdit.key).size() > 0))
		return;

	parameters = ActionManager::GetParameterForKey(hotkeyToEdit.key);

	hotkeyToEdit.value = json::array();

	for each (auto param in parameters) {
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
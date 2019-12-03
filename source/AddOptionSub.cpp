#include "pch.h"
#include "AddOptionSub.h"
#include "ActionManager.h"
#include "Routine.h"

AddOptionSub::AddOptionSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu,
						std::function<void(Submenu* submenu)> setFixedSubmenu,
						std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, setFixedSubmenu, goToLastSub)
{
	Setup(true);
}

void AddOptionSub::Setup(bool resetParams)
{
	if (resetParams) {
		parameters = {};
		optionToAdd.params = json::array();
	}
	title = "Add option";
	options = {
		{
			MenuOptionType::Sub,
			"Type",
			"builtin_sub_addOptionSetTypeSub"
		},
		{
			MenuOptionType::Text,
			"Text",
			optionToAdd.text
		},
		{
			MenuOptionType::Text,
			OptionTypeToString(optionToAdd.type) + " >",
			optionToAdd.key
		}
	};
	if (optionToAdd.key != "" && optionToAdd.type == MenuOptionType::Action && ActionManager::GetParameterForKey(optionToAdd.key).size() > 0) {
		if (resetParams) {
			parameters = ActionManager::GetParameterForKey(optionToAdd.key);
			for each (auto param in parameters) {
				options.push_back({
					MenuOptionType::Text,
					param.name,
					""
					});
				switch (param.type) {
				case MenuOptionParameterType::String:
					optionToAdd.params.push_back("");
					break;
				case MenuOptionParameterType::Int:
					optionToAdd.params.push_back(0);
					break;
				case MenuOptionParameterType::Float:
					optionToAdd.params.push_back(0.00f);
					break;
				}
			}
		}
		else {
			for (int i = 0; i < parameters.size(); i++) {
				auto param = parameters[i];
				string value;
				switch (param.type) {
					case MenuOptionParameterType::String:
						value = optionToAdd.params[i].get<string>();
						break;
					case MenuOptionParameterType::Int:
						value = std::to_string(optionToAdd.params[i].get<int>());
						break;
					case MenuOptionParameterType::Float:
						value = std::to_string(optionToAdd.params[i].get<int>());
						break;
				}

				options.push_back({
					MenuOptionType::Text,
					param.name,
					value
				});
			}
		}
	}
	options.push_back({
		MenuOptionType::Action,
		"Add"
	});
}

// MARK: Events
void AddOptionSub::OnOptionPress(int index)
{
	switch (index) {
		case 1: // Change text
		{
			string textInput = Game::GetInputWithKeyboard(optionToAdd.text);
			optionToAdd.text = textInput;
			Setup();
			break;
		}
		case 2:
		{
			switch (optionToAdd.type) {
				case MenuOptionType::Action:
					setSubmenu("builtin_sub_addOptionSetActionKey");
					break;
				case MenuOptionType::Toggle:
					setSubmenu("builtin_sub_addOptionSetToggleKey");
					break;
				case MenuOptionType::Sub:
					setSubmenu("builtin_sub_addOptionSetSubKey");
					break;
				case MenuOptionType::Number:
					setSubmenu("builtin_sub_addOptionSetNumberKey");
					break;
			}
			break;
		}
	}
	if (index > 2 && index < options.size() - 1) { // Is parameter
		int paramIndex = index - 3;
		switch (parameters[paramIndex].type) {
			case MenuOptionParameterType::String:
				optionToAdd.params[paramIndex] = Game::GetInputWithKeyboard(optionToAdd.params[paramIndex].get<string>());
				break;
			case MenuOptionParameterType::Float:
				optionToAdd.params[paramIndex] = std::stof(Game::GetInputWithKeyboard(std::to_string(optionToAdd.params[paramIndex].get<float>())));
				break;
			case MenuOptionParameterType::Int:
				optionToAdd.params[paramIndex] = std::stoi(Game::GetInputWithKeyboard(std::to_string(optionToAdd.params[paramIndex].get<int>())));
				break;
		}
		Setup();
	}
	if (index == options.size() - 1) { // Is last
		if (optionToAdd.key == "") {
			Routine::StartDrawBottomMessage("Error: Key cannot be empty");
			return;
		}
		goToLastSub("addOption", optionToAdd);
	}
}

void AddOptionSub::OnMessageReceive(string messageKey, std::any messageValue)
{
	if (messageKey == "setOptionType") {
		MenuOptionType type = std::any_cast<MenuOptionType>(messageValue);
		optionToAdd.type = type;
		Setup(true);
	}
	else if (messageKey == "setOptionKey") {
		string key = std::any_cast<string>(messageValue);
		optionToAdd.key = key;
		Setup(true);
	}
}

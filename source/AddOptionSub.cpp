#include "pch.h"
#include "AddOptionSub.h"
#include "ActionManager.h"
#include "Routine.h"

AddOptionSub::AddOptionSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, goToLastSub)
{
	Setup();
}

void AddOptionSub::Setup()
{
	parameters = {};
	optionToAdd.params = json::array();
	title = "Add option";
	options = {
		{
			MenuOptionType::Sub,
			"Type",
			"builtin_sub_addOptionSetTypeSub"
		},
		{
			MenuOptionType::Action,
			"Text"
		},
		{
			MenuOptionType::Action,
			"Key >"
		}
	};
	if (optionToAdd.key != "" && optionToAdd.type == MenuOptionType::Action && ActionManager::GetParameterForKey(optionToAdd.key).size() > 0) {
		parameters = ActionManager::GetParameterForKey(optionToAdd.key);
		for each (auto param in parameters) {
			options.push_back({
				MenuOptionType::Action,
				param.name
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
		Setup();
	}
	else if (messageKey == "setOptionKey") {
		string key = std::any_cast<string>(messageValue);
		optionToAdd.key = key;
		Setup();
	}
}

#include "pch.h"
#include "AddOptionSub.h"
#include "AddOptionSetKeySub.h"
#include "AddOptionSetTypeSub.h"
#include "ActionManager.h"
#include "Routine.h"

AddOptionSub::AddOptionSub(MenuController* menuController)
	: FixedSubmenu(menuController)
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
	options = {};/*{
		{
			MenuOptionType::Text,
			"Type >",
			OptionTypeToString(optionToAdd.type)
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
	};*/
	if (optionToAdd.key != "" && optionToAdd.type == MenuOptionType::Action && ActionManager::GetParameterForKey(optionToAdd.key).size() > 0) {
		if (resetParams) {
			parameters = ActionManager::GetParameterForKey(optionToAdd.key);
			for each (auto param in parameters) {
				/*options.push_back({
					MenuOptionType::Text,
					param.name,
					""
					});*/
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
	/*options.push_back({
		MenuOptionType::Action,
		"Add"
	});*/
}

void AddOptionSub::Draw()
{
	Submenu::Draw();
	DrawTitle("Add option");
	DrawText("Type >", OptionTypeToString(optionToAdd.type), 0);
	DrawText("Text", optionToAdd.text, 1);
	DrawText(OptionTypeToString(optionToAdd.type) + " >", optionToAdd.key, 2);

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

		DrawText(param.name, value, i + 2);
	}

	DrawAction("Add", parameters.size() + 2);
}

// MARK: Events

void AddOptionSub::OnOptionPress(int index)
{
	switch (index) {
		case 0:
		{
			auto setTypeSub = new AddOptionSetTypeSub(menuController);
			setTypeSub->onTypeSet = [this](MenuOptionType type) {
				this->optionToAdd.type = type;
			};
			menuController->AddSubmenuToStack(setTypeSub);
			break;
		}
		case 1: // Change text
		{
			string textInput = Game::GetInputWithKeyboard(optionToAdd.text);
			optionToAdd.text = textInput;
			break;
		}
		case 2:
		{
			auto setKeySub = new AddOptionSetKeySub(optionToAdd.type, menuController);
			setKeySub->onKeySet = [this](string key) {
				this->optionToAdd.key = key;
			};
			menuController->AddSubmenuToStack(setKeySub);
			break;
		}
	}
	if (index > 2 && index < OptionCount() - 1) { // Is parameter
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
	if (index == OptionCount() - 1) { // Is last (Add)
		if (optionToAdd.key == "") {
			Routine::StartDrawBottomMessage("Error: Key cannot be empty");
			return;
		}
		if (onAddOption)
			onAddOption(optionToAdd);
		menuController->GoToLastSub();
	}
}

// MARK: Getters

int AddOptionSub::OptionCount()
{
	return parameters.size() + 4;
}
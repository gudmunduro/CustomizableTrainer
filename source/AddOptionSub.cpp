#include "pch.h"
#include "AddOptionSub.h"
#include "AddOptionSetKeySub.h"
#include "AddOptionSetTypeSub.h"
#include "ActionManager.h"
#include "Routine.h"

AddOptionSub::AddOptionSub(MenuController* menuController)
	: FixedSubmenu(menuController)
{
	
}

void AddOptionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Add option");
	// Option type
	DrawText("Type >", OptionTypeToString(optionToAdd.type), [this]() {
		auto setTypeSub = new AddOptionSetTypeSub(menuController);
		setTypeSub->onTypeSet = [this](MenuOptionType type) {
			this->optionToAdd.type = type;
		};
		menuController->AddSubmenuToStack(setTypeSub);
	});
	// Option text
	DrawText("Text", optionToAdd.text, [this]() {
		string textInput = Game::GetInputWithKeyboard(optionToAdd.text);
		optionToAdd.text = textInput;
	});
	// Option key
	DrawText(OptionTypeToString(optionToAdd.type) + " >", optionToAdd.key, [this]() {
		auto setKeySub = new AddOptionSetKeySub(optionToAdd.type, menuController);
		setKeySub->onKeySet = [this](string key) {
			this->optionToAdd.key = key;
			UpdateParameters();
		};
		menuController->AddSubmenuToStack(setKeySub);
	});

	// Parameters
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

		DrawText(param.name, value, [this, param, i]() {
			switch (param.type) {
			case MenuOptionParameterType::String:
				optionToAdd.params[i] = Game::GetInputWithKeyboard(optionToAdd.params[i].get<string>());
				break;
			case MenuOptionParameterType::Float:
				optionToAdd.params[i] = std::stof(Game::GetInputWithKeyboard(std::to_string(optionToAdd.params[i].get<float>())));
				break;
			case MenuOptionParameterType::Int:
				optionToAdd.params[i] = std::stoi(Game::GetInputWithKeyboard(std::to_string(optionToAdd.params[i].get<int>())));
				break;
			}
		});
	}

	// Add option
	DrawAction("Add", [this]() {
		if (optionToAdd.key == "") {
			Routine::StartDrawBottomMessage("Error: Key cannot be empty");
			return;
		}
		if (onAddOption)
			onAddOption(optionToAdd);
		menuController->GoToLastSub();
	});
}

// MARK: Getters

int AddOptionSub::OptionCount()
{
	return parameters.size() + 4;
}

// MARK: Misc

void AddOptionSub::UpdateParameters()
{
	if (!(optionToAdd.key != "" && optionToAdd.type == MenuOptionType::Action &&
			ActionManager::GetParameterForKey(optionToAdd.key).size() > 0))
		return;

	parameters = ActionManager::GetParameterForKey(optionToAdd.key);

	for each (auto param in parameters) {
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

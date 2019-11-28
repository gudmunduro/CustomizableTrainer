#include "pch.h"
#include "AddOptionSub.h"
#include "Routine.h"

AddOptionSub::AddOptionSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, goToLastSub)
{
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
			"Key"
		},
		{
			MenuOptionType::Action,
			"Add option"
		}
	};
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
			string textInput = Game::GetInputWithKeyboard(optionToAdd.key);
			optionToAdd.key = textInput;
			break;
		}
		case 3:
		{
			goToLastSub("addOption", optionToAdd);
		}
	}
}

void AddOptionSub::OnMessageReceive(string messageKey, std::any messageValue)
{
	if (messageKey == "setOptionType") {
		MenuOptionType type = std::any_cast<MenuOptionType>(messageValue);
		optionToAdd.type = type;
	}
}
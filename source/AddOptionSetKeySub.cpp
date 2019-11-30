#include "pch.h"
#include "AddOptionSetKeySub.h"

AddOptionSetKeySub::AddOptionSetKeySub(Vector2 menuPos, MenuOptionType optionType, std::vector<string> keys, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, goToLastSub)
{
	this->keys = keys;
	this->optionType = optionType;
	title = "Option type";
	options = {};
	CreateDisplayKeys();
	for each (string key in displayKeys) {
		options.push_back({
			MenuOptionType::Action,
			key
		});
	}
	if (optionType == MenuOptionType::Sub) {
		options.push_back({
			MenuOptionType::Action,
			"Add"
		});
	}
}

// MARK: Events
void AddOptionSetKeySub::OnOptionPress(int index)
{
	if (optionType == MenuOptionType::Sub && index == options.size() - 1) { // If last option and option type is submenu (Add)
		string textInput = Game::GetInputWithKeyboard();
		goToLastSub("setOptionKey", "sub_" + textInput);
	}
	else {
		goToLastSub("setOptionKey", keys[index]);
	}
}

// MARK:
void AddOptionSetKeySub::CreateDisplayKeys()
{
	for each (string key in keys) {
		string displayKey = key.substr(key.find("_") + 1);
		
		displayKeys.push_back(displayKey);
	}
}
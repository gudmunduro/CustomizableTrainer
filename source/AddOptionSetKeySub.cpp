#include "pch.h"
#include "AddOptionSetKeySub.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

AddOptionSetKeySub::AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController)
	: FixedSubmenu(menuController)
{
	this->optionType = optionType;

	title = OptionTypeToString(optionType);
	options = {};

	switch (optionType) {
	case MenuOptionType::Action:
		keys = ActionManager::GetKeys();
		break;
	case MenuOptionType::Toggle:
		keys = ToggleManager::GetKeys();
		break;
	case MenuOptionType::Number:
		keys = NumberController::GetKeys();
		break;
	case MenuOptionType::Sub:
		keys = menuController->SubmenuKeys();
		break;
	}

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
	string key;
	if (optionType == MenuOptionType::Sub && index == options.size() - 1) // If last option and option type is submenu (Add)
		key = "sub_" + Game::GetInputWithKeyboard();
	else
		key = keys[index];

	if (onKeySet)
		onKeySet(key);

	menuController->GoToLastSub();
}

// MARK: Misc

void AddOptionSetKeySub::CreateDisplayKeys()
{
	for each (string key in keys) {
		string displayKey = key.substr(key.find("_") + 1);
		if (displayKey == "sub_default") displayKey = "default";

		displayKeys.push_back(displayKey);
	}
}
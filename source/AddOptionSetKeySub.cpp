#include "pch.h"
#include "AddOptionSetKeySub.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "TextController.h"

AddOptionSetKeySub::AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController)
	: FixedSubmenu(menuController)
{
	this->optionType = optionType;

	switch (optionType) {
		case MenuOptionType::Action:
			keys = ActionController::Keys();
			break;
		case MenuOptionType::Toggle:
			keys = ToggleController::Keys();
			break;
		case MenuOptionType::Number:
			keys = NumberController::Keys();
			break;
		case MenuOptionType::Text:
			keys = TextController::Keys();
			break;
		case MenuOptionType::Sub:
			keys = menuController->SubmenuKeys();
			break;
	}

	CreateDisplayKeys();
}

// MARK: Draw

void AddOptionSetKeySub::Draw()
{
	Submenu::Draw();

	DrawTitle(OptionTypeToString(optionType));
	// All keys
	for (int i = 0; i < displayKeys.size(); i++) {
		string displayKey = displayKeys[i];
		string key = keys[i];

		DrawAction(displayKey, [this, key]() {
			OnKeySelect(key);
		});
	}
	// Add submenu
	if (optionType == MenuOptionType::Sub)
		DrawAction("Add", [this]() {
			string key = Game::GetInputWithKeyboard();
			if (key == "") return;

			if (!key._Starts_with("sub_") && !key._Starts_with("required_sub_") && !key._Starts_with("builtin_sub_"))
				key = "sub_" + key;

			OnKeySelect(key);
		});
}

// MARK: Events

void AddOptionSetKeySub::OnKeySelect(string key)
{
	if (onKeySet)
		onKeySet(key);

	menuController->GoToLastSub();
}

// MARK: Misc

void AddOptionSetKeySub::CreateDisplayKeys()
{
	for each (string key in keys) {
		string displayKey = key.substr(key.find("_") + 1);
		if (displayKey._Starts_with("sub_")) displayKey = displayKey.substr(displayKey.find("_") + 1);

		displayKeys.push_back(displayKey);
	}
}
#include "pch.h"
#include "AddOptionSetKeySub.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

AddOptionSetKeySub::AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController)
	: FixedSubmenu(menuController)
{
	this->optionType = optionType;

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

			OnKeySelect("sub_" + key);
		});
}

// MARK: Events

void AddOptionSetKeySub::OnKeySelect(string key)
{
	if (onKeySet)
		onKeySet(key);

	menuController->GoToLastSub();
}

// MARK: Getters

int AddOptionSetKeySub::OptionCount()
{
	return displayKeys.size() + (optionType == MenuOptionType::Sub ? 1 : 0);
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
/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "AddOptionSetKeySub.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "TextController.h"

AddOptionSetKeySub::AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController, bool hideGetterOnlyOptions)
	: Submenu(menuController)
{
	this->optionType = optionType;
	this->hideGetterOnlyOptions = hideGetterOnlyOptions;

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

#pragma region Draw

void AddOptionSetKeySub::Draw()
{
	Submenu::Draw();

	DrawTitle(OptionTypeToString(optionType));
	// All keys
	for (int i = 0; i < displayKeys.size(); i++) {
		std::string displayKey = displayKeys[i];
		std::string key = keys[i];

		DrawAction(displayKey, [this, key]() {
			OnKeySelect(key);
		});
	}
	// Add submenu
	if (optionType == MenuOptionType::Sub)
		DrawAction("Add", [this]() {
			auto key = Game::GetInputWithKeyboard();
			if (!key) return;

			auto keyStr = *key;

			if (!keyStr._Starts_with("sub_") && !keyStr._Starts_with("required_sub_") && !keyStr._Starts_with("builtin_sub_"))
				keyStr = "sub_" + keyStr;

			OnKeySelect(keyStr);
		});
}

#pragma endregion

#pragma region Events

void AddOptionSetKeySub::OnKeySelect(std::string key)
{
	if (onKeySet)
		onKeySet(key);

	menuController->GoToLastSub();
}

#pragma endregion

void AddOptionSetKeySub::CreateDisplayKeys()
{
	for (std::string& key : keys) {
		std::string displayKey = key.substr(key.find("_") + 1);
		if (displayKey._Starts_with("sub_")) displayKey = displayKey.substr(displayKey.find("_") + 1);

		if (optionType == MenuOptionType::Number &&
			hideGetterOnlyOptions &&
			NumberController::NumberGetterExistsForKey(key))
			continue;  // Hide options with only a getter
			

		displayKeys.push_back(displayKey);
	}
}
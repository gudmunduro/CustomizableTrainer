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
#include "SettingsAddOptionToSaveSub.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"
#include "MenuSettings.h"
#include "JsonData.h"

SettingsAddOptionToSaveSub::SettingsAddOptionToSaveSub(MenuController* menuController, int index) : FixedSubmenu(menuController)
{
	isEditingSavedOption = (index != -1);
	editingOptionIndex = index;
	
	OptionToSave defaultSavedOption = {
		MenuOptionType::Toggle,
		""
	};
	savedOptionToAdd = (!isEditingSavedOption) ? defaultSavedOption : MenuSettings::optionsToSave[index];
}

#pragma region Draw

void SettingsAddOptionToSaveSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(isEditingSavedOption ? "Edit saved option" : "Add saved option");
	DrawTextAction("Type >", OptionTypeToString(savedOptionToAdd.type), [this] {
		auto setTypeSub = new AddOptionSetTypeSub(menuController, true, true);
		setTypeSub->onTypeSet = [this](MenuOptionType type) {
			this->savedOptionToAdd.type = type;
		};
		menuController->AddSubmenuToStack(setTypeSub);
	});
	DrawTextAction("Key >", savedOptionToAdd.key, [this] {
		auto setKeySub = new AddOptionSetKeySub(savedOptionToAdd.type, menuController, true);
		setKeySub->onKeySet = [this](string key) {
			this->savedOptionToAdd.key = key;
		};
		menuController->AddSubmenuToStack(setKeySub);
	});
	DrawAction("Done", [this] {
		if (!isEditingSavedOption)
			MenuSettings::optionsToSave.push_back(savedOptionToAdd);
		else
			MenuSettings::optionsToSave[editingOptionIndex] = savedOptionToAdd;

		JSONData::SaveOptionStates();
		menuController->GoToLastSub();
	});
}

#pragma endregion
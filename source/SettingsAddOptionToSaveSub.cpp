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
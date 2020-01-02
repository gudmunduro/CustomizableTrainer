#include "pch.h"
#include "SettingsOptionsToSaveSub.h"
#include "SettingsAddOptionToSaveSub.h"
#include "MenuSettings.h"
#include "Controls.h"
#include "JsonDataManager.h"

SettingsOptionsToSaveSub::SettingsOptionsToSaveSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

// MARK: Draw

void SettingsOptionsToSaveSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Options to save");
	DrawAction("Add >", [this] {
		auto addOptionToSaveSub = new SettingsAddOptionToSaveSub(menuController);
		menuController->AddSubmenuToStack(addOptionToSaveSub);
	});

	for (int i = 0; i < MenuSettings::optionsToSave.size(); i++) {
		auto optionToSave = MenuSettings::optionsToSave[i];
		DrawAction(optionToSave.key + " >", [this, i] {
			auto addOptionToSaveSub = new SettingsAddOptionToSaveSub(menuController, i);
			menuController->AddSubmenuToStack(addOptionToSaveSub);
		});
	}
}

// MARK: Controls

void SettingsOptionsToSaveSub::RespondToControls()
{
	FixedSubmenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeDeleteOption)) {
		if (selection == 0) return;
		if (MenuSettings::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "SELECT");
		
		MenuSettings::optionsToSave.erase(MenuSettings::optionsToSave.begin() + (selection - 1));
		JSONDataManager().SaveOptionStates();

		if (selection == OptionCount() - 1) selection -= 1;
	}
}
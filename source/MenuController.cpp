#include "pch.h"
#include "MenuController.h"
#include "Routine.h"
#include "Controls.h"
#include "JsonData.h"
#include "MenuSettings.h"
#include "DynamicSubmenu.h"
#include "PedSpawnerSub.h"
#include "SettingsSub.h"
#include "SettingsGeneralSub.h"
#include "SettingsControlsSub.h"
#include "SettingsControlsControllerSub.h"
#include "SettingsControlsKeyboardSub.h"
#include "SettingsColorSchemeSub.h"
#include "SettingsHotkeysSub.h"
#include "SettingsOptionsToSaveSub.h"
#include "WeaponSelection.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"

MenuController::MenuController()
{
	position = { 5.4f, 10.0f };
	shouldDrawMenu = false;

	// Load json data
	JSONData::UpdateMenuSettings();
	submenuDataMap = JSONData::GetLayoutAsMap();
}

void MenuController::Tick()
{
	RespondToControls();
	if (!UI::IS_PAUSE_MENU_ACTIVE() && shouldDrawMenu && submenuStack.size() > 0) {
		submenuStack.back()->Tick();
	}
}

// MARK: Manange submenu stack

void MenuController::RegisterSubmenuData(string key, SubmenuData submenuData)
{
	submenuDataMap[key] = submenuData;
}

void MenuController::AddSubmenuToStack(Submenu* submenu)
{
	submenuStack.push_back(submenu);
}

void MenuController::GoToLastSub()
{
	if (!submenuStack.empty()) {
		auto currentSub = submenuStack.back();
		submenuStack.pop_back();
		currentSub->DeleteWhenPossible();

		if (!submenuStack.empty()) {
			// Set selection into bounds if option has been removed
			auto currentSub = submenuStack.back();

			if (currentSub->selection > currentSub->OptionCount() - 1) {
				currentSub->selection = currentSub->OptionCount() - 1;
				int newScrollPos = currentSub->OptionCount() - 8;
				currentSub->scrollPosition = (newScrollPos > 0) ? newScrollPos : 0;
			}
		}
	}
	if (submenuStack.size() == 0) { 
		shouldDrawMenu = false;
		Controls::SetMenuControlsEnabled(true);
	}
}

// MARK: Controls

void MenuController::RespondToControls()
{
	if (Controls::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		if (MenuSettings::playUiSounds)
			Game::PlaySoundFrontend("HUD_PLAYER_MENU", shouldDrawMenu ? "MENU_ENTER" : "MENU_CLOSE");
			

		Controls::SetMenuControlsEnabled(!shouldDrawMenu);
		if (submenuStack.size() == 0) {
			SetSubmenuWithKey("required_sub_default");
		}
		Controls::CanceMenuControlslForThisFrame();
	}
}

// MARK: Booleans

bool MenuController::SubmenuExistsForKey(string key)
{
	return submenuDataMap.count(key) > 0;
}

bool MenuController::FixedSubmenuExistsForKey(string key)
{
	return FixedSubmenuForKey(key) != nullptr;
}

// MARK: Setters

void MenuController::SetSubmenuDataForKey(string key, SubmenuData submenuData) {
	submenuDataMap[key] = submenuData;
}

void MenuController::SetSubmenuWithKey(string key)
{
	if (SubmenuExistsForKey(key)) {
		Submenu* submenu = SubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else if (FixedSubmenuExistsForKey(key)) {
		Submenu* submenu = FixedSubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else {
		Game::PrintSubtitle("Error: Submenu '" + key + "' does not exist");
	}
}

void MenuController::UpdateSubmenuData(string key, SubmenuData submenuData)
{
	for each (auto option in submenuData.options) {
		if (option.type == MenuOptionType::Sub && !SubmenuExistsForKey(option.key) && !FixedSubmenuExistsForKey(option.key)) { // Add submenu if it does not exist
			Game::PrintSubtitle("Creating submenu");
			SetSubmenuDataForKey(option.key, {
				option.text,
				option.key,
				{}
			});
		}
	}

	if (SubmenuExistsForKey(key)) {
		SetSubmenuDataForKey(key, submenuData);
	}
	JSONData::SaveLayoutFromMap(submenuDataMap);
}

// MARK: Getters

SubmenuData MenuController::SubmenuDataForKey(string key) 
{
	return submenuDataMap[key];
}
Submenu* MenuController::SubmenuForKey(string submenuKey)
{
	return new DynamicSubmenu(SubmenuDataForKey(submenuKey), this);
}

std::vector<string> MenuController::SubmenuKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(submenuDataMap), std::end(submenuDataMap), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});

	keys.push_back("builtin_sub_pedSpawner"); // TODO: Find a better solution to this
	keys.push_back("builtin_sub_settings");
	keys.push_back("builtin_sub_selectWeaponCat");

	return keys;
}

Submenu* MenuController::FixedSubmenuForKey(string key)
{
	if (key == "builtin_sub_pedSpawner") {
		return new PedSpawnerSub(this);
	}
	else if (key == "builtin_sub_settings") {
		return new SettingsSub(this);
	}
	else if (key == "builtin_sub_settingsGeneral") {
		return new SettingsGeneralSub(this);
	}
	else if (key == "builtin_sub_settingsControls") {
		return new SettingsControlsSub(this);
	}
	else if (key == "builtin_sub_settingsControlsController") {
		return new SettingsControlsControllerSub(this);
	}
	else if (key == "builtin_sub_settingsControlsKeyboard") {
		return new SettingsControlsKeyboardSub(this);
	}
	else if (key == "builtin_sub_settingsColorScheme") {
		return new SettingsColorSchemeSub(this);
	}
	else if (key == "builtin_sub_settingsHotkeys") {
		return new SettingsHotkeysSub(this);
	}
	else if (key == "builtin_sub_settingsOptionsToSave") {
		return new SettingsOptionsToSaveSub(this);
	}
	else if (key == "builtin_sub_selectWeaponCat") {
		return new WeaponSelectionSub(this);
	}
	return nullptr;
}

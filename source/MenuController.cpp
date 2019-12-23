#include "pch.h"
#include "MenuController.h"
#include "Routine.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "DynamicSubmenu.h"
#include "PedSpawnerSub.h"
#include "SettingsSub.h"
#include "SettingsControlsSub.h"
#include "SettingsControlsControllerSub.h"
#include "SettingsControlsKeyboardSub.h"
#include "SettingsColorSchemeSub.h"
#include "SettingsHotkeysSub.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

MenuController::MenuController()
{
	position = { 0.054f, 0.1f };
	shouldDrawMenu = false;

	// Load json data
	JSONDataManager manager;
	manager.Load();
	manager.UpdateMenuSettings();
	submenuDataMap = manager.GetLayoutAsMap();
}

void MenuController::Tick()
{
	RespondToControls();
	if (shouldDrawMenu && submenuStack.size() > 0) {
		submenuStack.back()->Draw();
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
		submenuStack.pop_back();

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
		ControlManager::SetMenuControlsEnabled(true);
	}
}

// MARK: Controls

void MenuController::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		ControlManager::SetMenuControlsEnabled(!shouldDrawMenu);
		if (submenuStack.size() == 0) {
			SetSubmenuWithKey("required_sub_default");
		}
		ControlManager::CanceMenuControlslForThisFrame();
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
		Routine::StartDrawBottomMessage("Error: Submenu '" + key + "' does not exist");
	}
}

void MenuController::UpdateSubmenuData(string key, SubmenuData submenuData)
{
	for each (auto option in submenuData.options) {
		if (option.type == MenuOptionType::Sub && !SubmenuExistsForKey(option.key) && !FixedSubmenuExistsForKey(option.key)) { // Add submenu if it does not exist
			Routine::StartDrawBottomMessage("Creating submenu");
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
	JSONDataManager manager;
	manager.SaveLayoutFromMap(submenuDataMap);
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
	return nullptr;
}

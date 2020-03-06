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
#include "MenuController.h"
#include "Routine.h"
#include "Controls.h"
#include "JsonData.h"
#include "MenuSettings.h"

#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"

#include "CustomSubmenu.h"
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
#include "SpawnerSub.h"
#include "VehicleSelection.h"
#include "PedSelection.h"

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

#pragma region Manage submenu stack

void MenuController::RegisterSubmenuData(std::string key, SubmenuData submenuData)
{
	submenuDataMap[key] = submenuData;
}

void MenuController::AddSubmenuToStack(Submenu* submenu)
{
	submenuStack.push_back(submenu);
	submenu->SubDidAppear();
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
			currentSub->SubDidAppear();
		}
	}
	if (submenuStack.size() == 0) { 
		shouldDrawMenu = false;
		Controls::SetMenuControlsEnabled(true);
	}
}

#pragma endregion

#pragma region Controls

void MenuController::RespondToControls()
{
	if (Controls::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		if (Settings::General::playUiSounds)
			Game::PlaySoundFrontend("HUD_PLAYER_MENU", shouldDrawMenu ? "MENU_ENTER" : "MENU_CLOSE");
			

		Controls::SetMenuControlsEnabled(!shouldDrawMenu);
		if (submenuStack.size() == 0) {
			SetSubmenuWithKey("required_sub_default");
		}
		Controls::CanceMenuControlslForThisFrame();
	}
}

#pragma endregion

#pragma region Booleans

bool MenuController::SubmenuExistsForKey(std::string key)
{
	return submenuDataMap.count(key) > 0;
}

#pragma endregion

#pragma region Setters

void MenuController::SetSubmenuDataForKey(std::string key, SubmenuData submenuData) {
	submenuDataMap[key] = submenuData;
}

void MenuController::SetSubmenuWithKey(std::string key)
{
	if (SubmenuExistsForKey(key)) {
		Submenu* submenu = GetSubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else if (auto submenu = GetBuiltinSubmenuForKey(key); submenu) {
		AddSubmenuToStack(*submenu);
	}
	else {
		Game::PrintSubtitle("Error: Submenu '" + key + "' does not exist");
	}
}

void MenuController::UpdateSubmenuData(std::string key, SubmenuData submenuData)
{
	for (auto&& option : submenuData.options) {
		if (option.type == MenuOptionType::Sub && !SubmenuExistsForKey(option.key) && !GetBuiltinSubmenuForKey(option.key)) { // Add submenu if it does not exist
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

#pragma endregion

#pragma region Getters

SubmenuData MenuController::GetSubmenuDataForKey(std::string key) 
{
	return submenuDataMap[key];
}
Submenu* MenuController::GetSubmenuForKey(std::string submenuKey)
{
	return new CustomSubmenu(GetSubmenuDataForKey(submenuKey), this);
}

std::vector<std::string> MenuController::SubmenuKeys()
{
	std::vector<std::string> keys;
	std::transform(std::begin(submenuDataMap), std::end(submenuDataMap), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});

	keys.push_back("builtin_sub_pedSpawner"); // TODO: Find a better solution to this
	keys.push_back("builtin_sub_settings");
	keys.push_back("builtin_sub_selectWeaponCat");
	keys.push_back("builtin_sub_spawnerSub");
	keys.push_back("builtin_sub_vehicleSpawner");
	keys.push_back("builtin_sub_modelSelection");

	return keys;
}

std::optional<Submenu*> MenuController::GetBuiltinSubmenuForKey(std::string key)
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
		return new WeaponSelectionSub(this, Player().ped);
	}
	else if (key == "builtin_sub_spawner") {
		return new SpawnerSub(this);
	}
	else if (key == "builtin_sub_vehicleSpawner") {
		return new VehicleSelectionSub(this, VehicleSelectionMode::Spawn, [] (VehicleData vehicleData) {});
	}
	else if (key == "builtin_sub_modelSelection") {
		return new PedCatSelectionSub(this, PedSelectionMode::ModelSelection, [] (PedData pedData) {});
	}
	return std::nullopt;
}

#pragma endregion

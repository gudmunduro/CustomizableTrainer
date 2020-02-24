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
#include "JsonData.h"
#include "MenuSettings.h"
#include "Controls.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "TextController.h"

#pragma region Core functions

std::string ReadFile(std::string path)
{
	if (!std::filesystem::exists(path)) throw std::exception("File doesn't exist");

	std::ifstream file(path);
	std::string fileContent((std::istreambuf_iterator<char>(file)),
		std::istreambuf_iterator<char>());

	return fileContent;
}

void WriteFile(std::string path, std::string content)
{
	std::ofstream file(path);
	file << content;
	file.close();
}

json LoadJSONFile(std::string path)
{
	std::string jsonFileContent = ReadFile(path);
	if (jsonFileContent == "") throw std::exception("File empty");
	return json::parse(jsonFileContent);
}

#pragma endregion

#pragma region Load data

// layout.json

std::map<std::string, SubmenuData> JSONData::GetLayoutAsMap()
{
	try {
		json layoutData = LoadJSONFile("CustomizableTrainer\\layout.json");
		std::map<std::string, SubmenuData> layoutDataMap;

		for (auto& submenu : layoutData) {

			std::string key = submenu["key"].get<std::string>();
			SubmenuData submenuData = {
				submenu["title"].get<std::string>(),
				key,
				{}
			};

			for (auto& option : submenu["options"]) {

				MenuOptionType menuOptionType;
				if (option["type"].get<std::string>() == "sub") menuOptionType = MenuOptionType::Sub;
				else if (option["type"].get<std::string>() == "action") menuOptionType = MenuOptionType::Action;
				else if (option["type"].get<std::string>() == "toggle") menuOptionType = MenuOptionType::Toggle;
				else if (option["type"].get<std::string>() == "number") menuOptionType = MenuOptionType::Number;
				else if (option["type"].get<std::string>() == "text") menuOptionType = MenuOptionType::Text;
				else menuOptionType = MenuOptionType::Action;

				submenuData.options.push_back({
					menuOptionType,
					option["text"].get<std::string>(),
					option["key"].get<std::string>(),
					option.contains("params") ? option["params"] : json::array()
				});
			}
			layoutDataMap[key] = submenuData;
		}

		return layoutDataMap;
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to parse layout.json");
	}
	return std::map<std::string, SubmenuData>();
}

// optionStates.json

void JSONData::UpdateOptionStates()
{
	try {
		json data = LoadJSONFile("CustomizableTrainer\\optionStates.json");

		for each (auto optionState in data["optionStates"]) {
			MenuOptionType type;
			std::string key = optionState["key"].get<std::string>();

			if (optionState["type"].get<std::string>() == "toggle") {
				type = MenuOptionType::Toggle;

				bool value = optionState["value"].get<bool>();
				ToggleController::SetToggleValueForKey(key, value);
			}
			else if (optionState["type"].get<std::string>() == "number") {
				type = MenuOptionType::Number;

				std::string value = optionState["value"].get<std::string>();
				if (NumberController::NumberExistsForKey(key)) {
					NumberController::SetNumberValueForKey(key, value);
				}
			}
			else if (optionState["type"].get<std::string>() == "text") {
				type = MenuOptionType::Text;

				int value = optionState["value"].get<int>();
				if (TextController::TextExistsForKey(key)) {
					TextController::SetTextValueForKey(key, value);
				}
			}

			Settings::General::optionsToSave.push_back({ type, key });
		}
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to parse optionStates.json");
	}
}

// settings.json

void JSONData::UpdateMenuSettings()
{
	try {
		// Load file
		json settingsData = LoadJSONFile("CustomizableTrainer\\settings.json");

		// General
		Settings::General::playUiSounds = settingsData["playUiSounds"].get<bool>();

		// Colors
		Settings::Colors::titleBarBorder = Settings::colorFromJSON(settingsData["titleBarBorderColor"]);
		Settings::Colors::titleBarText = Settings::colorFromJSON(settingsData["titleBarTextColor"]);
		Settings::Colors::optionBg = Settings::colorFromJSON(settingsData["optionBgColor"]);
		Settings::Colors::optionText = Settings::colorFromJSON(settingsData["optionTextColor"]);
		Settings::Colors::optionSelectedBg = Settings::colorFromJSON(settingsData["optionSelectedBgColor"]);
		Settings::Colors::optionSelectedOutline = Settings::colorFromJSON(settingsData["optionSelectedOutlineColor"]);
		Settings::Colors::optionSelectedText = Settings::colorFromJSON(settingsData["optionSelectedTextColor"]);
		Settings::Colors::optionToggle = Settings::colorFromJSON(settingsData["optionToggleColor"]);
		Settings::Colors::optionToggleToggled = Settings::colorFromJSON(settingsData["optionToggleToggledColor"]);
		Settings::Colors::optionNumber = Settings::colorFromJSON(settingsData["optionNumberColor"]);
		Settings::Colors::menuScrollLine = Settings::colorFromJSON(settingsData["menuScrollLineColor"]);
		Settings::Colors::menuBg = Settings::colorFromJSON(settingsData["menuBgColor"]);
		Settings::Colors::menuStatusText = Settings::colorFromJSON(settingsData["menuStatusTextColor"]);
		Settings::Colors::menuOptionCount = Settings::colorFromJSON(settingsData["menuOptionCountColor"]);

		// Keyboard controls
		json keyboardControls = settingsData["controls"]["keyboard"];
		Settings::Controls::Keyboard::MenuOpen = keyboardControls["menuOpen"].get<int>();
		Settings::Controls::Keyboard::MenuOptionPress = keyboardControls["menuOptionPress"].get<int>();
		Settings::Controls::Keyboard::MenuUp = keyboardControls["menuUp"].get<int>();
		Settings::Controls::Keyboard::MenuDown = keyboardControls["menuDown"].get<int>();
		Settings::Controls::Keyboard::MenuBack = keyboardControls["menuBack"].get<int>();
		Settings::Controls::Keyboard::MenuAdjustValueDown = keyboardControls["menuAdjustValueDown"].get<int>();
		Settings::Controls::Keyboard::MenuAdjustValueUp = keyboardControls["menuAdjustValueUp"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeEnter = keyboardControls["menuEditModeEnter"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeExit = keyboardControls["menuEditModeExit"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeExitAndSave = keyboardControls["menuEditModeExitAndSave"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeMoveOption = keyboardControls["menuEditModeMoveOption"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeAddOption = keyboardControls["menuEditModeAddOption"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeEditOption = keyboardControls["menuEditModeEditOption"].get<int>();
		Settings::Controls::Keyboard::MenuEditModeDeleteOption = keyboardControls["menuEditModeDeleteOption"].get<int>();
		Settings::Controls::Keyboard::BindBoost = keyboardControls["bindBoost"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeAccelerate = keyboardControls["boatFlyModeAccelerate"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeDecelerate = keyboardControls["boatFlyModeDecelerate"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeFlyUp = keyboardControls["boatFlyModeFlyUp"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeUp = keyboardControls["boatFlyModeUp"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeDown = keyboardControls["boatFlyModeDown"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeLeft = keyboardControls["boatFlyModeLeft"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeRight = keyboardControls["boatFlyModeRight"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeYawLeft = keyboardControls["boatFlyModeYawLeft"].get<int>();
		Settings::Controls::Keyboard::BoatFlyModeYawRight = keyboardControls["boatFlyModeYawRight"].get<int>();
		
		// Controller controls
		json controllerControls = settingsData["controls"]["controller"];
		Settings::Controls::Controller::MenuOpen = String::Hash(controllerControls["menuOpen"].get<std::string>());
		Settings::Controls::Controller::MenuOpenModifier = String::Hash(controllerControls["menuOpenModifier"].get<std::string>());
		Settings::Controls::Controller::MenuOptionPress = String::Hash(controllerControls["menuOptionPress"].get<std::string>());
		Settings::Controls::Controller::MenuUp = String::Hash(controllerControls["menuUp"].get<std::string>());
		Settings::Controls::Controller::MenuDown = String::Hash(controllerControls["menuDown"].get<std::string>());
		Settings::Controls::Controller::MenuBack = String::Hash(controllerControls["menuBack"].get<std::string>());
		Settings::Controls::Controller::MenuAdjustValueDown = String::Hash(controllerControls["menuAdjustValueDown"].get<std::string>());
		Settings::Controls::Controller::MenuAdjustValueUp = String::Hash(controllerControls["menuAdjustValueUp"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeEnter = String::Hash(controllerControls["menuEditModeEnter"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeExit = String::Hash(controllerControls["menuEditModeExit"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeExitAndSave = String::Hash(controllerControls["menuEditModeExitAndSave"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeMoveOption = String::Hash(controllerControls["menuEditModeMoveOption"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeAddOption = String::Hash(controllerControls["menuEditModeAddOption"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeEditOption = String::Hash(controllerControls["menuEditModeEditOption"].get<std::string>());
		Settings::Controls::Controller::MenuEditModeDeleteOption = String::Hash(controllerControls["menuEditModeDeleteOption"].get<std::string>());
		Settings::Controls::Controller::BindBoost = String::Hash(controllerControls["bindBoost"].get<std::string>());
		Settings::Controls::Controller::BoatFlyModeAccelerate = String::Hash(controllerControls["boatFlyModeAccelerate"].get<std::string>());
		Settings::Controls::Controller::BoatFlyModeDecelerate = String::Hash(controllerControls["boatFlyModeDecelerate"].get<std::string>());
		Settings::Controls::Controller::BoatFlyModeFlyUp = String::Hash(controllerControls["boatFlyModeFlyUp"].get<std::string>());
		Settings::Controls::Controller::BoatFlyModeYawLeft = String::Hash(controllerControls["boatFlyModeYawLeft"].get<std::string>());
		Settings::Controls::Controller::BoatFlyModeYawRight = String::Hash(controllerControls["boatFlyModeYawRight"].get<std::string>());
	}
	catch (const std::exception & e) {
		// Game::PrintSubtitle("Error: Failed to parse settings.json");
		Game::PrintSubtitle(e.what());
	}
}

// hotkeys.json

std::vector<Hotkey> JSONData::GetHotkeysAsVector()
{
	try {
		json hotkeys = LoadJSONFile("CustomizableTrainer\\hotkeys.json");
		std::vector<Hotkey> hotkeyVec;

		for each (auto hotkeyData in hotkeys) {
			MenuOptionType optionType;
			if (hotkeyData["type"].get<std::string>() == "sub") optionType = MenuOptionType::Sub;
			else if (hotkeyData["type"].get<std::string>() == "action") optionType = MenuOptionType::Action;
			else if (hotkeyData["type"].get<std::string>() == "toggle") optionType = MenuOptionType::Toggle;
			else if (hotkeyData["type"].get<std::string>() == "number") optionType = MenuOptionType::Number;

			hotkeyVec.push_back({
				hotkeyData["name"].get<std::string>(),
				hotkeyData["keyboardKey"].get<int>(),
				hotkeyData["controllerControl"].get<Hash>(),
				hotkeyData["controllerControlModifier"].get<Hash>(),
				optionType,
				hotkeyData["key"].get<std::string>(),
				hotkeyData["action"].get<int>(),
				hotkeyData["value"]
			});
		}
		return hotkeyVec;
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to parse hotkeys.json");
	}

	return std::vector<Hotkey>();
}

// weapons.json

std::vector<std::pair<std::string, std::vector<WeaponData>>> JSONData::GetWeapons()
{
	try {
		json weapons = LoadJSONFile("CustomizableTrainer\\weapons.json");

		std::vector<std::pair<std::string, std::vector<WeaponData>>> weaponData;

		for each (auto && weaponCat in weapons) {

			std::vector<WeaponData> weaponCatVec;

			for each (auto && weapon in weaponCat["weapons"]) {
				weaponCatVec.push_back({
					weapon["name"].get<std::string>(),
					weapon["model"].get<std::string>()
				});
			}

			weaponData.push_back(std::pair(weaponCat["name"], weaponCatVec));
		}

		return weaponData;
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to parse weapons.json");
	}

	return std::vector<std::pair<std::string, std::vector<WeaponData>>>();
}

std::vector<std::pair<std::string, std::vector<VehicleData>>> JSONData::GetVehicles()
{
	try {
		json vehicleCats = LoadJSONFile("CustomizableTrainer\\vehicles.json");

		std::vector<std::pair<std::string, std::vector<VehicleData>>> vehicleData;

		for each (auto && vehicleCat in vehicleCats) {

			std::vector<VehicleData> vehicleCatVec;

			for each (auto && weapon in vehicleCat["vehicles"]) {
				vehicleCatVec.push_back({
					weapon["name"].get<std::string>(),
					weapon["model"].get<std::string>()
				});
			}

			vehicleData.push_back(std::pair(vehicleCat["name"], vehicleCatVec));
		}

		return vehicleData;
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to parse weapons.json");
	}

	return std::vector<std::pair<std::string, std::vector<VehicleData>>>();
}

#pragma endregion

#pragma region Save data

// layout.json

void JSONData::SaveLayoutFromMap(std::map<std::string, SubmenuData> submenuDataMap)
{
	json submenuDataArray = json::array();
	int index = 0;
	for (auto const& [key, submenuData] : submenuDataMap) {
		submenuDataArray.push_back({
			{"title", submenuData.title},
			{"key", key},
			{"options", json::array()}
		});

		for each (auto && option in submenuData.options) {
			std::string typeStringValue;
			switch (option.type) {
			case MenuOptionType::Action:
				typeStringValue = "action";
				break;
			case MenuOptionType::Sub:
				typeStringValue = "sub";
				break;
			case MenuOptionType::Toggle:
				typeStringValue = "toggle";
				break;
			case MenuOptionType::Number:
				typeStringValue = "number";
				break;
			case MenuOptionType::Text:
				typeStringValue = "text";
				break;
			}
			submenuDataArray[index]["options"].push_back({
				{ "type", typeStringValue },
				{ "text", option.text },
				{ "key", option.key }
			});
			if (option.params.size() > 0) {
				submenuDataArray[index]["options"].back()["params"] = option.params;
			}
		}
		index++;
	}
	WriteFile("CustomizableTrainer\\layout.json", submenuDataArray.dump());
}

// settings.json

void JSONData::SaveMenuSettings(bool showSavedMessage)
{
	try {
		json settingsData = json::object({
			// General
			{ "playUiSounds", Settings::General::playUiSounds },

			// Colors
			{ "titleBarBorderColor", Settings::jsonFromColor(Settings::Colors::titleBarBorder) },
			{ "titleBarTextColor", Settings::jsonFromColor(Settings::Colors::titleBarText) },
			{ "optionBgColor", Settings::jsonFromColor(Settings::Colors::optionBg) },
			{ "optionTextColor", Settings::jsonFromColor(Settings::Colors::optionText) },
			{ "optionSelectedBgColor", Settings::jsonFromColor(Settings::Colors::optionSelectedBg) },
			{ "optionSelectedOutlineColor", Settings::jsonFromColor(Settings::Colors::optionSelectedOutline) },
			{ "optionSelectedTextColor", Settings::jsonFromColor(Settings::Colors::optionSelectedText) },
			{ "optionToggleColor", Settings::jsonFromColor(Settings::Colors::optionToggle) },
			{ "optionToggleToggledColor", Settings::jsonFromColor(Settings::Colors::optionToggleToggled) },
			{ "optionNumberColor", Settings::jsonFromColor(Settings::Colors::optionNumber) },
			{ "menuScrollLineColor", Settings::jsonFromColor(Settings::Colors::menuScrollLine) },
			{ "menuBgColor", Settings::jsonFromColor(Settings::Colors::menuBg) },
			{ "menuStatusTextColor", Settings::jsonFromColor(Settings::Colors::menuStatusText) },
			{ "menuOptionCountColor", Settings::jsonFromColor(Settings::Colors::menuOptionCount) },

			// Controls
			{"controls", {
				{"keyboard", {
					{"menuOpen", Settings::Controls::Keyboard::MenuOpen},
					{"menuOptionPress", Settings::Controls::Keyboard::MenuOptionPress},
					{"menuDown", Settings::Controls::Keyboard::MenuDown},
					{"menuUp", Settings::Controls::Keyboard::MenuUp},
					{"menuBack", Settings::Controls::Keyboard::MenuBack},
					{"menuAdjustValueDown", Settings::Controls::Keyboard::MenuAdjustValueDown},
					{"menuAdjustValueUp", Settings::Controls::Keyboard::MenuAdjustValueUp},
					{"menuEditModeEnter", Settings::Controls::Keyboard::MenuEditModeEnter},
					{"menuEditModeExit", Settings::Controls::Keyboard::MenuEditModeExit},
					{"menuEditModeExitAndSave", Settings::Controls::Keyboard::MenuEditModeExitAndSave},
					{"menuEditModeMoveOption", Settings::Controls::Keyboard::MenuEditModeMoveOption},
					{"menuEditModeAddOption", Settings::Controls::Keyboard::MenuEditModeAddOption},
					{"menuEditModeEditOption", Settings::Controls::Keyboard::MenuEditModeEditOption},
					{"menuEditModeDeleteOption", Settings::Controls::Keyboard::MenuEditModeDeleteOption},
					{"bindBoost", Settings::Controls::Keyboard::BindBoost},
					{"boatFlyModeAccelerate", Settings::Controls::Keyboard::BoatFlyModeAccelerate},
					{"boatFlyModeDecelerate", Settings::Controls::Keyboard::BoatFlyModeDecelerate},
					{"boatFlyModeFlyUp", Settings::Controls::Keyboard::BoatFlyModeFlyUp},
					{"boatFlyModeUp", Settings::Controls::Keyboard::BoatFlyModeUp},
					{"boatFlyModeDown", Settings::Controls::Keyboard::BoatFlyModeDown},
					{"boatFlyModeLeft", Settings::Controls::Keyboard::BoatFlyModeLeft},
					{"boatFlyModeRight", Settings::Controls::Keyboard::BoatFlyModeRight},
					{"boatFlyModeYawLeft", Settings::Controls::Keyboard::BoatFlyModeYawLeft},
					{"boatFlyModeYawRight", Settings::Controls::Keyboard::BoatFlyModeYawRight}
				}},
				{"controller", {
					{ "menuOpen", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuOpen) },
					{ "menuOpenModifier", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuOpenModifier) },
					{ "menuOptionPress", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuOptionPress) },
					{ "menuUp", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuUp) },
					{ "menuDown", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuDown) },
					{ "menuBack", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuBack) },
					{ "menuAdjustValueDown", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuAdjustValueDown) },
					{ "menuAdjustValueUp", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuAdjustValueUp) },
					{ "menuEditModeEnter", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeEnter) },
					{ "menuEditModeExit", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeExit) },
					{ "menuEditModeExitAndSave", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeExitAndSave) },
					{ "menuEditModeMoveOption", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeMoveOption) },
					{ "menuEditModeAddOption", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeAddOption) },
					{ "menuEditModeEditOption", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeEditOption) },
					{ "menuEditModeDeleteOption", Controls::ControlStringFromHash(Settings::Controls::Controller::MenuEditModeDeleteOption) },
					{ "bindBoost", Controls::ControlStringFromHash(Settings::Controls::Controller::BindBoost) },
					{ "boatFlyModeAccelerate", Controls::ControlStringFromHash(Settings::Controls::Controller::BoatFlyModeAccelerate) },
					{ "boatFlyModeDecelerate", Controls::ControlStringFromHash(Settings::Controls::Controller::BoatFlyModeDecelerate) },
					{ "boatFlyModeFlyUp", Controls::ControlStringFromHash(Settings::Controls::Controller::BoatFlyModeFlyUp) },
					{ "boatFlyModeYawRight", Controls::ControlStringFromHash(Settings::Controls::Controller::BoatFlyModeYawRight) },
					{ "boatFlyModeYawLeft", Controls::ControlStringFromHash(Settings::Controls::Controller::BoatFlyModeYawLeft) }
				}}
			}}
		});

		WriteFile("CustomizableTrainer\\settings.json", settingsData.dump());

		if (showSavedMessage)
			Game::PrintSubtitle("Saved");
	}
	catch (std::exception & e) {
		Game::PrintSubtitle("Failed to save settings");
	}
}

// hotkeys.json

void JSONData::SaveHotkeys(std::vector<Hotkey> hotkeys)
{
	try {
		json hotkeyData = json::array();
		for each (auto hotkey in hotkeys) {
			std::string typeStringValue;
			switch (hotkey.type) {
			case MenuOptionType::Action:
				typeStringValue = "action";
				break;
			case MenuOptionType::Sub:
				typeStringValue = "sub";
				break;
			case MenuOptionType::Toggle:
				typeStringValue = "toggle";
				break;
			case MenuOptionType::Number:
				typeStringValue = "number";
				break;
			case MenuOptionType::Text:
				typeStringValue = "text";
				break;
			}

			hotkeyData.push_back({
				{ "name", hotkey.name },
				{ "keyboardKey", hotkey.keyboardKey },
				{ "controllerControl", hotkey.controllerControl },
				{ "controllerControlModifier", hotkey.controllerControlModifier },
				{ "type", typeStringValue },
				{ "key", hotkey.key },
				{ "action", hotkey.action },
				{ "value", hotkey.value }
			});
		}

		WriteFile("CustomizableTrainer\\hotkeys.json", hotkeyData.dump());
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to save hotkeys");
	}
}

// optionStates.json

void JSONData::SaveOptionStates()
{
	try {
		json optionStates;
		optionStates["optionStates"] = json::array();

		for each (auto optionToSave in Settings::General::optionsToSave) {
			std::string key = optionToSave.key;
			std::string type;
			json value;
			switch (optionToSave.type)
			{
				case MenuOptionType::Toggle:
					type = "toggle";
					value = *ToggleController::GetToggleForKey(key).value();
					break;
				case MenuOptionType::Number:
					type = "number";
					value = NumberController::GetNumberStringValueForKey(key).value();
					break;
				case MenuOptionType::Text:
					type = "text";
					value = TextController::GetTextValueIndexForKey(key).value();
					break;
			}
			
			optionStates["optionStates"].push_back({
				{ "type", type },
				{ "key", key },
				{ "value", value }
			});
		}

		WriteFile("CustomizableTrainer\\optionStates.json", optionStates.dump());
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to save option states");
	}
}

#pragma endregion
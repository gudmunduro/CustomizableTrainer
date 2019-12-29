#include "pch.h"
#include "JsonDataManager.h"
#include "Routine.h"
#include "MenuSettings.h"
#include "Controls.h"

JSONDataManager::JSONDataManager()
{

}

// MARK: Process data
std::map<string, SubmenuData> JSONDataManager::GetLayoutAsMap()
{
	try {
		std::map<string, SubmenuData> layoutDataMap;
		for (auto& submenu : layoutData) {
			string key = submenu["key"].get<string>();
			SubmenuData submenuData = {
				submenu["title"].get<string>(),
				key,
				{}
			};
			for (auto& option : submenu["options"]) {
				MenuOptionType menuOptionType;
				if (option["type"].get<string>() == "sub") menuOptionType = MenuOptionType::Sub;
				else if (option["type"].get<string>() == "action") menuOptionType = MenuOptionType::Action;
				else if (option["type"].get<string>() == "toggle") menuOptionType = MenuOptionType::Toggle;
				else if (option["type"].get<string>() == "number") menuOptionType = MenuOptionType::Number;
				else menuOptionType = MenuOptionType::Action;
				submenuData.options.push_back({
					menuOptionType,
					option["text"].get<string>(),
					option["key"].get<string>(),
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
}

void JSONDataManager::UpdateMenuSettings()
{
	try {
		// General
		MenuSettings::playUiSounds = settingsData["playUiSounds"].get<bool>();

		// Colors
		MenuSettings::titleBarBorderColor = MenuSettings::colorFromJSON(settingsData["titleBarBorderColor"]);
		MenuSettings::titleBarTextColor = MenuSettings::colorFromJSON(settingsData["titleBarTextColor"]);
		MenuSettings::optionBgColor = MenuSettings::colorFromJSON(settingsData["optionBgColor"]);
		MenuSettings::optionTextColor = MenuSettings::colorFromJSON(settingsData["optionTextColor"]);
		MenuSettings::optionSelectedBgColor = MenuSettings::colorFromJSON(settingsData["optionSelectedBgColor"]);
		MenuSettings::optionSelectedOutlineColor = MenuSettings::colorFromJSON(settingsData["optionSelectedOutlineColor"]);
		MenuSettings::optionSelectedTextColor = MenuSettings::colorFromJSON(settingsData["optionSelectedTextColor"]);
		MenuSettings::optionToggleColor = MenuSettings::colorFromJSON(settingsData["optionToggleColor"]);
		MenuSettings::optionToggleToggledColor = MenuSettings::colorFromJSON(settingsData["optionToggleToggledColor"]);
		MenuSettings::optionNumberColor = MenuSettings::colorFromJSON(settingsData["optionNumberColor"]);
		MenuSettings::menuScrollLineColor = MenuSettings::colorFromJSON(settingsData["menuScrollLineColor"]);
		MenuSettings::menuBgColor = MenuSettings::colorFromJSON(settingsData["menuBgColor"]);
		MenuSettings::menuStatusTextColor = MenuSettings::colorFromJSON(settingsData["menuStatusTextColor"]);
		MenuSettings::menuOptionCountColor = MenuSettings::colorFromJSON(settingsData["menuOptionCountColor"]);

		// Keyboard controls
		json keyboardControls = settingsData["controls"]["keyboard"];
		MenuSettings::MenuOpen = keyboardControls["menuOpen"].get<int>();
		MenuSettings::MenuOptionPress = keyboardControls["menuOptionPress"].get<int>();
		MenuSettings::MenuUp = keyboardControls["menuUp"].get<int>();
		MenuSettings::MenuDown = keyboardControls["menuDown"].get<int>();
		MenuSettings::MenuBack = keyboardControls["menuBack"].get<int>();
		MenuSettings::MenuAdjustValueDown = keyboardControls["menuAdjustValueDown"].get<int>();
		MenuSettings::MenuAdjustValueUp = keyboardControls["menuAdjustValueUp"].get<int>();
		MenuSettings::MenuEditModeEnter = keyboardControls["menuEditModeEnter"].get<int>();
		MenuSettings::MenuEditModeExit = keyboardControls["menuEditModeExit"].get<int>();
		MenuSettings::MenuEditModeExitAndSave = keyboardControls["menuEditModeExitAndSave"].get<int>();
		MenuSettings::MenuEditModeMoveOption = keyboardControls["menuEditModeMoveOption"].get<int>();
		MenuSettings::MenuEditModeAddOption = keyboardControls["menuEditModeAddOption"].get<int>();
		MenuSettings::MenuEditModeEditOption = keyboardControls["menuEditModeEditOption"].get<int>();
		MenuSettings::MenuEditModeDeleteOption = keyboardControls["menuEditModeDeleteOption"].get<int>();
		MenuSettings::BindBoost = keyboardControls["bindBoost"].get<int>();
		MenuSettings::BoatFlyModeAccelerate = keyboardControls["boatFlyModeAccelerate"].get<int>();
		MenuSettings::BoatFlyModeDecelerate = keyboardControls["boatFlyModeDecelerate"].get<int>();
		MenuSettings::BoatFlyModeFlyUp = keyboardControls["boatFlyModeFlyUp"].get<int>();
		MenuSettings::BoatFlyModeUp = keyboardControls["boatFlyModeUp"].get<int>();
		MenuSettings::BoatFlyModeDown = keyboardControls["boatFlyModeDown"].get<int>();
		MenuSettings::BoatFlyModeLeft = keyboardControls["boatFlyModeLeft"].get<int>();
		MenuSettings::BoatFlyModeRight = keyboardControls["boatFlyModeRight"].get<int>();
		MenuSettings::BoatFlyModeYawLeft = keyboardControls["boatFlyModeYawLeft"].get<int>();
		MenuSettings::BoatFlyModeYawRight = keyboardControls["boatFlyModeYawRight"].get<int>();
		
		// Controller controls
		json controllerControls = settingsData["controls"]["controller"];
		MenuSettings::ControllerMenuOpen = String::Hash(controllerControls["menuOpen"].get<string>());
		MenuSettings::ControllerMenuOpenModifier = String::Hash(controllerControls["menuOpenModifier"].get<string>());
		MenuSettings::ControllerMenuOptionPress = String::Hash(controllerControls["menuOptionPress"].get<string>());
		MenuSettings::ControllerMenuUp = String::Hash(controllerControls["menuUp"].get<string>());
		MenuSettings::ControllerMenuDown = String::Hash(controllerControls["menuDown"].get<string>());
		MenuSettings::ControllerMenuBack = String::Hash(controllerControls["menuBack"].get<string>());
		MenuSettings::ControllerMenuAdjustValueDown = String::Hash(controllerControls["menuAdjustValueDown"].get<string>());
		MenuSettings::ControllerMenuAdjustValueUp = String::Hash(controllerControls["menuAdjustValueUp"].get<string>());
		MenuSettings::ControllerMenuEditModeEnter = String::Hash(controllerControls["menuEditModeEnter"].get<string>());
		MenuSettings::ControllerMenuEditModeExit = String::Hash(controllerControls["menuEditModeExit"].get<string>());
		MenuSettings::ControllerMenuEditModeExitAndSave = String::Hash(controllerControls["menuEditModeExitAndSave"].get<string>());
		MenuSettings::ControllerMenuEditModeMoveOption = String::Hash(controllerControls["menuEditModeMoveOption"].get<string>());
		MenuSettings::ControllerMenuEditModeAddOption = String::Hash(controllerControls["menuEditModeAddOption"].get<string>());
		MenuSettings::ControllerMenuEditModeEditOption = String::Hash(controllerControls["menuEditModeEditOption"].get<string>());
		MenuSettings::ControllerMenuEditModeDeleteOption = String::Hash(controllerControls["menuEditModeDeleteOption"].get<string>());
		MenuSettings::ControllerBindBoost = String::Hash(controllerControls["bindBoost"].get<string>());
		MenuSettings::ControllerBoatFlyModeAccelerate = String::Hash(controllerControls["boatFlyModeAccelerate"].get<string>());
		MenuSettings::ControllerBoatFlyModeDecelerate = String::Hash(controllerControls["boatFlyModeDecelerate"].get<string>());
		MenuSettings::ControllerBoatFlyModeFlyUp = String::Hash(controllerControls["boatFlyModeFlyUp"].get<string>());
		MenuSettings::ControllerBoatFlyModeYawLeft = String::Hash(controllerControls["boatFlyModeYawLeft"].get<string>());
		MenuSettings::ControllerBoatFlyModeYawRight = String::Hash(controllerControls["boatFlyModeYawRight"].get<string>());
	}
	catch (const std::exception & e) {
		// Game::PrintSubtitle("Error: Failed to parse settings.json");
		Game::PrintSubtitle(e.what());
	}
}

std::vector<Hotkey> JSONDataManager::GetHotkeysAsVector()
{
	try {
		json hotkeys = LoadJSONFile("CustomizableTrainer\\hotkeys.json");
		std::vector<Hotkey> hotkeyVec;

		for each (auto hotkeyData in hotkeys) {
			MenuOptionType optionType;
			if (hotkeyData["type"].get<string>() == "sub") optionType = MenuOptionType::Sub;
			else if (hotkeyData["type"].get<string>() == "action") optionType = MenuOptionType::Action;
			else if (hotkeyData["type"].get<string>() == "toggle") optionType = MenuOptionType::Toggle;
			else if (hotkeyData["type"].get<string>() == "number") optionType = MenuOptionType::Number;

			hotkeyVec.push_back({
				hotkeyData["name"].get<string>(),
				hotkeyData["keyboardKey"].get<int>(),
				hotkeyData["controllerControl"].get<Hash>(),
				hotkeyData["controllerControlModifier"].get<Hash>(),
				optionType,
				hotkeyData["key"].get<string>(),
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

// MARK: Save data

void JSONDataManager::SaveLayoutFromMap(std::map<string, SubmenuData> submenuDataMap)
{
	json submenuDataArray = json::array();
	int index = 0;
	for (auto const& [key, submenuData] : submenuDataMap) {
		submenuDataArray.push_back({
			{"title", submenuData.title},
			{"key", key},
			{"options", json::array()}
		});

		for each (MenuOption option in submenuData.options) {
			string typeStringValue;
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
	layoutData = submenuDataArray;
	WriteFile("CustomizableTrainer\\layout.json", submenuDataArray.dump());
}

void JSONDataManager::SaveMenuSettings(bool showSavedMessage)
{
	try {
		settingsData = json::object({
			// General
			{ "playUiSounds", MenuSettings::playUiSounds },

			// Colors
			{ "titleBarBorderColor", MenuSettings::jsonFromColor(MenuSettings::titleBarBorderColor) },
			{ "titleBarTextColor", MenuSettings::jsonFromColor(MenuSettings::titleBarTextColor) },
			{ "optionBgColor", MenuSettings::jsonFromColor(MenuSettings::optionBgColor) },
			{ "optionTextColor", MenuSettings::jsonFromColor(MenuSettings::optionTextColor) },
			{ "optionSelectedBgColor", MenuSettings::jsonFromColor(MenuSettings::optionSelectedBgColor) },
			{ "optionSelectedOutlineColor", MenuSettings::jsonFromColor(MenuSettings::optionSelectedOutlineColor) },
			{ "optionSelectedTextColor", MenuSettings::jsonFromColor(MenuSettings::optionSelectedTextColor) },
			{ "optionToggleColor", MenuSettings::jsonFromColor(MenuSettings::optionToggleColor) },
			{ "optionToggleToggledColor", MenuSettings::jsonFromColor(MenuSettings::optionToggleToggledColor) },
			{ "optionNumberColor", MenuSettings::jsonFromColor(MenuSettings::optionNumberColor) },
			{ "menuScrollLineColor", MenuSettings::jsonFromColor(MenuSettings::menuScrollLineColor) },
			{ "menuBgColor", MenuSettings::jsonFromColor(MenuSettings::menuBgColor) },
			{ "menuStatusTextColor", MenuSettings::jsonFromColor(MenuSettings::menuStatusTextColor) },
			{ "menuOptionCountColor", MenuSettings::jsonFromColor(MenuSettings::menuOptionCountColor) },

			// Controls
			{"controls", {
				{"keyboard", {
					{"menuOpen", MenuSettings::MenuOpen},
					{"menuOptionPress", MenuSettings::MenuOptionPress},
					{"menuUp", MenuSettings::MenuUp},
					{"menuDown", MenuSettings::MenuDown},
					{"menuBack", MenuSettings::MenuBack},
					{"menuAdjustValueDown", MenuSettings::MenuAdjustValueDown},
					{"menuAdjustValueUp", MenuSettings::MenuAdjustValueUp},
					{"menuEditModeEnter", MenuSettings::MenuEditModeEnter},
					{"menuEditModeExit", MenuSettings::MenuEditModeExit},
					{"menuEditModeExitAndSave", MenuSettings::MenuEditModeExitAndSave},
					{"menuEditModeMoveOption", MenuSettings::MenuEditModeMoveOption},
					{"menuEditModeAddOption", MenuSettings::MenuEditModeAddOption},
					{"menuEditModeEditOption", MenuSettings::MenuEditModeEditOption},
					{"menuEditModeDeleteOption", MenuSettings::MenuEditModeDeleteOption},
					{"bindBoost", MenuSettings::BindBoost},
					{"boatFlyModeAccelerate", MenuSettings::BoatFlyModeAccelerate},
					{"boatFlyModeDecelerate", MenuSettings::BoatFlyModeDecelerate},
					{"boatFlyModeFlyUp", MenuSettings::BoatFlyModeFlyUp},
					{"boatFlyModeUp", MenuSettings::BoatFlyModeUp},
					{"boatFlyModeDown", MenuSettings::BoatFlyModeDown},
					{"boatFlyModeLeft", MenuSettings::BoatFlyModeLeft},
					{"boatFlyModeRight", MenuSettings::BoatFlyModeRight},
					{"boatFlyModeYawLeft", MenuSettings::BoatFlyModeYawLeft},
					{"boatFlyModeYawRight", MenuSettings::BoatFlyModeYawRight}
				}},
				{"controller", {
					{ "menuOpen", Controls::ControlStringFromHash(MenuSettings::ControllerMenuOpen) },
					{ "menuOpenModifier", Controls::ControlStringFromHash(MenuSettings::ControllerMenuOpenModifier) },
					{ "menuOptionPress", Controls::ControlStringFromHash(MenuSettings::ControllerMenuOptionPress) },
					{ "menuUp", Controls::ControlStringFromHash(MenuSettings::ControllerMenuUp) },
					{ "menuDown", Controls::ControlStringFromHash(MenuSettings::ControllerMenuDown) },
					{ "menuBack", Controls::ControlStringFromHash(MenuSettings::ControllerMenuBack) },
					{ "menuAdjustValueDown", Controls::ControlStringFromHash(MenuSettings::ControllerMenuAdjustValueDown) },
					{ "menuAdjustValueUp", Controls::ControlStringFromHash(MenuSettings::ControllerMenuAdjustValueUp) },
					{ "menuEditModeEnter", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeEnter) },
					{ "menuEditModeExit", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeExit) },
					{ "menuEditModeExitAndSave", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeExitAndSave) },
					{ "menuEditModeMoveOption", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeMoveOption) },
					{ "menuEditModeAddOption", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeAddOption) },
					{ "menuEditModeEditOption", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeEditOption) },
					{ "menuEditModeDeleteOption", Controls::ControlStringFromHash(MenuSettings::ControllerMenuEditModeDeleteOption) },
					{ "bindBoost", Controls::ControlStringFromHash(MenuSettings::ControllerBindBoost) },
					{ "boatFlyModeAccelerate", Controls::ControlStringFromHash(MenuSettings::ControllerBoatFlyModeAccelerate) },
					{ "boatFlyModeDecelerate", Controls::ControlStringFromHash(MenuSettings::ControllerBoatFlyModeDecelerate) },
					{ "boatFlyModeFlyUp", Controls::ControlStringFromHash(MenuSettings::ControllerBoatFlyModeFlyUp) },
					{ "boatFlyModeYawRight", Controls::ControlStringFromHash(MenuSettings::ControllerBoatFlyModeYawRight) },
					{ "boatFlyModeYawLeft", Controls::ControlStringFromHash(MenuSettings::ControllerBoatFlyModeYawLeft) }
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

void JSONDataManager::SaveHotkeys(std::vector<Hotkey> hotkeys)
{
	try {
		json hotkeyData = json::array();
		for each (auto hotkey in hotkeys) {
			string typeStringValue;
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

// MARK: Load files

void JSONDataManager::Load()
{
	try {
		layoutData = LoadJSONFile("CustomizableTrainer\\layout.json");
	}
	catch (const std::exception & e) {
		Game::PrintSubtitle("Error: Failed to parse layout.json");
	}
	try {
		settingsData = LoadJSONFile("CustomizableTrainer\\settings.json");
	}
	catch (const std::exception & e) {
		Game::PrintSubtitle("Error: Failed to parse settings.json");
	}
}

// MARK: Core methods

json JSONDataManager::LoadJSONFile(string path)
{
	string jsonFileContent = ReadFile(path);
	if (jsonFileContent == "") throw std::exception("File empty");
	return json::parse(jsonFileContent);
}

string JSONDataManager::ReadFile(string path)
{
	if (!std::filesystem::exists(path)) throw std::exception("File doesn't exist");

	std::ifstream file(path);
	std::string fileContent((std::istreambuf_iterator<char>(file)),
	std::istreambuf_iterator<char>());

	return fileContent;
}

void JSONDataManager::WriteFile(string path, string content)
{
	std::ofstream file(path);
	file << content;
	file.close();
}
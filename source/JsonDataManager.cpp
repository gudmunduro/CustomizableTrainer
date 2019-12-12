#include "pch.h"
#include "JsonDataManager.h"
#include "Routine.h"
#include "MenuSettings.h"
#include "ControlManager.h"

JSONDataManager::JSONDataManager()
{

}

// MARK: Process data
std::map<string, SubmenuData> JSONDataManager::GetLayoutAsMap()
{
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

void JSONDataManager::UpdateMenuSettings()
{
	try {
		// Colors
		MenuSettings::titleBarBgColor = MenuSettings::colorFromJSON(settingsData["titleBarBgColor"]);
		MenuSettings::titleBarTextColor = MenuSettings::colorFromJSON(settingsData["titleBarTextColor"]);
		MenuSettings::optionBgColor = MenuSettings::colorFromJSON(settingsData["optionBgColor"]);
		MenuSettings::optionTextColor = MenuSettings::colorFromJSON(settingsData["optionTextColor"]);
		MenuSettings::optionSelectedBgColor = MenuSettings::colorFromJSON(settingsData["optionSelectedBgColor"]);
		MenuSettings::optionSelectedTextColor = MenuSettings::colorFromJSON(settingsData["optionSelectedTextColor"]);
		MenuSettings::optionToggleColor = MenuSettings::colorFromJSON(settingsData["optionToggleColor"]);
		MenuSettings::optionToggleToggledColor = MenuSettings::colorFromJSON(settingsData["optionToggleToggledColor"]);
		MenuSettings::optionNumberColor = MenuSettings::colorFromJSON(settingsData["optionNumberColor"]);

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
		MenuSettings::MenuEditModeDeleteOption = keyboardControls["menuEditModeDeleteOption"].get<int>();
		MenuSettings::BindBoost = keyboardControls["bindBoost"].get<int>();
		
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
		MenuSettings::ControllerMenuEditModeDeleteOption = String::Hash(controllerControls["menuEditModeDeleteOption"].get<string>());
		MenuSettings::ControllerBindBoost = String::Hash(controllerControls["bindBoost"].get<string>());
	}
	catch (const std::exception & e) {
		Routine::StartDrawBottomMessage("Error: Failed to parse settings.json");
	}
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
			// Colors
			{ "titleBarBgColor", MenuSettings::jsonFromColor(MenuSettings::titleBarBgColor) },
			{ "titleBarTextColor", MenuSettings::jsonFromColor(MenuSettings::titleBarTextColor) },
			{ "optionBgColor", MenuSettings::jsonFromColor(MenuSettings::optionBgColor) },
			{ "optionTextColor", MenuSettings::jsonFromColor(MenuSettings::optionTextColor) },
			{ "optionSelectedBgColor", MenuSettings::jsonFromColor(MenuSettings::optionSelectedBgColor) },
			{ "optionSelectedTextColor", MenuSettings::jsonFromColor(MenuSettings::optionSelectedTextColor) },
			{ "optionToggleColor", MenuSettings::jsonFromColor(MenuSettings::optionToggleColor) },
			{ "optionToggleToggledColor", MenuSettings::jsonFromColor(MenuSettings::optionToggleToggledColor) },
			{ "optionNumberColor", MenuSettings::jsonFromColor(MenuSettings::optionNumberColor) },

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
					{"menuEditModeDeleteOption", MenuSettings::MenuEditModeDeleteOption},
					{"bindBoost", MenuSettings::BindBoost}
				}},
				{"controller", {
					{ "menuOpen", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuOpen) },
					{ "menuOpenModifier", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuOpenModifier) },
					{ "menuOptionPress", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuOptionPress) },
					{ "menuUp", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuUp) },
					{ "menuDown", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuDown) },
					{ "menuBack", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuBack) },
					{ "menuAdjustValueDown", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuAdjustValueDown) },
					{ "menuAdjustValueUp", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuAdjustValueUp) },
					{ "menuEditModeEnter", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeEnter) },
					{ "menuEditModeExit", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeExit) },
					{ "menuEditModeExitAndSave", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeExitAndSave) },
					{ "menuEditModeMoveOption", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeMoveOption) },
					{ "menuEditModeAddOption", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeAddOption) },
					{ "menuEditModeDeleteOption", ControlManager::ControlStringFromHash(MenuSettings::ControllerMenuEditModeDeleteOption) },
					{ "bindBoost", ControlManager::ControlStringFromHash(MenuSettings::ControllerBindBoost) }
				}}
			}}
		});

		WriteFile("CustomizableTrainer\\settings.json", settingsData.dump());

		if (showSavedMessage)
			Routine::StartDrawBottomMessage("Saved");
	}
	catch (std::exception & e) {
		Routine::StartDrawBottomMessage("Failed to save settings");
	}
}

// MARK: Load files
void JSONDataManager::Load()
{
	try {
		layoutData = LoadJSONFile("CustomizableTrainer\\layout.json");
	}
	catch (const std::exception & e) {
		Routine::StartDrawBottomMessage("Error: Failed to parse layout.json");
	}
	try {
		settingsData = LoadJSONFile("CustomizableTrainer\\settings.json");
	}
	catch (const std::exception & e) {
		Routine::StartDrawBottomMessage("Error: Failed to parse settings.json");
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
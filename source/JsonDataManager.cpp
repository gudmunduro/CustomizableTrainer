#include "pch.h"
#include "JsonDataManager.h"
#include "Routine.h"
#include "MenuSettings.h"

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
		MenuSettings::titleBarBgColor = MenuSettings::colorFromJSON(settingsData["titleBarBgColor"]);
		MenuSettings::titleBarTextColor = MenuSettings::colorFromJSON(settingsData["titleBarTextColor"]);
		MenuSettings::optionBgColor = MenuSettings::colorFromJSON(settingsData["optionBgColor"]);
		MenuSettings::optionTextColor = MenuSettings::colorFromJSON(settingsData["optionTextColor"]);
		MenuSettings::optionSelectedBgColor = MenuSettings::colorFromJSON(settingsData["optionSelectedBgColor"]);
		MenuSettings::optionSelectedTextColor = MenuSettings::colorFromJSON(settingsData["optionSelectedTextColor"]);
		MenuSettings::optionToggleColor = MenuSettings::colorFromJSON(settingsData["optionToggleColor"]);
		MenuSettings::optionToggleToggledColor = MenuSettings::colorFromJSON(settingsData["optionToggleToggledColor"]);
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
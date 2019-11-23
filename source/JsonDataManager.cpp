#include "pch.h"
#include "JsonDataManager.h"

JSONDataManager::JSONDataManager()
{

}

void JSONDataManager::Load()
{
	LoadLayout();
}

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

void JSONDataManager::LoadLayout()
{
	string jsonFileContent = ReadFile("menuLayout.json");
	if (jsonFileContent == "") return;
	layoutData = json::parse(jsonFileContent);
}

string JSONDataManager::ReadFile(string path)
{
	if (!std::filesystem::exists(path)) return "";

	std::ifstream file(path);
	std::string fileContent((std::istreambuf_iterator<char>(file)),
	std::istreambuf_iterator<char>());

	return fileContent;
}
#pragma once
#include "pch.h"


class JSONDataManager {
public:
	JSONDataManager();
	void Load();
	std::map<string, SubmenuData> GetLayoutAsMap();
	void UpdateMenuSettings();
private:
	json LoadJSONFile(string path);
	string ReadFile(string path);
	json layoutData;
	json settingsData;
};
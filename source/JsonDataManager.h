#pragma once
#include "pch.h"
#include "json.hpp"

using json = nlohmann::json;


class JSONDataManager {
public:
	JSONDataManager();
	void Load();
	std::map<string, SubmenuData> GetLayoutAsMap();
private:
	void LoadLayout();
	string ReadFile(string path);
	json layoutData;
};
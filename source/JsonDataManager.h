#pragma once
#include "pch.h"


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
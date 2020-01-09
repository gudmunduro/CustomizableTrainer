#pragma once
#include "pch.h"


namespace JSONData {
	std::map<string, SubmenuData> GetLayoutAsMap();
	void UpdateOptionStates();
	void UpdateMenuSettings();
	std::vector<Hotkey> GetHotkeysAsVector();
	std::vector<std::pair<string, std::vector<WeaponData>>> GetWeapons();
	void SaveLayoutFromMap(std::map<string, SubmenuData> submenuDataMap);
	void SaveMenuSettings(bool showSavedMessage = false);
	void SaveHotkeys(std::vector<Hotkey> hotkeys);
	void SaveOptionStates();
};
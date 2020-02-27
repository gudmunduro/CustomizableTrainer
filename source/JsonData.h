/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

namespace JSONData {
	std::map<std::string, SubmenuData> GetLayoutAsMap();
	void UpdateOptionStates();
	void UpdateMenuSettings();
	std::vector<Hotkey> GetHotkeysAsVector();
	std::vector<std::pair<std::string, std::vector<WeaponData>>> GetWeapons();
	std::vector<std::pair<std::string, std::vector<VehicleData>>> GetVehicles();
	std::map<std::string, std::vector<std::pair<std::string, std::vector<PedData>>>> GetPeds();
	void SaveLayoutFromMap(std::map<std::string, SubmenuData> submenuDataMap);
	void SaveMenuSettings(bool showSavedMessage = false);
	void SaveHotkeys(std::vector<Hotkey> hotkeys);
	void SaveOptionStates();
};
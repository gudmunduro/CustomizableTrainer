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
#include "Submenu.h"

class Submenu;

class MenuController
{
public:
	MenuController();
    void Tick();

	void RegisterSubmenuData(std::string key, SubmenuData submenuData);
	void AddSubmenuToStack(Submenu* submenu);
	void GoToLastSub();
	void RespondToControls();

	bool SubmenuExistsForKey(std::string key);

	void SetSubmenuDataForKey(std::string key, SubmenuData submenuData);
	void SetSubmenuWithKey(std::string key);
	void UpdateSubmenuData(std::string key, SubmenuData submenuData);

	SubmenuData GetSubmenuDataForKey(std::string key);
	Submenu* GetSubmenuForKey(std::string key);
	std::vector<std::string> SubmenuKeys();
	std::optional<Submenu*> GetBuiltinSubmenuForKey(std::string key);

	Vector2 position;
	std::vector<Submenu*> submenuStack;
	bool shouldDrawMenu;
private:
	std::map<std::string, SubmenuData> submenuDataMap;
};

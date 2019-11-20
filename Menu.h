#pragma once

#include "pch.h"
#include "Submenu.h"

class Menu
{
public:
	Menu();
    void Tick();
	// MARK: 
	void RegisterSubmenuData(string key, SubmenuData submenuData);
	void AddSubmenuToStack(Submenu submenuData);
	// MARK:
	bool DoesSubmenuExistForKey(string key);
	// MARK: Getters
	SubmenuData GetSubmenuDataForKey(string key);
	Submenu GetSubmenuForKey(string key);
private:
	std::function<void(string key)> setSubmenu;
	Vector2 position;
	std::vector<Submenu> submenuStack;
	std::map<string, SubmenuData> submenuDataMap;
	bool shouldDrawMenu;
};

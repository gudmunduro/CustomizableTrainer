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
	void GoToLastSub();
	void RespondToControls();
	// MARK:
	bool DoesSubmenuExistForKey(string key);
	// MARK: Getters
	void SetSubmenuDataForKey(string key, SubmenuData submenuData);
	// MARK: Getters
	SubmenuData GetSubmenuDataForKey(string key);
	Submenu GetSubmenuForKey(string key);
private:
	std::function<void(string key)> setSubmenu;
	std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData;
	Vector2 position;
	std::vector<Submenu> submenuStack;
	std::map<string, SubmenuData> submenuDataMap;
	bool shouldDrawMenu;
};

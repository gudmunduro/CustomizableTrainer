#pragma once

#include "pch.h"
#include "Submenu.h"

class Menu
{
public:
	Menu();
    void Tick();

	void RegisterSubmenuData(string key, SubmenuData submenuData);
	void AddSubmenuToStack(Submenu *submenu);
	void GoToLastSub(string messageKey, std::any messageValue);
	void RespondToControls();

	bool DoesSubmenuExistForKey(string key);
	bool DoesFixedSubmenuExistForKey(string key);

	void SetSubmenuDataForKey(string key, SubmenuData submenuData);
	void AddSubmenuData(string key, SubmenuData submenuData);

	SubmenuData GetSubmenuDataForKey(string key);
	Submenu* GetSubmenuForKey(string key);
	std::vector<string> GetSubmenuKeys();
	Submenu* GetFixedSubmenuForKey(string key);
private:
	std::function<void(string key)> setSubmenu;
	std::function<void(string key, SubmenuData submenuData)> updateSubmenuData;
	std::function<void(string messageKey, std::any messageValue)> goToLastSub;
	Vector2 position;
	std::vector<Submenu*> submenuStack;
	std::map<string, SubmenuData> submenuDataMap;
	bool shouldDrawMenu;
};

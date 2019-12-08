#pragma once

#include "pch.h"
#include "Submenu.h"

class Submenu;

class MenuController
{
public:
	MenuController();
    void Tick();

	void RegisterSubmenuData(string key, SubmenuData submenuData);
	void AddSubmenuToStack(Submenu* submenu);
	void GoToLastSub();
	void RespondToControls();

	bool SubmenuExistsForKey(string key);
	bool FixedSubmenuExistsForKey(string key);

	void SetSubmenuDataForKey(string key, SubmenuData submenuData);
	void SetSubmenuWithKey(string key);
	void UpdateSubmenuData(string key, SubmenuData submenuData);

	SubmenuData SubmenuDataForKey(string key);
	Submenu* SubmenuForKey(string key);
	std::vector<string> SubmenuKeys();
	Submenu* FixedSubmenuForKey(string key);

	Vector2 position;
	std::vector<Submenu*> submenuStack;
	bool shouldDrawMenu;
private:
	std::map<string, SubmenuData> submenuDataMap;
};

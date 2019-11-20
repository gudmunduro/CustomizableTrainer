#include "pch.h"
#include "Menu.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
	setSubmenu = [this](string key) {
		if (DoesSubmenuExistForKey(key)) {
			Submenu submenu = GetSubmenuForKey(key);
			AddSubmenuToStack(submenu);
		}
	};
	// Test data
	SubmenuData testMenuData = {
		"Test menu",
		{
			{ MenuOptionType::Action, "Test option 1", "key" },
			{ MenuOptionType::Action, "Test option 2", "key" },
			{ MenuOptionType::Action, "Test option 3", "key" }
		}
	};
	RegisterSubmenuData("testmenu", testMenuData);
	setSubmenu("testmenu");
}

void Menu::Tick()
{
	if (submenuStack.size() > 0) {
		submenuStack.back().Draw();
	}
}

// MARK:
void Menu::RegisterSubmenuData(string key, SubmenuData submenuData)
{
	submenuDataMap[key] = submenuData;
}
void Menu::AddSubmenuToStack(Submenu submenu)
{
	submenuStack.push_back(submenu);
}

// MARK:
bool Menu::DoesSubmenuExistForKey(string key)
{
	return submenuDataMap.count(key) > 0;
}

// MARK: Getters
SubmenuData Menu::GetSubmenuDataForKey(string key) 
{
	return submenuDataMap[key];
}
Submenu Menu::GetSubmenuForKey(string submenuKey)
{
	Submenu submenu(GetSubmenuDataForKey(submenuKey), position, setSubmenu);
	return submenu;
}

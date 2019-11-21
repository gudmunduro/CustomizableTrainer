#include "pch.h"
#include "Menu.h"
#include "ControlManager.h"
#include "JsonDataManager.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
	shouldDrawMenu = false;
	setSubmenu = [this](string key) {
		if (DoesSubmenuExistForKey(key)) {
			Submenu submenu = GetSubmenuForKey(key);
			AddSubmenuToStack(submenu);
		}
	};
	// Test data
	/*SubmenuData testMenuData = {
		"Test menu",
		"testmenu",
		{
			{ MenuOptionType::Sub, "Open sub 1", "testmenu2" },
			{ MenuOptionType::Action, "Test option 2", "key" },
			{ MenuOptionType::Action, "Test option 3", "key" }
		}
	};
	SubmenuData testMenuData2 = {
		"Test menu 2",
		"testmenu2",
		{
			{ MenuOptionType::Action, "Test option 1", "key" },
			{ MenuOptionType::Action, "Test option 2", "key" },
			{ MenuOptionType::Action, "Test option 3", "key" }
		}
	};
	RegisterSubmenuData("testmenu", testMenuData);
	RegisterSubmenuData("testmenu2", testMenuData2);*/
	JSONDataManager manager;
	manager.Load();
	//submenuDataMap = manager.GetLayoutAsMap();
}

void Menu::Tick()
{
	RespondToControls();
	if (shouldDrawMenu && submenuStack.size() > 0) {
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
void Menu::GoToLastSub()
{
	submenuStack.pop_back();
	if (submenuStack.size() == 0) {
		shouldDrawMenu = false;
	}
}
void Menu::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;
		if (submenuStack.empty()) {
			setSubmenu("testmenu");
		}
	}
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuGoBack)) {
		GoToLastSub();
	}
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
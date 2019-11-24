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
	// Load json data
	JSONDataManager manager;
	manager.Load();
	submenuDataMap = manager.GetLayoutAsMap();
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
	if (submenuStack.size() > 0) submenuStack.pop_back();
	if (submenuStack.size() == 0) shouldDrawMenu = false;
}
void Menu::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		if (submenuStack.size() == 0) {
			setSubmenu("default");
		}
		ControlManager::CanceMenuControlslForTick();
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
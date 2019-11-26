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
	updateSubmenuData = [this](string key, SubmenuData submenuData) {
		if (DoesSubmenuExistForKey(key)) {
			SetSubmenuDataForKey(key, submenuData);
		}
	};
	// Load json data
	JSONDataManager manager;
	manager.Load();
	manager.UpdateMenuSettings();
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
			setSubmenu("required_sub_default");
		}
		ControlManager::CanceMenuControlslForThisFrame();
	}
	if (shouldDrawMenu && submenuStack.size() > 0) {
		if (!submenuStack.back().GetEditModeActive() && ControlManager::IsMenuControlPressed(MenuControl::MenuGoBack)) {
			GoToLastSub();
		}
	}
}

// MARK:
bool Menu::DoesSubmenuExistForKey(string key)
{
	return submenuDataMap.count(key) > 0;
}

// MARK: Setters
void Menu::SetSubmenuDataForKey(string key, SubmenuData submenuData) {
	submenuDataMap[key] = submenuData;
}

// MARK: Getters
SubmenuData Menu::GetSubmenuDataForKey(string key) 
{
	return submenuDataMap[key];
}
Submenu Menu::GetSubmenuForKey(string submenuKey)
{
	Submenu submenu(GetSubmenuDataForKey(submenuKey), position, setSubmenu, updateSubmenuData);
	return submenu;
}
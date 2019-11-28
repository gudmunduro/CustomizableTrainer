#include "pch.h"
#include "Menu.h"
#include "Routine.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "DynamicSubmenu.h"
#include "AddOptionSub.h"
#include "AddOptionSetTypeSub.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
	shouldDrawMenu = false;
	// std::function functions to be passed to the submenus
	setSubmenu = [this](string key) {
		if (DoesSubmenuExistForKey(key)) {
			Submenu *submenu = GetSubmenuForKey(key);
			AddSubmenuToStack(submenu);
		}
		else if (DoesFixedSubmenuExistForKey(key)) {
			Submenu* submenu = GetFixedSubmenuForKey(key);
			AddSubmenuToStack(submenu);
		}
	};
	updateSubmenuData = [this](string key, SubmenuData submenuData) {
		if (DoesSubmenuExistForKey(key)) {
			SetSubmenuDataForKey(key, submenuData);
		}
		JSONDataManager manager;
		manager.SaveLayoutFromMap(submenuDataMap);
	};
	goToLastSub = [this](string messageKey, std::any messageValue) {
		GoToLastSub(messageKey, messageValue);
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
		submenuStack.back()->Draw();
	}
}

// MARK: Manange submenu stack
void Menu::RegisterSubmenuData(string key, SubmenuData submenuData)
{
	submenuDataMap[key] = submenuData;
}
void Menu::AddSubmenuToStack(Submenu *submenu)
{
	submenuStack.push_back(submenu);
}
void Menu::GoToLastSub(string messageKey = "", std::any messageValue = 0) // Message to send to the sub you are going back to
{
	if (submenuStack.size() > 0) { 
		Submenu *current = submenuStack.back();
		submenuStack.pop_back();
		if (messageKey != "") {
			submenuStack.back()->OnMessageReceive(messageKey, messageValue);
		}
	}
	if (submenuStack.size() == 0) shouldDrawMenu = false;
}

// MARK: Controls
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
		if (submenuStack.back()->IsBackspaceAllowed() && ControlManager::IsMenuControlPressed(MenuControl::MenuGoBack)) {
			GoToLastSub();
		}
	}
}

// MARK: Booleans
bool Menu::DoesSubmenuExistForKey(string key)
{
	return submenuDataMap.count(key) > 0;
}

bool Menu::DoesFixedSubmenuExistForKey(string key)
{
	return GetFixedSubmenuForKey(key) != nullptr;
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
Submenu *Menu::GetSubmenuForKey(string submenuKey)
{
	return new DynamicSubmenu(GetSubmenuDataForKey(submenuKey), position, setSubmenu, updateSubmenuData, goToLastSub);
}

Submenu* Menu::GetFixedSubmenuForKey(string key)
{
	if (key == "builtin_sub_addOption") {
		return new AddOptionSub(position, setSubmenu, goToLastSub);
	}
	else if (key == "builtin_sub_addOptionSetTypeSub") {
		return new AddOptionSetTypeSub(position, setSubmenu, goToLastSub);
	}
	return nullptr;
}

#include "pch.h"
#include "Menu.h"
#include "Routine.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "DynamicSubmenu.h"
#include "AddOptionSub.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"
#include "ActionManager.h"
#include "ToggleManager.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
	shouldDrawMenu = false;
	// std::function wrappers to be passed to submenus
	setSubmenu = [this](string key) { SetSubmenu(key); };
	setFixedSubmenu = [this](Submenu* submenu) { SetFixedSubmenu(submenu); };
	updateSubmenuData = [this](string key, SubmenuData submenuData) { UpdateSubmenuData(key, submenuData); };
	goToLastSub = [this](string messageKey, std::any messageValue) { GoToLastSub(messageKey, messageValue); };

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
void Menu::AddSubmenuToStack(Submenu* submenu)
{
	submenuStack.push_back(submenu);
}
void Menu::GoToLastSub(string messageKey = "", std::any messageValue = 0) // Message to send to the sub you are going back to
{
	if (submenuStack.size() > 0) { 
		Submenu* current = submenuStack.back();
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
	ControlManager::EnableMenuOpenControls();
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		if (submenuStack.size() == 0) {
			setSubmenu("required_sub_default");
		}
		ControlManager::CanceMenuControlslForThisFrame();
	}
	if (shouldDrawMenu && submenuStack.size() > 0) {
		ControlManager::EnableMenuControls();
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

void Menu::SetSubmenu(string key)
{
	if (DoesSubmenuExistForKey(key)) {
		Submenu* submenu = GetSubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else if (DoesFixedSubmenuExistForKey(key)) {
		Submenu* submenu = GetFixedSubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else {
		Routine::StartDrawBottomMessage("Error: Submenu '" + key + "' does not exist");
	}
}

void Menu::SetFixedSubmenu(Submenu* submenu)
{
	AddSubmenuToStack(submenu);
}

void Menu::UpdateSubmenuData(string key, SubmenuData submenuData)
{
	for each (auto option in submenuData.options) {
		if (option.type == MenuOptionType::Sub && !DoesSubmenuExistForKey(option.key) && !DoesFixedSubmenuExistForKey(option.key)) { // Add submenu if it does not exist
			Routine::StartDrawBottomMessage("Creating submenu");
			SetSubmenuDataForKey(option.key, {
				option.text,
				option.key,
				{}
			});
		}
	}

	if (DoesSubmenuExistForKey(key)) {
		SetSubmenuDataForKey(key, submenuData);
	}
	JSONDataManager manager;
	manager.SaveLayoutFromMap(submenuDataMap);
}

// MARK: Getters
SubmenuData Menu::GetSubmenuDataForKey(string key) 
{
	return submenuDataMap[key];
}
Submenu* Menu::GetSubmenuForKey(string submenuKey)
{
	return new DynamicSubmenu(GetSubmenuDataForKey(submenuKey), position, setSubmenu, setFixedSubmenu, updateSubmenuData, goToLastSub);
}

std::vector<string> Menu::GetSubmenuKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(submenuDataMap), std::end(submenuDataMap), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

Submenu* Menu::GetFixedSubmenuForKey(string key)
{
	if (key == "builtin_sub_addOption") {
		return new AddOptionSub(position, setSubmenu, setFixedSubmenu, goToLastSub);
	}
	else if (key == "builtin_sub_addOptionSetTypeSub") {
		return  new AddOptionSetTypeSub(position, setSubmenu, setFixedSubmenu, goToLastSub);
	}
	else if (key == "builtin_sub_addOptionSetActionKey") {
		return  new AddOptionSetKeySub(position, MenuOptionType::Action, ActionManager::GetKeys(), setSubmenu, setFixedSubmenu, goToLastSub);
	}
	else if (key == "builtin_sub_addOptionSetToggleKey") {
		return  new AddOptionSetKeySub(position, MenuOptionType::Toggle, ToggleManager::GetKeys(), setSubmenu, setFixedSubmenu, goToLastSub);
	}
	else if (key == "builtin_sub_addOptionSetSubKey") {
		return  new AddOptionSetKeySub(position, MenuOptionType::Sub, GetSubmenuKeys(), setSubmenu, setFixedSubmenu, goToLastSub);
	}
	return nullptr;
}

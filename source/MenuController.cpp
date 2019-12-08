#include "pch.h"
#include "MenuController.h"
#include "Routine.h"
#include "ControlManager.h"
#include "JsonDataManager.h"
#include "DynamicSubmenu.h"
#include "AddOptionSub.h"
#include "AddOptionSetTypeSub.h"
#include "AddOptionSetKeySub.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

MenuController::MenuController()
{
	position = { 0.054f, 0.1f };
	shouldDrawMenu = false;

	// Load json data
	JSONDataManager manager;
	manager.Load();
	manager.UpdateMenuSettings();
	submenuDataMap = manager.GetLayoutAsMap();
}

void MenuController::Tick()
{
	RespondToControls();
	if (shouldDrawMenu && submenuStack.size() > 0) {
		submenuStack.back()->Draw();
	}
}

// MARK: Manange submenu stack
void MenuController::RegisterSubmenuData(string key, SubmenuData submenuData)
{
	submenuDataMap[key] = submenuData;
}
void MenuController::AddSubmenuToStack(Submenu* submenu)
{
	submenuStack.push_back(submenu);
}
void MenuController::GoToLastSub()
{
	if (submenuStack.size() > 0) { 
		submenuStack.pop_back();
	}
	if (submenuStack.size() == 0) shouldDrawMenu = false;
}

// MARK: Controls
void MenuController::RespondToControls()
{
	ControlManager::EnableMenuOpenControls();
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuOpen)) {
		shouldDrawMenu = !shouldDrawMenu;

		if (submenuStack.size() == 0) {
			SetSubmenuWithKey("required_sub_default");
		}
		ControlManager::CanceMenuControlslForThisFrame();
	}
}

// MARK: Booleans

bool MenuController::SubmenuExistsForKey(string key)
{
	return submenuDataMap.count(key) > 0;
}

bool MenuController::FixedSubmenuExistsForKey(string key)
{
	return FixedSubmenuForKey(key) != nullptr;
}

// MARK: Setters
void MenuController::SetSubmenuDataForKey(string key, SubmenuData submenuData) {
	submenuDataMap[key] = submenuData;
}

void MenuController::SetSubmenuWithKey(string key)
{
	if (SubmenuExistsForKey(key)) {
		Submenu* submenu = SubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else if (FixedSubmenuExistsForKey(key)) {
		Submenu* submenu = FixedSubmenuForKey(key);
		AddSubmenuToStack(submenu);
	}
	else {
		Routine::StartDrawBottomMessage("Error: Submenu '" + key + "' does not exist");
	}
}

void MenuController::UpdateSubmenuData(string key, SubmenuData submenuData)
{
	for each (auto option in submenuData.options) {
		if (option.type == MenuOptionType::Sub && !SubmenuExistsForKey(option.key) && !FixedSubmenuExistsForKey(option.key)) { // Add submenu if it does not exist
			Routine::StartDrawBottomMessage("Creating submenu");
			SetSubmenuDataForKey(option.key, {
				option.text,
				option.key,
				{}
			});
		}
	}

	if (SubmenuExistsForKey(key)) {
		SetSubmenuDataForKey(key, submenuData);
	}
	JSONDataManager manager;
	manager.SaveLayoutFromMap(submenuDataMap);
}

// MARK: Getters

SubmenuData MenuController::SubmenuDataForKey(string key) 
{
	return submenuDataMap[key];
}
Submenu* MenuController::SubmenuForKey(string submenuKey)
{
	return new DynamicSubmenu(SubmenuDataForKey(submenuKey), this);
}

std::vector<string> MenuController::SubmenuKeys()
{
	std::vector<string> keys;
	std::transform(std::begin(submenuDataMap), std::end(submenuDataMap), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

Submenu* MenuController::FixedSubmenuForKey(string key)
{
	return nullptr;
}

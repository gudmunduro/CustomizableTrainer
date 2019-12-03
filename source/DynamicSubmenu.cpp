#include "pch.h"
#include "DynamicSubmenu.h"
#include "Routine.h"
#include "ControlManager.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

DynamicSubmenu::DynamicSubmenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu,
							std::function<void(Submenu* submenu)> setFixedSubmenu,
							std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData,
							std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: Submenu(menuPos, setSubmenu, setFixedSubmenu, goToLastSub)
{
	this->title = submenuData.title;
	this->key = submenuData.key;
	this->options = submenuData.options;
	this->updateSubmenuData = updateSubmenuData;
	isEditModeActive = false;
	isMoveOptionActive = false;
}

// MARK: Draw
void DynamicSubmenu::Draw()
{
	Submenu::Draw();
	DrawTitle(title);
	/*for each (auto option in options) {
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, option.key, option.params);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, option.key);
			break;
		}
	}*/
	for (int i = scrollPosition; i < ((GetOptionCount() > 8) ? (scrollPosition + 8) : GetOptionCount()); i++) {
		auto option = options[i];
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, option.key, option.params);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, option.key);
			break;
		case MenuOptionType::Number:
			DrawNumber(option.text, option.key);
			break;
		}
	}
}

// MARK: Draw option
void DynamicSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey, !isEditModeActive);
}

void DynamicSubmenu::DrawAction(string text, string actionKey, json actionParams)
{
	Submenu::DrawAction(text, [this, actionKey, actionParams] () {
		if (!isEditModeActive) {
			ActionManager::RunActionForKey(actionKey, actionParams);
		}
	});
}

void DynamicSubmenu::DrawToggle(string text, string toggleKey)
{
	if (!ToggleManager::DoesToggleExistForKey(toggleKey)) return;
	bool isToggled = *ToggleManager::GetToggleForKey(toggleKey);

	Submenu::DrawToggle(text, isToggled, [this, toggleKey] {
		if (!isEditModeActive) {
			ToggleManager::Toggle(toggleKey);
		}
	});
}

void DynamicSubmenu::DrawNumber(string text, string numberKey)
{
	if (!NumberController::DoesNumberExistForKey(numberKey)) return;
	string numberStrValue = NumberController::GetNumberStringValueForKey(numberKey);

	Submenu::DrawNumber(text, numberStrValue, [this, numberKey] {
		// Currently does nothing on press
		}, [this, numberKey](bool direction) {
			if (isEditModeActive) return;
			NumberController::Adjust(numberKey, direction);
	});
}

// MARK: Events
void DynamicSubmenu::OnDraw()
{
	Submenu::OnDraw();
	OnDrawEditMode();
}

void DynamicSubmenu::OnDrawEditMode()
{
}

void DynamicSubmenu::OnSelectionChange(int to, int from)
{
	if (isEditModeActive && isMoveOptionActive) {
		if (to == 0 && from == GetOptionCount() - 1) { // From bottom to top
			options.insert(options.begin(), options[from]);
			options.erase(options.begin() + from + 1);
		}
		else if (to == GetOptionCount() - 1 && from == 0) { // From top to bottom
			options.push_back(options[from]);
			options.erase(options.begin());
		}
		else {
			std::swap(options[from], options[to]);
		}
	}
}

void DynamicSubmenu::OnMessageReceive(string messageKey, std::any messageValue)
{
	if (messageKey == "addOption") {
		MenuOption optionToAdd = std::any_cast<MenuOption>(messageValue);
		options.push_back(optionToAdd);
	}
}

// MARK: Controls
void DynamicSubmenu::RespondToControls()
{
	Submenu::RespondToControls();
	// Edit mode
	if (!isEditModeActive && ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		isEditModeActive = true;
		ControlManager::CanceMenuControlslForThisFrame();
	}
	if (isEditModeActive) {
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeMoveOptionn)) {
			isMoveOptionActive = !isMoveOptionActive;
		}
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeExitAndSave)) {
			isMoveOptionActive = false;
			isEditModeActive = false;
			SubmenuData updatedSubmenuData = { title, key, options };
			updateSubmenuData(key, updatedSubmenuData);
			Routine::StartDrawBottomMessage("Saved");
		}
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeExit)) {
			isMoveOptionActive = false;
			isEditModeActive = false;
		}
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeAddOption)) {
			setSubmenu("builtin_sub_addOption");
			ControlManager::CanceMenuControlslForThisFrame();
		}
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeDeleteOption)) {
			options.erase(options.begin() + selection);
			if (selection > GetOptionCount() - 1) {
				selection--;
			}
		}
	}
}

// MARK: Booleans
bool DynamicSubmenu::IsBackspaceAllowed()
{
	return !isEditModeActive;
}

// MARK: Getters
int DynamicSubmenu::GetOptionCount()
{
	return options.size();
}

bool DynamicSubmenu::GetEditModeActive()
{
	return isEditModeActive;
}
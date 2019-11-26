#include "pch.h"
#include "Submenu.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "ControlManager.h"
#include "MenuSettings.h"
#include "Routine.h"

Submenu::Submenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData) {
	this->menuPos = menuPos;
	this->title = submenuData.title;
	this->key = submenuData.key;
	this->options = submenuData.options;
	this->setSubmenu = setSubmenu;
	this->updateSubmenuData = updateSubmenuData;
	selection = 0;
	drawIndex = 0;
	scrollPosition = 0;
	isEditModeActive = false;
	isMoveOptionActive = false;
}

void Submenu::Draw() {
	drawIndex = 0;
	RespondToControls();
	DrawTitle(title);
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
		}
	}
}

// MARK: Draw title/option
void Submenu::DrawTitle(string text) {
	Game::DrawText(text, { menuPos.x + 0.06f, menuPos.y }, 0.48f, 0.48f, MenuSettings::titleBarTextColor, true);
	auto titleBarBgColor = MenuSettings::titleBarBgColor;
	GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.06, menuPos.y + 0.017, 0.14, 0.055, 0, titleBarBgColor.r, titleBarBgColor.g, titleBarBgColor.b, titleBarBgColor.a, 0);
}

void Submenu::DrawOptionBase(string text, bool selected)
{
	if (selected) {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() - 0.004f }, 0.35f, 0.35f, MenuSettings::optionSelectedTextColor);
		auto optionSelectedBgColor = MenuSettings::optionSelectedBgColor;
		GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.06, CurrentOptionPosY() + 0.01, 0.14, 0.035, 0, optionSelectedBgColor.r, optionSelectedBgColor.g, optionSelectedBgColor.b, optionSelectedBgColor.a, 0);
	}
	else {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() - 0.004f }, 0.35f, 0.35f, MenuSettings::optionTextColor);
		auto optionBgColor = MenuSettings::optionBgColor;
		GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.06, CurrentOptionPosY() + 0.01, 0.14, 0.035, 0, optionBgColor.r, optionBgColor.g, optionBgColor.b, optionBgColor.a, 0);
	}
}

void Submenu::DrawSub(string text, string subKey) {
	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text, true);
		if (!isEditModeActive && ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			setSubmenu(subKey);
		}
	}
	else {
		DrawOptionBase(text, false);
	}

	drawIndex++;
}

void Submenu::DrawAction(string text, string actionKey, json actionParams) {
	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text, true);
		if (!isEditModeActive && ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			ActionManager::RunActionForKey(actionKey, actionParams);
		}
	}
	else {
		DrawOptionBase(text, false);
	}

	drawIndex++;
}

void Submenu::DrawToggle(string text, string toggleKey)
{
	if (!ToggleManager::DoesToggleExistForKey(toggleKey)) return;
	auto toggle = ToggleManager::GetToggleForKey(toggleKey);

	Color toggleColor = (*toggle) ? MenuSettings::optionToggleToggledColor : MenuSettings::optionToggleColor;

	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text, true);
		Game::DrawText((*toggle) ? "On" : "Off", { menuPos.x + 0.105f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, toggleColor);
		if (!isEditModeActive && ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			ToggleManager::Toggle(toggleKey);
		}
	}
	else {
		DrawOptionBase(text, false);
		Game::DrawText((*toggle) ? "On" : "Off", { menuPos.x + 0.105f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, toggleColor);
	}

	drawIndex++;
}

// MARK: Getters
int Submenu::GetOptionCount()
{
	return options.size();
}
bool Submenu::GetEditModeActive()
{
	return isEditModeActive;
}

//
void Submenu::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuDown)) {
		int oldSelection = selection;
		if (selection < GetOptionCount() - 1) selection++;
		else { 
			selection = 0; 
			scrollPosition = 0;
		}

		if (isEditModeActive && isMoveOptionActive) {
			std::swap(options[oldSelection], options[selection]);
		}

		if (selection > scrollPosition + 7) scrollPosition++;
	}
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuUp)) {
		int oldSelection = selection;
		if (selection > 0) selection--;
		else {
			selection = GetOptionCount() - 1;
			scrollPosition = (GetOptionCount() > 8) ? GetOptionCount() - 8 : 0;
		}

		if (isEditModeActive && isMoveOptionActive) {
			std::swap(options[oldSelection], options[selection]);
		}

		if (selection < scrollPosition) scrollPosition--;
	}
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
		}
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuEditModeExit)) {
			isMoveOptionActive = false;
			isEditModeActive = false;
		}
	}
}

float Submenu::CurrentOptionPosY() {
	return menuPos.y + 0.05 + (0.034 * (float)drawIndex);
}
#include "pch.h"
#include "Submenu.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "ControlManager.h"

Submenu::Submenu(std::string title, std::vector<MenuOption> options, Vector2 menuPos, std::function<void(std::string key)> setSubmenu) {
	this->menuPos = menuPos;
	this->title = title;
	this->options = options;
	this->setSubmenu = setSubmenu;
	selection = 0;
	drawIndex = 0;
}

void Submenu::Draw() {
	drawIndex = 0;
	DrawTitle(title);
	for (MenuOption option : options) {
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, option.key);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, option.key);
			break;
		}
	}
}

// MARK: Draw title/option
void Submenu::DrawTitle(string text) {
	Game::Text::DrawText(text, menuPos);
}

void Submenu::DrawSub(string text, string subKey) {
	if (selection == drawIndex) {
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() }, { 0, 0, 255, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			setSubmenu(subKey);
		}
	}
	else {
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
	}

	drawIndex++;
}

void Submenu::DrawAction(string text, std::string actionKey) {
	if (selection == drawIndex) {
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() }, { 0, 0, 255, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			auto action = ActionManager::GetActionForKey(actionKey);
			if (action) action();
		}
	}
	else {
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
	}

	drawIndex++;
}

void Submenu::DrawToggle(string text, std::string toggleKey)
{
	bool* toggle = ToggleManager::GetToggleForKey(toggleKey);
	if (selection == drawIndex) {
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() }, { 0, 0, 255, 255 });
		Game::Text::DrawText(toggle ? "On" : "Off", { menuPos.x + 0.01f, CurrentOptionPosY() }, { 0, 0, 255, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			if (toggle) *toggle = !(*toggle);
		}
	}
	else {
		bool* toggle = ToggleManager::GetToggleForKey(toggleKey);
		Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
		Game::Text::DrawText(toggle ? "On" : "Off", { menuPos.x + 0.01f, CurrentOptionPosY() });
	}

	drawIndex++;
}

// MARK: Getters
int Submenu::GetOptionCount()
{
	return options.size();
}

//
void Submenu::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuDown)) {
		if (selection < GetOptionCount() - 1) selection++;
	}
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuUp)) {
		if (selection > 0) selection--;
	}

}

float Submenu::CurrentOptionPosY() {
	return menuPos.y + 0.04 + (0.02 * (float)drawIndex);
}
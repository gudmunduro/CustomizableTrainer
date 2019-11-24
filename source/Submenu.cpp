#include "pch.h"
#include "Submenu.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "ControlManager.h"
#include "Routine.h"

Submenu::Submenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu) {
	this->menuPos = menuPos;
	this->title = submenuData.title;
	this->options = submenuData.options;
	this->setSubmenu = setSubmenu;
	selection = 0;
	drawIndex = 0;
	scrollPosition = 0;
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
	Game::DrawText(text, { menuPos.x + 0.04f, menuPos.y }, 0.48f, 0.48f, { 255, 255, 255, 255 }, true);
	GRAPHICS::DRAW_RECT(menuPos.x + 0.04, menuPos.y + 0.017, 0.14, 0.035, 139, 0, 0, 150, 0, 0);
}

void Submenu::DrawSub(string text, string subKey) {
	if (selection == drawIndex + scrollPosition) {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f, { 139, 0, 0, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			setSubmenu(subKey);
		}
	}
	else {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f);
	}
	GRAPHICS::DRAW_RECT(menuPos.x + 0.04, CurrentOptionPosY() + 0.01, 0.14, 0.035, 0, 0, 0, 150, 0, 0);

	drawIndex++;
}

void Submenu::DrawAction(string text, string actionKey, json actionParams) {
	if (selection == drawIndex + scrollPosition) {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f, { 139, 0, 0, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			ActionManager::RunActionForKey(actionKey, actionParams);
		}
	}
	else {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f);
	}
	GRAPHICS::DRAW_RECT(menuPos.x + 0.04, CurrentOptionPosY() + 0.01, 0.14, 0.035, 0, 0, 0, 150, 0, 0);

	drawIndex++;
}

void Submenu::DrawToggle(string text, string toggleKey)
{
	if (!ToggleManager::DoesToggleExistForKey(toggleKey)) return;
	auto toggle = ToggleManager::GetToggleForKey(toggleKey);

	if (selection == drawIndex + scrollPosition) {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f, { 139, 0, 0, 255 });
		Game::DrawText((*toggle) ? "On" : "Off", { menuPos.x + 0.08f, CurrentOptionPosY() }, 0.40f, 0.40f, { 139, 0, 0, 255 });
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			ToggleManager::Toggle(toggleKey);
		}
	}
	else {
		Game::DrawText(text, { menuPos.x, CurrentOptionPosY() }, 0.40f, 0.40f);
		Game::DrawText((*toggle) ? "On" : "Off", { menuPos.x + 0.08f, CurrentOptionPosY() }, 0.40f, 0.40f);
	}
	GRAPHICS::DRAW_RECT(menuPos.x + 0.04, CurrentOptionPosY() + 0.01, 0.14, 0.035, 0, 0, 0, 150, 0, 0);

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
		else { 
			selection = 0; 
			scrollPosition = 0;
		}

		if (selection > scrollPosition + 7) scrollPosition++;
	}
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuUp)) {
		if (selection > 0) selection--;
		else {
			selection = GetOptionCount() - 1;
			scrollPosition = (GetOptionCount() > 8) ? GetOptionCount() - 8 : 0;
		}

		if (selection < scrollPosition) scrollPosition--;
	}
}

float Submenu::CurrentOptionPosY() {
	return menuPos.y + 0.04 + (0.034 * (float)drawIndex);
}
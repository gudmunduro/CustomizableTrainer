#include "pch.h"
#include "Submenu.h"

Submenu::Submenu(std::string title, std::vector<MenuOption> options, Vector2 menuPos) {
	this->menuPos = menuPos;
	this->title = title;
	this->options = options;
	selection = 0;
	drawIndex = 0;
}

void Submenu::Draw() {
	for (MenuOption option : options) {
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text);
		case MenuOptionType::Action:
			DrawAction(option.text, ActionManager::ActionForKey(option.key));
		case MenuOptionType::Toggle:
			DrawToggle(option.text, ToggleManager::ToggleForKey(option.key));
		}
	}
}

void Submenu::DrawTitle(string text) {
	Game::Text::DrawText(text, menuPos);
}

// Option types
void Submenu::DrawSub(string text) {
	Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
	drawIndex++;
}

void Submenu::DrawAction(string text, std::function<void ()> action) {
	Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
	drawIndex++;
}

void Submenu::DrawToggle(string text, bool* toggle) {
	Game::Text::DrawText(text, { menuPos.x, CurrentOptionPosY() });
	Game::Text::DrawText(toggle ? "On" : "Off", { menuPos.x + 10.0f, CurrentOptionPosY() });
	drawIndex++;
}

//
float Submenu::CurrentOptionPosY() {
	return menuPos.y + 0.04 + (0.02 * (float)drawIndex);
}
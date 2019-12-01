#include "pch.h"
#include "Submenu.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "ControlManager.h"
#include "MenuSettings.h"
#include "Routine.h"

Submenu::Submenu(Vector2 menuPos, std::function<void(std::string key)> setSubmenu,
				std::function<void(Submenu* submenu)> setFixedSubmenu,
				std::function<void(string messageKey, std::any messageValue)> goToLastSub) {
	this->menuPos = menuPos;
	this->setSubmenu = setSubmenu;
	this->goToLastSub = goToLastSub;
	selection = 0;
	drawIndex = 0;
	scrollPosition = 0;
}

void Submenu::Draw() {
	drawIndex = 0;
	OnDraw();
}

// MARK: Draw title/option
void Submenu::DrawTitle(string text) {
	Game::DrawText(text, { menuPos.x + 0.1f, menuPos.y }, 0.48f, 0.48f, MenuSettings::titleBarTextColor, true);
	auto titleBarBgColor = MenuSettings::titleBarBgColor;
	GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.1, menuPos.y + 0.017, 0.2, 0.055, 0, titleBarBgColor.r, titleBarBgColor.g, titleBarBgColor.b, titleBarBgColor.a, 0);
}

void Submenu::DrawOptionBase(string text, bool selected)
{
	if (selected) {
		Game::DrawText(text, { menuPos.x + 0.01f, CurrentOptionPosY() - 0.004f }, 0.35f, 0.35f, MenuSettings::optionSelectedTextColor);
		auto optionSelectedBgColor = MenuSettings::optionSelectedBgColor;
		GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.1, CurrentOptionPosY() + 0.01, 0.2, 0.035, 0, optionSelectedBgColor.r, optionSelectedBgColor.g, optionSelectedBgColor.b, optionSelectedBgColor.a, 0);
	}
	else {
		Game::DrawText(text, { menuPos.x + 0.01f, CurrentOptionPosY() - 0.004f }, 0.35f, 0.35f, MenuSettings::optionTextColor);
		auto optionBgColor = MenuSettings::optionBgColor;
		GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.1, CurrentOptionPosY() + 0.01, 0.2, 0.035, 0, optionBgColor.r, optionBgColor.g, optionBgColor.b, optionBgColor.a, 0);
	}
}

void Submenu::DrawSub(string text, string subKey, bool enabled) {
	// if ((scrollPosition + 8) > drawIndex || scrollPosition < drawIndex) return;
	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text + " >", true);
		if (enabled && ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			setSubmenu(subKey);
		}
	}
	else {
		DrawOptionBase(text + " >", false);
	}

	drawIndex++;
}

void Submenu::DrawAction(string text, std::function<void()> onPress) {
	// if ((scrollPosition + 8) > drawIndex || scrollPosition < drawIndex) return;
	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text, true);
		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			onPress();
		}
	}
	else {
		DrawOptionBase(text, false);
	}

	drawIndex++;
}

void Submenu::DrawToggle(string text, bool isToggled, std::function<void()> onPress)
{
	// if ((scrollPosition + 8) > drawIndex || scrollPosition < drawIndex) return;
	Color toggleColor = isToggled ? MenuSettings::optionToggleToggledColor : MenuSettings::optionToggleColor;

	if (selection == drawIndex + scrollPosition) {
		DrawOptionBase(text, true);
		Game::DrawText(isToggled ? "On" : "Off", { menuPos.x + 0.17f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, toggleColor);

		if (ControlManager::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			onPress();
		}
	}
	else {
		DrawOptionBase(text, false);
		Game::DrawText(isToggled ? "On" : "Off", { menuPos.x + 0.17f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, toggleColor);
	}

	drawIndex++;
}

// MARK: Events
void Submenu::OnDraw()
{
	RespondToControls();
}

void Submenu::OnSelectionChange(int to, int from)
{

}

void Submenu::OnMessageReceive(string messageKey, std::any messageValue)
{

}

// MARK: Getters
int Submenu::GetOptionCount()
{
	return 0;
}

// MARK: Controls
void Submenu::RespondToControls()
{
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuDown)) {
		int oldSelection = selection;
		if (selection < GetOptionCount() - 1) selection++;
		else { 
			selection = 0; 
			scrollPosition = 0;
		}

		OnSelectionChange(selection, oldSelection);

		if (selection > scrollPosition + 7) scrollPosition++;
	}
	if (ControlManager::IsMenuControlPressed(MenuControl::MenuUp)) {
		int oldSelection = selection;
		if (selection > 0) selection--;
		else {
			selection = GetOptionCount() - 1;
			scrollPosition = (GetOptionCount() > 8) ? GetOptionCount() - 8 : 0;
		}

		OnSelectionChange(selection, oldSelection);

		if (selection < scrollPosition) scrollPosition--;
	}
}

bool Submenu::IsBackspaceAllowed()
{
	return true;
}

// MARK: Misc
float Submenu::CurrentOptionPosY() {
	return menuPos.y + 0.05 + (0.034 * (float)drawIndex);
}

string Submenu::OptionTypeToString(MenuOptionType type)
{
	switch (type) {
	case MenuOptionType::Action:
		return "Action";
	case MenuOptionType::Toggle:
		return "Toggle";
	case MenuOptionType::Sub:
		return "Sub";
	case MenuOptionType::Text:
		return "Text";
	}
}
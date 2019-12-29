#include "pch.h"
#include "Submenu.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "Controls.h"
#include "MenuSettings.h"
#include "Routine.h"

Submenu::Submenu(MenuController *menuController) 
{
	this->menuController = menuController;
	selection = 0;
	drawIndex = 0;
	scrollPosition = 0;
	optionAddIndex = -1;
	autoOptionCount = 0;
	holdingAdjustUpTimer = 0;
	holdingAdjustUpTimerStart = 0;
	isHoldingAdjustUp = false;
	holdingAdjustDownTimer = 0;
	holdingAdjustDownTimerStart = 0;
	isHoldingAdjustDown = false;
	shouldDeleteSubmenuWhenPossible = false;
}

void Submenu::Draw() 
{
	DrawMenuBase();
}

// MARK: Draw title/option
void Submenu::DrawTitle(string text) 
{
	auto menuPos = menuController->position;
	auto titleBarBgColor = MenuSettings::titleBarBgColor;

	Game::DrawText("<font face='$title1' >" + text + "</font>", { menuPos.x + 10.0f, menuPos.y }, 48.0f, MenuSettings::titleBarTextColor, true);
	Game::DrawSprite("generic_textures", "menu_header_1a", { menuPos.x + 10.0f, menuPos.y + 1.7f }, { 20.0f, 5.5f }, 0, titleBarBgColor);
}

void Submenu::DrawMenuBase()
{
	auto menuPos = menuController->position;

	// Background
	Game::DrawSprite("generic_textures", "inkroller_1a", { menuPos.x + 10.0f, menuPos.y + 24.0f }, { 25.0f, 56.0f }, 0, {0, 0, 0, 200});

	// Top scroll bar
	if (scrollPosition > 0) {
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 4.955f, menuPos.y + 7.3f }, { 8.95f, 0.1f }, 0, { 100, 100, 100, 255 });
		Game::DrawSprite("menu_textures", "scroller_arrow_top", { menuPos.x + 10.0f, menuPos.y + 6.45f }, { 1.0f, 2.0f }, 0, { 180, 180, 180, 255 });
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 15.03f, menuPos.y + 7.3f }, { 8.95f, 0.1f }, 0, { 100, 100, 100, 255 });
	}
	else {
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 10.0f, menuPos.y + 7.3f }, { 19.3f, 0.1f }, 0, { 100, 100, 100, 255 });
	}

	// Bottom scroll bar
	if (OptionCount() > scrollPosition + 8) {
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 4.955f, menuPos.y + 45.0f }, { 8.95f, 0.1f }, 0, { 100, 100, 100, 255 });
		Game::DrawSprite("menu_textures", "scroller_arrow_bottom", { menuPos.x + 10.0f, menuPos.y + 45.85f }, { 1.0f, 2.0f }, 0, { 180, 180, 180, 255 });
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 15.03f, menuPos.y + 45.0f }, { 8.95f, 0.1f }, 0, { 100, 100, 100, 255 });
	}
	else {
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 10.0f, menuPos.y + 45.0f }, { 19.3f, 0.1f }, 0, { 100, 100, 100, 255 });
	}

	// Option count
	Game::DrawText("<font face='$body2' >" + std::to_string(selection + 1) + " / " + std::to_string(OptionCount()) + "</font>", { menuPos.x + 18.0f, menuPos.y + 45.5f }, 30.0f, { 100, 100, 100, 255 }, true);
}

void Submenu::DrawOptionBase(string text, bool selected)
{
	auto menuPos = menuController->position;
	auto optionTextColor = selected ? MenuSettings::optionSelectedTextColor : MenuSettings::optionTextColor;
	auto optionBgColor = selected ? MenuSettings::optionSelectedBgColor : MenuSettings::optionBgColor;
	
	Game::DrawText("<font face = '$body' >" + text + "</font>", { menuPos.x + 1.0f, CurrentOptionPosY() - 0.4f }, 35.0f, optionTextColor);
	if (selected) Game::DrawSprite("generic_textures", "selection_box_bg_1d", { menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 20.0f, 4.8f }, 0, optionBgColor);
	Game::DrawRect({ menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 18.6f, 3.3f }, { 0, 0, 0, 255 });
	Game::DrawSprite("generic_textures", "selection_box_bg_1c", { menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 19.3f, 4.0f }, 0, { 30, 30, 30, 255 });
}

void Submenu::DrawLabel(string text)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text, selected);

	OptionDidDraw();
}

void Submenu::DrawSub(string text, string subKey, bool enabled) 
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text + " >", selected);

	if (selected) {
		if (enabled && Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			menuController->SetSubmenuWithKey(subKey);
		}
	}

	OptionDidDraw();
}

void Submenu::DrawAction(string text, std::function<void()> onPress) 
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text, selected);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			onPress();
		}
	}

	OptionDidDraw();
}

void Submenu::DrawToggle(string text, bool isToggled, std::function<void()> onPress)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);
	auto menuPos = menuController->position;
	auto toggleColor = isToggled ? MenuSettings::optionToggleToggledColor : MenuSettings::optionToggleColor;

	DrawOptionBase(text, selected);
	Game::DrawSprite("menu_textures", isToggled ? "menu_icon_tick" : "cross", { menuPos.x + 17.0f, CurrentOptionPosY() + 1.0f }, { 0.84375f, 1.5f }, 0, toggleColor);
	// Game::DrawText(isToggled ? "On" : "Off", { menuPos.x + 17.0f, CurrentOptionPosY() - 0.2f }, 30.0f, toggleColor);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			onPress();
		}
	}

	OptionDidDraw();
}

void Submenu::DrawNumber(string text, string numberToDisplay, std::function<void()> onPress, std::function<void(bool direction)> onAdjust)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);
	auto menuPos = menuController->position; 

	DrawOptionBase(text, selected);
	Game::DrawText(numberToDisplay, { menuPos.x + 17.0f, CurrentOptionPosY() - 0.2f }, 30.0f, MenuSettings::optionNumberColor);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) // Option pressed
			onPress();

		if (isHoldingAdjustUp || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueUp))
			onAdjust(true);

		if (isHoldingAdjustDown || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueDown))
			onAdjust(false);
	}

	OptionDidDraw();
}

// MARK: Events

void Submenu::SubWillDraw()
{
	drawIndex = 0;
	optionAddIndex = -1;
}

void Submenu::SubDidDraw()
{
	if (autoOptionCount != optionAddIndex + 1)
		autoOptionCount = optionAddIndex + 1;
}

void Submenu::OptionDidDraw()
{
	drawIndex++;
}

void Submenu::SelectionDidChange(int to, int from)
{

}

// MARK: Getters

int Submenu::OptionCount()
{
	return autoOptionCount;
}

// MARK: Controls

void Submenu::RespondToControls()
{
	Controls::SetMenuControlsEnabled(false);

	if (Controls::IsMenuControlPressed(MenuControl::MenuDown)) {
		int oldSelection = selection;
		if (selection < OptionCount() - 1) selection++;
		else { 
			selection = 0; 
			scrollPosition = 0;
		}

		SelectionDidChange(selection, oldSelection);

		if (selection > scrollPosition + 7) scrollPosition++;
	}
	if (Controls::IsMenuControlPressed(MenuControl::MenuUp)) {
		int oldSelection = selection;
		if (selection > 0) selection--;
		else {
			selection = OptionCount() - 1;
			scrollPosition = (OptionCount() > 8) ? OptionCount() - 8 : 0;
		}

		SelectionDidChange(selection, oldSelection);

		if (selection < scrollPosition) scrollPosition--;
	}
	if (Controls::IsMenuControlPressed(MenuControl::MenuGoBack)) {
		menuController->GoToLastSub();
		return;
	}
	// Hold
	if (Controls::IsHoldingMenuControl(MenuControl::MenuAdjustValueUp)) {
		if (!isHoldingAdjustUp) {
			if (holdingAdjustUpTimerStart == 0)
				holdingAdjustUpTimerStart = GetTickCount();
			holdingAdjustUpTimer = GetTickCount();

			if ((holdingAdjustUpTimer - holdingAdjustUpTimerStart) >= 300)
				isHoldingAdjustUp = true;
		}
	}
	else {
		isHoldingAdjustUp = false;
		holdingAdjustUpTimerStart = 0;
	}
	if (Controls::IsHoldingMenuControl(MenuControl::MenuAdjustValueDown)) {
		if (!isHoldingAdjustDown) {
			if (holdingAdjustDownTimerStart == 0)
				holdingAdjustDownTimerStart = GetTickCount();
			holdingAdjustDownTimer = GetTickCount();

			if ((holdingAdjustDownTimer - holdingAdjustDownTimerStart) >= 300)
				isHoldingAdjustDown = true;
		}
	}
	else {
		isHoldingAdjustDown = false;
		holdingAdjustDownTimerStart = 0;
	}
}

// MARK: Booleans

bool Submenu::IsOutOfBounds(int index)
{
	return !((scrollPosition + 8) > index && scrollPosition <= index);
}

bool Submenu::IsOptionSelected(int index)
{
	return index == drawIndex + scrollPosition;
}

// MARK: Main

void Submenu::Tick()
{
	RespondToControls();
	SubWillDraw();
	Draw();
	SubDidDraw();

	if (shouldDeleteSubmenuWhenPossible)
		delete this;
}

// MARK: Misc

void Submenu::DeleteWhenPossible()
{
	shouldDeleteSubmenuWhenPossible = true;
}

float Submenu::CurrentOptionPosY() {
	auto menuPos = menuController->position;

	return menuPos.y + 8.6f + (4.7f * (float) drawIndex);
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
	case MenuOptionType::Number:
		return "Number";
	}
	return "Invalid";
}
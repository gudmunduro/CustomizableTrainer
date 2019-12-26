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
	holdingAdjustUpTimer = 0;
	holdingAdjustUpTimerStart = 0;
	isHoldingAdjustUp = false;
	holdingAdjustDownTimer = 0;
	holdingAdjustDownTimerStart = 0;
	isHoldingAdjustDown = false;
}

void Submenu::Draw() 
{
	SubWillDraw();
}

// MARK: Draw title/option
void Submenu::DrawTitle(string text) 
{
	auto menuPos = menuController->position;
	auto titleBarBgColor = MenuSettings::titleBarBgColor;

	Game::DrawText(text, { menuPos.x + 0.1f, menuPos.y }, 0.48f, 0.48f, MenuSettings::titleBarTextColor, true);
	GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.1, menuPos.y + 0.017, 0.2, 0.055, 0, titleBarBgColor.r, titleBarBgColor.g, titleBarBgColor.b, titleBarBgColor.a, 0);
}

void Submenu::DrawOptionBase(string text, bool selected)
{
	auto menuPos = menuController->position;
	auto optionTextColor = selected ? MenuSettings::optionSelectedTextColor : MenuSettings::optionTextColor;
	auto optionBgColor = selected ? MenuSettings::optionSelectedBgColor : MenuSettings::optionBgColor;
		
	Game::DrawText(text, { menuPos.x + 0.01f, CurrentOptionPosY() - 0.004f }, 0.35f, 0.35f, optionTextColor);
	GRAPHICS::DRAW_SPRITE("boot_flow", "selection_box_bg_1d", menuPos.x + 0.1, CurrentOptionPosY() + 0.01, 0.2, 0.035, 0, optionBgColor.r, optionBgColor.g, optionBgColor.b, optionBgColor.a, 0);
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
	Game::DrawText(isToggled ? "On" : "Off", { menuPos.x + 0.17f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, toggleColor);

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
	Game::DrawText(numberToDisplay, { menuPos.x + 0.17f, CurrentOptionPosY() - 0.002f }, 0.30f, 0.30f, MenuSettings::optionNumberColor);

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
	RespondToControls();
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
	return 0;
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

// MARK: Misc

float Submenu::CurrentOptionPosY() {
	auto menuPos = menuController->position;

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
	case MenuOptionType::Number:
		return "Number";
	}
	return "Invalid";
}
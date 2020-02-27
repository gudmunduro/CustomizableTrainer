/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

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
	isSubDeletionScheduled = false;
}

#pragma region Draw menu

void Submenu::DrawMenuBase()
{
	auto menuPos = menuController->position;

	// Background
	Game::DrawSprite("generic_textures", "inkroller_1a", { menuPos.x + 10.0f, menuPos.y + 24.0f }, { 25.0f, 56.0f }, 0, Settings::Colors::menuBg);

	// Top scroll line
	if (scrollPosition > 0) {
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 4.955f, menuPos.y + 7.3f }, { 8.95f, 0.1f }, 0, Settings::Colors::menuScrollLine);
		Game::DrawSprite("menu_textures", "scroller_arrow_top", { menuPos.x + 10.0f, menuPos.y + 6.45f }, { 1.0f, 2.0f }, 0, Settings::Colors::menuScrollLine);
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 15.03f, menuPos.y + 7.3f }, { 8.95f, 0.1f }, 0, Settings::Colors::menuScrollLine);
	}
	else {
		Game::DrawSprite("menu_textures", "scroller_line_top", { menuPos.x + 10.0f, menuPos.y + 7.3f }, { 19.3f, 0.1f }, 0, Settings::Colors::menuScrollLine);
	}

	// Bottom scroll line
	if (OptionCount() > scrollPosition + 8) {
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 4.955f, menuPos.y + 45.0f }, { 8.95f, 0.1f }, 0, Settings::Colors::menuScrollLine);
		Game::DrawSprite("menu_textures", "scroller_arrow_bottom", { menuPos.x + 10.0f, menuPos.y + 45.85f }, { 1.0f, 2.0f }, 0, Settings::Colors::menuScrollLine);
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 15.03f, menuPos.y + 45.0f }, { 8.95f, 0.1f }, 0, Settings::Colors::menuScrollLine);
	}
	else {
		Game::DrawSprite("menu_textures", "scroller_line_bottom", { menuPos.x + 10.0f, menuPos.y + 45.0f }, { 19.3f, 0.1f }, 0, Settings::Colors::menuScrollLine);
	}

	// Option count
	Game::DrawText("<font face='$body2' >" + std::to_string(selection + 1) + " / " + std::to_string(OptionCount()) + "</font>",
		{ menuPos.x + 18.0f, menuPos.y + 45.5f }, 30.0f, Settings::Colors::menuOptionCount, true);

	// Status text
	if (StatusText()) {
		auto statusText = StatusText().value();

		Game::DrawText("<font face='$body2' >" + statusText + "</font>", { menuPos.x + 10.0f, menuPos.y + 47.0f }, 30.0f, { 100, 100, 100, 255 }, true);
	}
}

void Submenu::Draw() 
{
	DrawMenuBase();
}

#pragma endregion

#pragma region Draw Title/option

void Submenu::DrawTitle(std::string text) 
{
	auto menuPos = menuController->position;

	Game::DrawText("<font face='$title1' >" + text + "</font>", { menuPos.x + 10.0f, menuPos.y }, 48.0f, Settings::Colors::titleBarText, true);
	Game::DrawSprite("generic_textures", "menu_header_1a", { menuPos.x + 10.0f, menuPos.y + 1.7f }, { 20.0f, 5.5f }, 0, Settings::Colors::titleBarBorder);
}

void Submenu::DrawOptionBase(std::string text, bool selected)
{
	auto menuPos = menuController->position;
	auto optionTextColor = selected ? Settings::Colors::optionSelectedText : Settings::Colors::optionText;
	auto optionBgColor = selected ? Settings::Colors::optionSelectedBg : Settings::Colors::optionBg;
	
	Game::DrawText("<font face = '$body' >" + text + "</font>", { menuPos.x + 1.0f, CurrentOptionPosY() - 0.4f }, 35.0f, optionTextColor);
	if (selected) Game::DrawSprite("generic_textures", "selection_box_bg_1d", { menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 20.0f, 4.8f }, 0, Settings::Colors::optionSelectedOutline);
	if (selected) Game::DrawRect({ menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 18.6f, 3.3f }, { 0, 0, 0, 255 });
	Game::DrawSprite("generic_textures", "selection_box_bg_1c", { menuPos.x + 10.0f, CurrentOptionPosY() + 1.0f }, { 19.3f, 4.0f }, 0, optionBgColor);
}

void Submenu::DrawLabel(std::string text)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text, selected);

	OptionDidDraw();
}

void Submenu::DrawSub(std::string text, std::string subKey, bool enabled) 
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text + " >", selected);

	if (selected) {
		if (enabled && Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
			menuController->SetSubmenuWithKey(subKey);
		}
	}

	OptionDidDraw();
}

void Submenu::DrawSubAction(std::string text, std::function<void()> onPress)
{
	DrawAction(text + " >", onPress);
}

void Submenu::DrawAction(std::string text, std::function<void()> onPress) 
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);

	DrawOptionBase(text, selected);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "SELECT");
			onPress();
		}
	}

	OptionDidDraw();
}

void Submenu::DrawToggle(std::string text, bool isToggled, std::function<void()> onPress)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);
	auto menuPos = menuController->position;
	auto toggleColor = isToggled ? Settings::Colors::optionToggleToggled : Settings::Colors::optionToggle;

	DrawOptionBase(text, selected);
	// Game::DrawSprite("menu_textures", isToggled ? "menu_icon_tick" : "cross", { menuPos.x + 17.0f, CurrentOptionPosY() + 1.0f }, { 0.84375f, 1.5f }, 0, toggleColor);
	Game::DrawText(isToggled ? "On" : "Off", { menuPos.x + 17.0f, CurrentOptionPosY() - 0.2f }, 30.0f, toggleColor);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) { // Option pressed
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "SELECT");
			onPress();
		}
	}

	OptionDidDraw();
}

void Submenu::DrawNumber(std::string text, std::string numberToDisplay, std::function<void()> onPress, std::function<void(bool direction)> onAdjust)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);
	auto menuPos = menuController->position; 

	DrawOptionBase(text, selected);
	Game::DrawText(numberToDisplay, { menuPos.x + 17.0f, CurrentOptionPosY() - 0.2f }, 30.0f, Settings::Colors::optionNumber);

	if (selected) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuOptionPress)) {
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "SELECT");
			onPress();
		}

		if (isHoldingAdjustUp || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueUp)) {
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
			onAdjust(true);
		}

		if (isHoldingAdjustDown || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueDown)) {
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
			onAdjust(false);
		}
	}

	OptionDidDraw();
}

void Submenu::DrawTextList(std::string text, std::string valueToDisplay, std::function<void(bool direction)> onAdjust)
{
	optionAddIndex++;
	if (IsOutOfBounds(optionAddIndex)) return;
	bool selected = IsOptionSelected(selection);
	auto menuPos = menuController->position;

	DrawOptionBase(text, selected);
	Game::DrawText(valueToDisplay, { menuPos.x + 13.0f, CurrentOptionPosY() }, 30.0f, Settings::Colors::optionNumber);

	if (selected) {

		if (isHoldingAdjustUp || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueUp)) {
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
			onAdjust(true);
		}

		if (isHoldingAdjustDown || Controls::IsMenuControlPressed(MenuControl::MenuAdjustValueDown)) {
			if (Settings::General::playUiSounds) Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
			onAdjust(false);
		}
	}

	OptionDidDraw();
}

void Submenu::DrawTextAction(std::string text, std::string value, std::function<void()> onPress)
{
	auto menuPos = menuController->position;

	DrawAction(text, onPress);
	Game::DrawText(value, { menuPos.x + 9.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, 255 });
}

#pragma endregion

#pragma region Events

void Submenu::SubDidAppear()
{
}

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
	if (Settings::General::playUiSounds) {
		if (to < from)
			Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_UP");
		else
			Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_DOWN");
	}
}

#pragma endregion

#pragma region Getters

int Submenu::OptionCount()
{
	return autoOptionCount;
}

std::optional<std::string> Submenu::StatusText()
{
	return std::nullopt;
}

#pragma endregion

#pragma region Controls

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
		if (Settings::General::playUiSounds) {
			if (menuController->submenuStack.size() > 0) 
				Game::PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
			else
				Game::PlaySoundFrontend("HUD_PLAYER_MENU", "MENU_CLOSE");
		}
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

#pragma endregion

#pragma region Booleans

bool Submenu::IsOutOfBounds(int index)
{
	return !((scrollPosition + 8) > index && scrollPosition <= index);
}

bool Submenu::IsOptionSelected(int index)
{
	return index == drawIndex + scrollPosition;
}

#pragma endregion

#pragma region Main

void Submenu::Tick()
{
	RespondToControls();
	SubWillDraw();
	Draw();
	SubDidDraw();

	// Since the submenu will itself pop from the submenu stack in the middle of tick,
	// if it was deleted at the same time, it would still try to access 'this' which would cause a crash
	// So this is a (bad) way to prevent that
	if (isSubDeletionScheduled)
		delete this;
}

#pragma endregion

#pragma region Misc

void Submenu::DeleteWhenPossible()
{
	isSubDeletionScheduled = true;
}

float Submenu::CurrentOptionPosY() {
	auto menuPos = menuController->position;

	return menuPos.y + 8.6f + (4.7f * (float) drawIndex);
}

std::string Submenu::OptionTypeToString(MenuOptionType type)
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

#pragma endregion
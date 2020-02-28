/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once

#include "pch.h"
#include "MenuController.h"

class MenuController;

class Submenu {
public:
	Submenu(MenuController *menuController);

	virtual int OptionCount();
	virtual std::optional<std::string> StatusText();

	bool IsOutOfBounds(int index);
	bool IsOptionSelected(int index);

	void Tick();

	void DeleteWhenPossible();

	virtual void SubDidAppear();
	virtual void SubWillDraw();
	virtual void SubDidDraw();
	virtual void OptionDidDraw();
	virtual void SelectionDidChange(int to, int from);

	int selection;
	int scrollPosition;
protected:
	virtual void Draw();

	void DrawTitle(std::string text);
	virtual void DrawMenuBase();
	void DrawStatusText();
	void DrawOptionBase(std::string text, bool selected);
	void DrawLabel(std::string text);
	void DrawSub(std::string text, std::string subKey, bool isEnabled = true);
	void DrawSubAction(std::string text, std::function<void()> onPress);
	void DrawAction(std::string text, std::function<void()> onPress);
	void DrawToggle(std::string text, bool isToggled, std::function<void()> onPress);
	void DrawNumber(std::string text, std::string numberToDisplay, std::function<void()> onPress, std::function<void(bool direction)> onAdjust);
	void DrawTextList(std::string text, std::string valueToDisplay, std::function<void(bool direction)> onAdjust);
	void DrawTextAction(std::string text, std::string value, std::function<void()> onPress);

	virtual void RespondToControls();

	std::string OptionTypeToString(MenuOptionType type);
	float CurrentOptionPosY();

	int drawIndex;
	int optionAddIndex;
	int autoOptionCount;
	MenuController* menuController;

private:
	int holdingAdjustUpTimer;
	int holdingAdjustUpTimerStart;
	bool isHoldingAdjustUp;
	bool isSubDeletionScheduled;
	int holdingAdjustDownTimer;
	int holdingAdjustDownTimerStart;
	bool isHoldingAdjustDown;
	std::optional<std::string> lastStatusText;
	FloatAnimation statusTextAlphaAnim;
};


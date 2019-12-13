#pragma once

#include "pch.h"
#include "MenuController.h"

class MenuController;

class Submenu {
public:
	Submenu(MenuController *menuController);

	virtual void Draw();
	void DrawTitle(string text);
	void DrawOptionBase(string text, bool selected);
	void DrawLabel(string text);
	void DrawSub(string text, string subKey, bool isEnabled = true);
	void DrawAction(string text, std::function<void()> onPress);
	void DrawToggle(string text, bool isToggled, std::function<void()> onPress);
	void DrawNumber(string text, string numberToDisplay, std::function<void()> onPress, std::function<void(bool direction)> onAdjust);

	virtual void SubWillDraw();
	virtual void OptionDidDraw();
	virtual void SelectionDidChange(int to, int from);

	virtual int OptionCount();

	virtual void RespondToControls();

	bool IsOutOfBounds(int index);
	bool IsOptionSelected(int index);

	int selection;
	int scrollPosition;
protected:
	string OptionTypeToString(MenuOptionType type);
	float CurrentOptionPosY();
	int drawIndex;
	int optionAddIndex;
	int holdingAdjustUpTimer;
	int holdingAdjustUpTimerStart;
	bool isHoldingAdjustUp;
	int holdingAdjustDownTimer;
	int holdingAdjustDownTimerStart;
	bool isHoldingAdjustDown;
	MenuController* menuController;
};


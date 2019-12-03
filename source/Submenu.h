#pragma once

#include "pch.h"

class Submenu {
public:
	Submenu(Vector2 menuPos, std::function<void(string key)> setSubmenu, std::function<void(Submenu*)> setFixedSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub);

	virtual void Draw();
	void DrawTitle(string text);
	void DrawOptionBase(string text, bool selected);
	void DrawSub(string text, string subKey, bool isEnabled = true);
	void DrawAction(string text, std::function<void()> onPress);
	void DrawToggle(string text, bool isToggled, std::function<void()> onPress);
	void DrawNumber(string text, string numberToDisplay, std::function<void()> onPress, std::function<void(bool direction)> onAdjust);

	virtual void OnDraw();
	virtual void OnSelectionChange(int to, int from);
	virtual void OnMessageReceive(string messageKey, std::any messageValue);

	virtual int GetOptionCount();

	virtual void RespondToControls();
	virtual bool IsBackspaceAllowed();
protected:
	string OptionTypeToString(MenuOptionType type);
	float CurrentOptionPosY();
	Vector2 menuPos;
	int selection;
	int drawIndex;
	int scrollPosition;
	std::function<void(std::string key)> setSubmenu;
	std::function<void(string messageKey, std::any messageValue)> goToLastSub;
};


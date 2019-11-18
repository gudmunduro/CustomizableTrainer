#pragma once

#include "pch.h"
#include "ActionManager.h"
#include "ToggleManager.h"

class Submenu {
public:
	Submenu(std::string title, std::vector<MenuOption> options, Vector2 menuPos);
	std::string title;
	std::vector<MenuOption> options;
	Vector2 menuPos;
	int selection;
	int drawIndex;

	void Draw();
	void DrawTitle(string text);
	void DrawSub(string text);
	void DrawAction(string text, std::function<void()> action);
	void DrawToggle(string text, bool* toggle);
	float CurrentOptionPosY();
private:
};


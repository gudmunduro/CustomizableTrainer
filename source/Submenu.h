#pragma once

#include "pch.h"

class Submenu {
public:
	Submenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu);

	void Draw();
	void DrawTitle(string text);
	void DrawOptionText(string text, bool selected);
	void DrawSub(string text, string subKey);
	void DrawAction(string text, string actionKey, json actionParams);
	void DrawToggle(string text, string toggleKey);

	int GetOptionCount();

	void RespondToControls();
	float CurrentOptionPosY();
private:
	string title;
	std::vector<MenuOption> options;
	Vector2 menuPos;
	int selection;
	int drawIndex;
	int scrollPosition;
	std::function<void(std::string key)> setSubmenu;
};


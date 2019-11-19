#pragma once

#include "pch.h"

class Submenu {
public:
	Submenu(std::string title, std::vector<MenuOption> options, Vector2 menuPos, std::function<void(std::string key)> setSubmenu);

	void Draw();
	void DrawTitle(string text);
	void DrawSub(string text, string subKey);
	void DrawAction(string text, std::string actionKey);
	void DrawToggle(string text, std::string toggleKey);

	int GetOptionCount();

	void RespondToControls();
	float CurrentOptionPosY();
private:
	string title;
	std::vector<MenuOption> options;
	Vector2 menuPos;
	int selection;
	int drawIndex;
	std::function<void(std::string key)> setSubmenu;
};


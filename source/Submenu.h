#pragma once

#include "pch.h"

class Submenu {
public:
	Submenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData);

	void Draw();
	void DrawTitle(string text);
	void DrawOptionBase(string text, bool selected);
	void DrawSub(string text, string subKey);
	void DrawAction(string text, string actionKey, json actionParams);
	void DrawToggle(string text, string toggleKey);

	void OnDraw();

	void OnDrawEditMode();

	int GetOptionCount();
	bool GetEditModeActive();

	void RespondToControls();
	float CurrentOptionPosY();
private:
	string title;
	string key;
	std::vector<MenuOption> options;
	Vector2 menuPos;
	int selection;
	int drawIndex;
	int scrollPosition;
	bool isEditModeActive;
	bool isMoveOptionActive;
	std::function<void(std::string key)> setSubmenu;
	std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData;
};


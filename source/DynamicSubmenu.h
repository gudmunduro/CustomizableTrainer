#pragma once
#include "pch.h"
#include "Submenu.h"

class DynamicSubmenu :
	public Submenu
{
public:
	DynamicSubmenu(SubmenuData submenuData, MenuController* menuController);

	int OptionCount();

protected:
	void Draw() override;

	void DrawMenuBase() override;

	void DrawSub(string text, string subKey);
	void DrawAction(string text, string actionKey, json actionParams);
	void DrawToggle(string text, string toggleKey);
	void DrawNumber(string text, string numberKey);
	void DrawTextList(string text, string textKey);

	void SubWillDraw() override;
	void SelectionDidChange(int to, int from) override;

	void RespondToControls() override;

	bool IsSavedOption(string key);
	void SaveIfSavedOption(string key);

	string title;
	string key;
	std::vector<MenuOption> options;
	bool isEditModeActive;
	bool isMoveOptionActive;
};


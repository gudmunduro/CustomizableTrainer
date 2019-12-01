#pragma once
#include "pch.h"
#include "Submenu.h"

class DynamicSubmenu :
	public Submenu
{
public:
	DynamicSubmenu(SubmenuData submenuData, Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(Submenu* submenu)> setFixedSubmenu, std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData, std::function<void(string messageKey, std::any messageValue)> goToLastSub);

	void Draw() override;

	void DrawSub(string text, string subKey);
	void DrawAction(string text, string actionKey, json actionParams);
	void DrawToggle(string text, string toggleKey);

	void OnDraw() override;
	void OnDrawEditMode();
	void OnSelectionChange(int to, int from) override;
	void OnMessageReceive(string messageKey, std::any messageValue) override;

	void RespondToControls() override;

	bool IsBackspaceAllowed() override;

	int GetOptionCount();
	bool GetEditModeActive();
private:
	string title;
	string key;
	std::vector<MenuOption> options;
	bool isEditModeActive;
	bool isMoveOptionActive;
	std::function<void(std::string key, SubmenuData submenuData)> updateSubmenuData;
};


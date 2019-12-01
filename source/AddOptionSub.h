#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSub :
	public FixedSubmenu
{
public:
	AddOptionSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(Submenu* submenu)> setFixedSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub);
	void Setup(bool resetParams = false);

	void OnOptionPress(int index) override;
	void OnMessageReceive(string messageKey, std::any messageValue) override;
private:
	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
};


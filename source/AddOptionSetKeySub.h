#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetKeySub :
	public FixedSubmenu
{
public:
	AddOptionSetKeySub(Vector2 menuPos, MenuOptionType optionType, std::vector<string> keys, std::function<void(std::string key)> setSubmenu, std::function<void(Submenu* submenu)> setFixedSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub);

	void OnOptionPress(int index) override;
	
	void CreateDisplayKeys();
private:
	std::vector<string> keys;
	std::vector<string> displayKeys;
	MenuOptionType optionType;
};


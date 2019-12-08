#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetKeySub :
	public FixedSubmenu
{
public:
	AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController);
	
	void Draw() override;

	void OnKeySelect(string key);

	int OptionCount() override;

	void CreateDisplayKeys();

	std::function<void(string key)> onKeySet;
private:
	std::vector<string> keys;
	std::vector<string> displayKeys;
	MenuOptionType optionType;
};


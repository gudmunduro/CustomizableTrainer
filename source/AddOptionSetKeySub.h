#pragma once
#include "pch.h"
#include "Submenu.h"

class AddOptionSetKeySub :
	public Submenu
{
public:
	AddOptionSetKeySub(MenuOptionType optionType, MenuController* menuController, bool hideGetterOnlyOptions = false);

	std::function<void(std::string key)> onKeySet;
protected:
	void Draw() override;
	void OnKeySelect(std::string key);
	void CreateDisplayKeys();

	std::vector<std::string> keys;
	std::vector<std::string> displayKeys;
	MenuOptionType optionType;
	bool hideGetterOnlyOptions;
};


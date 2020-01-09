#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class WeaponSelectionCatSub
	: public FixedSubmenu
{
public:
	WeaponSelectionCatSub(MenuController* menuController, string catName, std::vector<WeaponData> weapons);

	void Draw() override;

private:
	string catName;
	std::vector<WeaponData> weapons;
};


class WeaponSelectionSub
	: public FixedSubmenu
{
public:
	WeaponSelectionSub(MenuController* menuController);

	void Draw() override;

private:
	std::vector<std::pair<string, std::vector<WeaponData>>> weaponCats;
};

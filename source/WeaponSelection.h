#pragma once
#include "pch.h"
#include "Submenu.h"

class WeaponSelectionCatSub
	: public Submenu
{
public:
	WeaponSelectionCatSub(MenuController* menuController, string catName, std::vector<WeaponData> weapons);

	void Draw() override;

	void RespondToControls() override;

private:
	string catName;
	std::vector<WeaponData> weapons;
};


class WeaponSelectionSub
	: public Submenu
{
public:
	WeaponSelectionSub(MenuController* menuController);

	void Draw() override;

	void RespondToControls() override;

private:
	std::vector<std::pair<string, std::vector<WeaponData>>> weaponCats;
};

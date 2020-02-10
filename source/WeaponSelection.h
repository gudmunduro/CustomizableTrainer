#pragma once
#include "pch.h"
#include "Submenu.h"

class WeaponSelectionCatSub
	: public Submenu
{
public:
	WeaponSelectionCatSub(MenuController* menuController, std::string catName, std::vector<WeaponData> weapons);

	void Draw() override;

	void RespondToControls() override;

private:
	std::string catName;
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
	std::vector<std::pair<std::string, std::vector<WeaponData>>> weaponCats;
};

#pragma once
#include "pch.h"
#include "Submenu.h"

class ManageWeaponSub
	: public Submenu {
public:
	ManageWeaponSub(MenuController *menuController, Ped ped, WeaponData weapon);

	void Draw() override;

private:
	WeaponData weapon;
	Ped ped;
};

class WeaponSelectionCatSub
	: public Submenu
{
public:
	WeaponSelectionCatSub(MenuController* menuController, Ped ped, std::string catName, std::vector<WeaponData> weapons);

	void Draw() override;

	void RespondToControls() override;

private:
	std::string catName;
	std::vector<WeaponData> weapons;
	Ped ped;
};


class WeaponSelectionSub
	: public Submenu
{
public:
	WeaponSelectionSub(MenuController* menuController, Ped ped);

	void Draw() override;

	void RespondToControls() override;

private:
	std::vector<std::pair<std::string, std::vector<WeaponData>>> weaponCats;
	Ped ped;
};

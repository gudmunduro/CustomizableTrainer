#pragma once
#include "pch.h"
#include "Submenu.h"

class ManageWeaponSub
	: public Submenu {
public:
	ManageWeaponSub(MenuController *menuController, Ped ped, WeaponData weapon, std::function<void(WeaponData)> onEquip, std::function<void(WeaponData)> onRemove);

	void Draw() override;

private:
	std::function<void(WeaponData)> onEquip;
	std::function<void(WeaponData)> onRemove;
	WeaponData weapon;
	Ped ped;
};

class WeaponSelectionCatSub
	: public Submenu
{
public:
	WeaponSelectionCatSub(MenuController* menuController, Ped ped, std::string catName, std::vector<WeaponData> weapons, std::function<void(WeaponData)> onEquip, std::function<void(WeaponData)> onRemove);

	void Draw() override;

	void RespondToControls() override;

private:
	std::string catName;
	std::vector<WeaponData> weapons;
	std::function<void(WeaponData)> onEquip;
	std::function<void(WeaponData)> onRemove;
	Ped ped;
};


class WeaponSelectionSub
	: public Submenu
{
public:
	WeaponSelectionSub(MenuController* menuController, Ped ped, std::function<void(WeaponData)> onEquip = [] (WeaponData w) {}, std::function<void(WeaponData)> onRemove = [](WeaponData w) {});

	void Draw() override;

	void RespondToControls() override;

private:
	const std::vector<std::pair<std::string, std::vector<WeaponData>>>& weaponCats;
	std::function<void(WeaponData)> onEquip;
	std::function<void(WeaponData)> onRemove;
	Ped ped;
};

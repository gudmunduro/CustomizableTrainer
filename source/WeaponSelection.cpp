/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "DynamicSubmenu.h"
#include "WeaponSelection.h"
#include "WeaponManager.h"
#include "JsonData.h"
#include "Controls.h"

#pragma region Manage weapon

ManageWeaponSub::ManageWeaponSub(MenuController* menuController, Ped ped, WeaponData weapon)
	: Submenu(menuController), ped(ped), weapon(weapon)
{}

void ManageWeaponSub::Draw() 
{
	Submenu::Draw();

	DrawTitle(weapon.name);

	DrawAction("Equip", [this] {
		auto weaponHash = String::Hash(weapon.model);

		if (!ped.HasWeapon(weaponHash))
			ped.GiveWeapon(weaponHash);
		else
			ped.SetCurrentWeapon(weaponHash);

		ped.SetAmmo(weaponHash, 9999);
	});
	DrawAction("Fill ammo", [this] {
		auto weaponHash = String::Hash(weapon.model);

		ped.SetAmmo(weaponHash, 9999);
	});
	DrawAction("Remove", [this] {
		ped.RemoveWeapon(String::Hash(weapon.model));
	});
}

#pragma endregion

#pragma region Weapon category

WeaponSelectionCatSub::WeaponSelectionCatSub(MenuController* menuController, Ped ped, std::string catName, std::vector<WeaponData> weapons)
	: Submenu(menuController), ped(ped), catName(catName), weapons(weapons)
{}

void WeaponSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(catName);
	
	for each (auto weapon in weapons) {
		DrawAction(weapon.name + " >", [this, weapon] {
			auto manageWeaponSub = new ManageWeaponSub(menuController, ped, weapon);
			menuController->AddSubmenuToStack(manageWeaponSub);
		});
	}
}

void WeaponSelectionCatSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}

#pragma endregion


#pragma region Weapon category selection

WeaponSelectionSub::WeaponSelectionSub(MenuController* menuController, Ped ped)
	: Submenu(menuController), weaponCats(JSONData::GetWeapons()), ped(ped)
{}

void WeaponSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Weapons");

	for each (auto weaponCat in weaponCats) {
		DrawAction(weaponCat.first + " >", [this, weaponCat] {
			auto weaponCatSub = new WeaponSelectionCatSub(menuController, ped, weaponCat.first, weaponCat.second);
			menuController->AddSubmenuToStack(weaponCatSub);
		});
	}
}

void WeaponSelectionSub::RespondToControls()
{
	Submenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}

#pragma endregion

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

#pragma region Weapon category

WeaponSelectionCatSub::WeaponSelectionCatSub(MenuController* menuController, string catName, std::vector<WeaponData> weapons)
	: Submenu(menuController), catName(catName), weapons(weapons)
{
}

void WeaponSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(catName);
	
	for each (auto weapon in weapons) {
		DrawAction(weapon.name + " >", [this, weapon] {
			WeaponManager::currentWeapon = weapon;
			menuController->SetSubmenuWithKey("required_sub_manangeWeapon");
			((DynamicSubmenu*)menuController->submenuStack.back())->title = weapon.name; // TODO: Find a better way
		});
	}
}

void WeaponSelectionCatSub::RespondToControls()
{

}

#pragma endregion


#pragma region Weapon category selection

WeaponSelectionSub::WeaponSelectionSub(MenuController* menuController)
	: Submenu(menuController)
{
	weaponCats = JSONData::GetWeapons();
}

void WeaponSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Weapons");

	for each (auto weaponCat in weaponCats) {
		DrawAction(weaponCat.first + " >", [this, weaponCat] {
			auto weaponCatSub = new WeaponSelectionCatSub(menuController, weaponCat.first, weaponCat.second);
			menuController->AddSubmenuToStack(weaponCatSub);
		});
	}
}

void WeaponSelectionSub::RespondToControls()
{

}

#pragma endregion
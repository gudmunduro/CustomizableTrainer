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
#include "WeaponSelection.h"
#include "WeaponManager.h"
#include "JsonData.h"
#include "Controls.h"

#pragma region Manage weapon

ManageWeaponSub::ManageWeaponSub(MenuController* menuController, Ped ped, WeaponData weapon, std::function<void(WeaponData)> onEquip, std::function<void(WeaponData)> onRemove)
	: Submenu(menuController), ped(ped), weapon(weapon), onEquip(onEquip), onRemove(onRemove)
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

		onEquip(weapon);
	});
	DrawAction("Fill ammo", [this] {
		auto weaponHash = String::Hash(weapon.model);

		ped.SetAmmo(weaponHash, 9999);
	});
	DrawAction("Remove", [this] {
		ped.RemoveWeapon(String::Hash(weapon.model));

		onRemove(weapon);
	});
}

#pragma endregion

#pragma region Weapon category

WeaponSelectionCatSub::WeaponSelectionCatSub(MenuController* menuController, Ped ped, std::string catName, std::vector<WeaponData> weapons, std::function<void(WeaponData)> onEquip, std::function<void(WeaponData)> onRemove)
	: Submenu(menuController), ped(ped), catName(catName), weapons(weapons), onEquip(onEquip), onRemove(onRemove)
{}

void WeaponSelectionCatSub::Draw()
{
	Submenu::Draw();

	DrawTitle(catName);
	
	for (auto&& weapon : weapons) {
		DrawAction(weapon.name + " >", [this, weapon] {
			auto manageWeaponSub = new ManageWeaponSub(menuController, ped, weapon, onEquip, onRemove);
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

WeaponSelectionSub::WeaponSelectionSub(MenuController* menuController, Ped ped, std::function<void(WeaponData)> onEquip, std::function<void(WeaponData)> onRemove)
	: Submenu(menuController), weaponCats(JSONData::GetWeapons()), ped(ped), onEquip(onEquip)
{}

void WeaponSelectionSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Weapons");

	for (auto&& weaponCat : weaponCats) {
		DrawAction(weaponCat.first + " >", [this, weaponCat] {
			auto weaponCatSub = new WeaponSelectionCatSub(menuController, ped, weaponCat.first, weaponCat.second, onEquip, onRemove);
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

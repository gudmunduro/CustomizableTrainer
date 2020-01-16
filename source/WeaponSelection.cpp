#include "pch.h"
#include "DynamicSubmenu.h"
#include "WeaponSelection.h"
#include "WeaponManager.h"
#include "JsonData.h"

#pragma region Weapon category

WeaponSelectionCatSub::WeaponSelectionCatSub(MenuController* menuController, string catName, std::vector<WeaponData> weapons)
	: FixedSubmenu(menuController), catName(catName), weapons(weapons)
{
}

void WeaponSelectionCatSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(catName);
	
	for each (auto weapon in weapons) {
		DrawAction(weapon.name + " >", [this, weapon] {
			WeaponManager::currentWeapon = weapon;
			menuController->SetSubmenuWithKey("required_sub_manangeWeapon");
			((DynamicSubmenu*)menuController->submenuStack.back())->title = weapon.name; // TODO: Find a better way
		});
	}
}

#pragma endregion


#pragma region Weapon category selection

WeaponSelectionSub::WeaponSelectionSub(MenuController* menuController)
	: FixedSubmenu(menuController)
{
	weaponCats = JSONData::GetWeapons();
}

void WeaponSelectionSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Weapons");

	for each (auto weaponCat in weaponCats) {
		DrawAction(weaponCat.first + " >", [this, weaponCat] {
			auto weaponCatSub = new WeaponSelectionCatSub(menuController, weaponCat.first, weaponCat.second);
			menuController->AddSubmenuToStack(weaponCatSub);
		});
	}
}

#pragma endregion
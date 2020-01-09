#include "pch.h"
#include "WeaponSelection.h"
#include "JsonData.h"

#pragma region Weapon category

WeaponSelectionCatSub::WeaponSelectionCatSub(MenuController* menuController, string catName, std::vector<WeaponData> weapons)
	: FixedSubmenu(menuController), catName(catName), weapons(weapons)
{
}

void WeaponSelectionCatSub::Draw()
{
	DrawTitle(catName);
	
	for each (auto weapon in weapons) {
		DrawAction(weapon.name, [this, weapon] {
			
		});
	}
}

#pragma endregion


#pragma region Weapon category selection

WeaponSelectionSub::WeaponSelectionSub(MenuController* menuController)
	: FixedSubmenu(menuController)
{
	weaponCats = JSONData::GetWeaponsAsMap();
}

void WeaponSelectionSub::Draw()
{
	DrawTitle("Weapons");

	for each (auto weaponCat in weaponCats) {
		DrawAction(weaponCat.first, [this, weaponCat] {
			auto weaponCatSub = new WeaponSelectionCatSub(menuController, weaponCat.first, weaponCats[weaponCat.first]);
			menuController->AddSubmenuToStack(weaponCatSub);
		});
	}
}

#pragma endregion
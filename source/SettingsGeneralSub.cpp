#include "pch.h"
#include "SettingsGeneralSub.h"
#include "MenuSettings.h"
#include "JsonData.h"

SettingsGeneralSub::SettingsGeneralSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

#pragma region Draw

void SettingsGeneralSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("General");
	DrawToggle("UI sounds", MenuSettings::playUiSounds, [] {
		MenuSettings::playUiSounds = !MenuSettings::playUiSounds;
		JSONData::SaveMenuSettings();
	});
}

#pragma endregion

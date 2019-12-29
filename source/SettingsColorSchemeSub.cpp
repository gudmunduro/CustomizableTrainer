#include "pch.h"
#include "SettingsColorSchemeSub.h"
#include "SettingsSetColorSub.h"
#include "MenuSettings.h"

SettingsColorSchemeSub::SettingsColorSchemeSub(MenuController* menuController) : FixedSubmenu(menuController)
{
}

// MARK: Draw

void SettingsColorSchemeSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle("Color scheme");
	DrawSetColorAction("Title border", &MenuSettings::titleBarBorderColor);
	DrawSetColorAction("Title text", &MenuSettings::titleBarTextColor);
	DrawSetColorAction("Option background", &MenuSettings::optionBgColor);
	DrawSetColorAction("Option text", &MenuSettings::optionTextColor);
	DrawSetColorAction("Option selected bg", &MenuSettings::optionSelectedBgColor);
	DrawSetColorAction("Option selected outline", &MenuSettings::optionSelectedOutlineColor);
	DrawSetColorAction("Option selected text", &MenuSettings::optionSelectedTextColor);
	DrawSetColorAction("Option toggle", &MenuSettings::optionToggleColor);
	DrawSetColorAction("Option toggle(toggled)", &MenuSettings::optionToggleToggledColor);
	DrawSetColorAction("Option number", &MenuSettings::optionNumberColor);
	DrawSetColorAction("Menu background", &MenuSettings::menuBgColor);
	DrawSetColorAction("Scroll line", &MenuSettings::menuScrollLineColor);
	DrawSetColorAction("Option count", &MenuSettings::menuOptionCountColor);
	DrawSetColorAction("Menu status text", &MenuSettings::menuStatusTextColor);
}

void SettingsColorSchemeSub::DrawSetColorAction(string text, Color *color)
{
	DrawAction(text + " >", [this, text, color] {
		Submenu *setColorSub = new SettingsSetColorSub(text, color, menuController);
		menuController->AddSubmenuToStack(setColorSub);
	});
}

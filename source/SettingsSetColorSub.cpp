#include "pch.h"
#include "SettingsSetColorSub.h"
#include "JsonDataManager.h"
#include "Routine.h"

SettingsSetColorSub::SettingsSetColorSub(string title, Color *colorToChange, MenuController* menuController) : FixedSubmenu(menuController)
{
	this->title = title;
	this->colorToChange = colorToChange;
}

// MARK: Draw

void SettingsSetColorSub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(title);
	DrawColorValue("Red", &colorToChange->r);
	DrawColorValue("Green", &colorToChange->g);
	DrawColorValue("Blue", &colorToChange->b);
	DrawColorValue("Alpha", &colorToChange->a);
	DrawAction("Save", [] {
		JSONDataManager jsonDataManager;
		jsonDataManager.SaveMenuSettings(true);
	});
}

void SettingsSetColorSub::DrawColorValue(string text, int* color)
{
	DrawNumber(text, std::to_string(*color), [color] {
			try {
				int value = std::stoi(Game::GetInputWithKeyboard(std::to_string(*color)));
				if (value < 0 || value > 255) {
					Routine::StartDrawBottomMessage("Error: Value needs to be between 0 and 255");
					return;
				}
				*color = value;
			}
			catch (std::exception & e) {
				Routine::StartDrawBottomMessage("Error: Invalid value");
			}
		}, [color](bool direction) {
			if (*color == 255 && direction) {
				*color = 0;
				return;
			}
			if (*color == 0 && !direction) {
				*color = 255;
				return;
			}
			*color += direction ? 1 : -1;
		});
}

// MARK: Getters

int SettingsSetColorSub::OptionCount()
{
	return 5;
}

#include "pch.h"
#include "Game.h"

namespace Game {
	namespace Text {
		void DrawText(string text, Vector2 position, Color color) {
			UI::SET_TEXT_SCALE(0.45f, 0.45f);
			UI::SET_TEXT_COLOR_RGBA(color.r, color.g, color.b, color.a);
			char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", (char*) text.c_str());
			UI::DRAW_TEXT(varString, position.x, position.y);
		}
	}
}

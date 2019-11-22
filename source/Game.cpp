#include "pch.h"
#include "Game.h"

namespace Game {
	namespace Text {
		void DrawText(string text, Vector2 position, float scale1, float scale2, Color color, bool center) {
			UI::SET_TEXT_CENTRE(center);
			UI::SET_TEXT_SCALE(scale1, scale2);
			UI::SET_TEXT_COLOR_RGBA(color.r, color.g, color.b, color.a);
			char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", (char*) text.c_str());
			UI::DRAW_TEXT(varString, position.x, position.y);
		}
	}
}

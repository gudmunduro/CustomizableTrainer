#include "pch.h"
#include "Game.h"

namespace Game {
	namespace Text {
		void DrawText(string text, Vector2 position) {
			HUD::SET_TEXT_SCALE(0.45f, 0.45f);
			HUD::_SET_TEXT_COLOR(255, 255, 255, 255);
			const char* varString = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", text.c_str());
			HUD::_DRAW_TEXT(varString, position.x, position.y);
		}
	}
}

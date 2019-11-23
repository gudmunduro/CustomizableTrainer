#include "pch.h"
#include "Game.h"

void Game::DrawText(string text, Vector2 position, float scale1, float scale2, Color color, bool center) {
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_SCALE(scale1, scale2);
	UI::SET_TEXT_COLOR_RGBA(color.r, color.g, color.b, color.a);
	char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", (char*) text.c_str());
	UI::DRAW_TEXT(varString, position.x, position.y);
}

void Game::RequestModel(Hash model)
{
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED) {
		SYSTEM::WAIT(5);
	}
}

void Game::UpdateData()
{
	playerId = PLAYER::PLAYER_ID();
	playerPedId = PLAYER::PLAYER_PED_ID();
}
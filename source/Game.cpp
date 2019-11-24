#include "pch.h"
#include "Game.h"
#include "Routine.h"

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
	SYSTEM::WAIT(10);
	STREAMING::REQUEST_MODEL(model, true); // For some reason REQUEST_MODEL only workds when it's called twice
	auto timeout = GetTickCount() + 1000;
	while (!STREAMING::HAS_MODEL_LOADED(model)) {
		SYSTEM::WAIT(5);
		if (GetTickCount() > timeout) {
			Routine::StartDrawBottomMessage("~r~Error: ~w~Loading model timed out");
			break;
		}
	}
}

void Game::UpdateData()
{
	playerId = PLAYER::PLAYER_ID();
	playerPedId = PLAYER::PLAYER_PED_ID();
}
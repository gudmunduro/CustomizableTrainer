#include "pch.h"
#include "Routine.h"

// MARK: Start Routine
void Routine::StartDrawBottomMessage(string message, int time)
{
	bottomMesssageText = message;
	drawBottomTextUntil = GetTickCount() + time;
}

// MARK: Routines
void Routine::DrawBottomMessage()
{
	if (GetTickCount() < drawBottomTextUntil) {
		Game::Text::DrawText(bottomMesssageText, { 0.5, 0.9 }, 0.45, 0.45, { 255, 255, 255, 255 }, true);
	}
}

void Routine::RunAll()
{
	DrawBottomMessage();
}
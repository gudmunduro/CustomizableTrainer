#include "pch.h"
#include "PedSpawnerManangeSub.h"

PedSpawnerManangeSub::PedSpawnerManangeSub(MenuController *menuController)
	: FixedSubmenu(menuController)
{
	title = "";
	options = {};
}

void PedSpawnerManangeSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Manange");

}
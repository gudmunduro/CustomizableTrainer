/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "pch.h"
#include "Script.h"
#include "Menu.h"

void main()
{
	Menu* menu = new Menu();
	while (true) {
		menu->Tick();
		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}
/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/
/*
* ALTERED SOURCE
* Customizable Trainer
* Copyright (C) 2020 Guðmundur Óli
*/

#pragma once

enum class MenuOptionType {
	Action,
	Toggle,
	Sub,
	Number,
	Text
};

enum class MenuOptionParameterType {
	String,
	Int,
	Float
};

enum class Direction {
	Forward,
	Backward
};

enum class EntityType {
	Object,
	Vehicle,
	Ped
};

enum class SpawnerMoveMode: int {
	SurfaceEase = 0,
	Precision = 1
};
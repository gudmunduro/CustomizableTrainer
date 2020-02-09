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

#include <windows.h>
#include "pch.h"
#include "enums.h"
#include "json.hpp"

using json = nlohmann::json;

typedef DWORD Void;
typedef DWORD Any;
typedef DWORD uint;
typedef DWORD Hash;
typedef int EntityId;
typedef int PlayerId;
typedef int FireId;
typedef int PedId;
typedef int VehicleId;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int ScrHandle;
typedef std::string string;

#define ALIGN8 __declspec(align(8))

struct Vector3
{
	ALIGN8 float x;
	ALIGN8 float y;
	ALIGN8 float z;
};

struct Vector2
{
	ALIGN8 float x;
	ALIGN8 float y;
};

struct Rect
{
	ALIGN8 float width;
	ALIGN8 float height;
};

struct Color
{
	int r;
	int g;
	int b;
	int a;
};

static_assert(sizeof(Vector3) == 24, "");

#pragma region Custom

struct MenuOption
{
	MenuOptionType type;
	string text;
	string key;
	json params;
};

struct MenuOptionParameter 
{
	MenuOptionParameterType type;
	string name;
};

struct SubmenuData
{
	string title;
	string key;
	std::vector<MenuOption> options;
};

struct Hotkey
{
	string name;
	int keyboardKey;
	Hash controllerControl;
	Hash controllerControlModifier;
	MenuOptionType type;
	string key;
	int action;
	json value;
};

struct NearbyEntities {
	int size;
	int64_t entities[100];
};

struct OptionToSave {
	MenuOptionType type;
	string key;
};

struct WeaponData {
	string name;
	string model;
};

#pragma endregion

#pragma region Operator overloads

inline Vector3 operator+ (Vector3 lhs, Vector3 rhs)
{
	return {
		lhs.x + rhs.x,
		lhs.y + rhs.y,
		lhs.z + rhs.z
	};
}

inline Vector3 operator- (Vector3 lhs, Vector3 rhs)
{
	return {
		lhs.x - rhs.x,
		lhs.y - rhs.y,
		lhs.z - rhs.z
	};
}

inline Vector3 operator* (Vector3 lhs, Vector3 rhs)
{
	return {
		lhs.x * rhs.x,
		lhs.y * rhs.y,
		lhs.z * rhs.z
	};
}

inline Vector3 operator+ (Vector3 lhs, float rhs)
{
	return {
		lhs.x + rhs,
		lhs.y + rhs,
		lhs.z + rhs
	};
}

inline Vector3 operator- (Vector3 lhs, float rhs)
{
	return {
		lhs.x - rhs,
		lhs.y - rhs,
		lhs.z - rhs
	};
}

inline Vector3 operator* (Vector3 lhs, float rhs)
{
	return {
		lhs.x * rhs,
		lhs.y * rhs,
		lhs.z * rhs
	};
}

inline bool operator== ( OptionToSave lhs, OptionToSave rhs)
{
	return lhs.key == rhs.key && lhs.type == rhs.type;
}

#pragma endregion
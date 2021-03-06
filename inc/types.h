/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/
/*
* ALTERED SOURCE
* Customizable Trainer
* Copyright (C) 2020 Gu�mundur �li
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
typedef int ObjectId;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int ScrHandle;

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
	std::string text;
	std::string key;
	json params;
};

struct MenuOptionParameter 
{
	MenuOptionParameterType type;
	std::string name;
};

struct SubmenuData
{
	std::string title;
	std::string key;
	std::vector<MenuOption> options;
};

struct Hotkey
{
	std::string name;
	int keyboardKey;
	Hash controllerControl;
	Hash controllerControlModifier;
	MenuOptionType type;
	std::string key;
	int action;
	json value;
};

struct NearbyEntities {
	int size;
	int64_t entities[100];
};

struct OptionToSave {
	MenuOptionType type;
	std::string key;
};

struct WeaponData {
	std::string name;
	std::string model;
};

struct VehicleData {
	std::string name;
	std::string model;
};

struct PedData {
	std::string name;
	std::string model;
};

struct ObjectData {
	std::string name;
	std::string model;
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

inline bool operator== (const OptionToSave& lhs, const OptionToSave& rhs)
{
	return lhs.key == rhs.key && lhs.type == rhs.type;
}

inline bool operator== (const WeaponData& lhs, const WeaponData& rhs) {
	return lhs.model == rhs.model && lhs.name == rhs.name;
}

#pragma endregion

#pragma region Convert to/from json

// WeaponData

inline void to_json(json& j, const WeaponData& w) {
	j = json{ {"name", w.name}, {"model", w.model} };
}

inline void from_json(const json& j, WeaponData& w) {
	j.at("name").get_to(w.name);
	j.at("model").get_to(w.model);
}

// ObjectData

inline void to_json(json& j, const ObjectData& w) {
	j = json{ {"name", w.name}, {"model", w.model} };
}

inline void from_json(const json& j, ObjectData& w) {
	j.at("name").get_to(w.name);
	j.at("model").get_to(w.model);
}

// Vector3

inline void to_json(json& j, const Vector3& v) {
	j = json{ {"x", v.x}, {"y", v.y}, {"z", v.z} };
}

inline void from_json(const json& j, Vector3& v) {
	j.at("x").get_to(v.x);
	j.at("y").get_to(v.y);
	j.at("z").get_to(v.z);
}

#pragma endregion
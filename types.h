#pragma once

#include <windows.h>

typedef DWORD Void;
typedef DWORD Any;
typedef DWORD uint;
typedef DWORD Hash;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
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
typedef int INT, ScrHandle;
typedef std::string string;

struct Vector3
{
	float x;
	float y;
	float z;
};

struct Vector2
{
	float x;
	float y;
};

struct Color
{
	int r;
	int g;
	int b;
	int a;
};


// MARK: Custom

// MARK: Enums
enum class MenuOptionType {
	Action,
	Toggle,
	Sub
};

struct MenuOption
{
	MenuOptionType type;
	string text;
	string key;
};

struct SubmenuData
{
	string title;
	std::vector<MenuOption> options;
};
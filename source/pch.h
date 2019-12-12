// pch.h: is a precompiled header file
// Files below is compiling only once, so the compilation time is significantly reduces.
// Don't include here files, which you change oftenly.

#ifndef PCH_H
#define PCH_H

// Add here header files for precompilation
#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <cstdint>
#include <vector>
#include <map>
#include <any>
#include <regex>
#include <functional>
#include "core/Hash.h"
#include "core/alt-log.h"
#include "types.h"
#include "enums.h"
#include "natives.h"
#include "Game.h"
#include "Ped.h"
#include "Player.h"
#include "Vehicle.h"
#include "json.hpp"

using json = nlohmann::json;
using namespace alt;

#define DLL_EXPORT __declspec(dllexport)

#endif //PCH_H

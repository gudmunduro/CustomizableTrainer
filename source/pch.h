﻿// pch.h: is a precompiled header file
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
#include <optional>
#include <functional>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "core/Hash.h"
#include "types.h"
#include "enums.h"
#include "natives.h"
#include "Game.h"
#include "Entity.h"
#include "Object.h"
#include "Ped.h"
#include "Player.h"
#include "Vehicle.h"
#include "json.hpp"
#include "TaskQueue.h"
#include "FloatAnimation.h"

using json = nlohmann::json;

#define DLL_EXPORT __declspec(dllexport)

#endif //PCH_H

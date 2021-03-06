/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <windows.h>

#define IMPORT __declspec(dllimport)

/* keyboard */

// DWORD key, WORD repeats, BYTE scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow
typedef void(*KeyboardHandler)(DWORD, WORD, BYTE, BOOL, BOOL, BOOL, BOOL);

// Register keyboard handler
// must be called on dll attach
IMPORT void keyboardHandlerRegister(KeyboardHandler handler);

// Unregister keyboard handler
// must be called on dll detach
IMPORT void keyboardHandlerUnregister(KeyboardHandler handler);

/* scripts */

IMPORT void scriptWait(DWORD time);
IMPORT void scriptRegister(HMODULE module, void(*LP_SCRIPT_MAIN)());
IMPORT void scriptRegisterAdditionalThread(HMODULE module, void(*LP_SCRIPT_MAIN)());
IMPORT void scriptUnregister(HMODULE module);
IMPORT void scriptUnregister(void(*LP_SCRIPT_MAIN)()); // deprecated

IMPORT void nativeInit(UINT64 hash);
IMPORT void nativePush64(UINT64 val);
IMPORT PUINT64 nativeCall();

static void WAIT(DWORD time) { scriptWait(time); }
static void WAIT2(DWORD time) { auto endTime = GetTickCount() + time; while (GetTickCount() < time) WAIT(1); }
static void TERMINATE() { WAIT(MAXDWORD); }

// Returns pointer to global variable
// make sure that you check game version before accessing globals because
// ids may differ between patches
IMPORT UINT64 *getGlobalPtr(int globalId);

/* world */

// Get entities from internal pools
// return value represents filled array elements count
// can be called only in the same thread as natives
IMPORT int worldGetAllVehicles(int *arr, int arrSize);
IMPORT int worldGetAllPeds(int *arr, int arrSize);
IMPORT int worldGetAllObjects(int *arr, int arrSize);
IMPORT int worldGetAllPickups(int *arr, int arrSize);

/* misc */

// Returns base object pointer using it's script handle
// make sure that you check game version before accessing object fields because
// offsets may differ between patches
IMPORT BYTE *getScriptHandleBaseAddress(int handle);

enum eGameVersion : int
{
	VER_AUTO,
	VER_1_0_1207_60_RGS,
	VER_1_0_1207_69_RGS,

	VER_SIZE,
	VER_UNK = -1
};

template<typename R> R getMultilayerPointer(void* base, std::vector<DWORD>& offsets)
{
	DWORD64 addr = (UINT64)base;
	if (!addr)
		return NULL;
	auto numOffsets = offsets.size();

	for (auto i = 0; i < numOffsets - 1; i++)
	{
		addr = *(UINT64*)(addr + offsets[i]);
		if (!addr)
			return NULL;
	}
	addr += offsets[numOffsets - 1];
	return (R)addr;
}

IMPORT eGameVersion getGameVersion();

template <typename Enumeration>
auto enumToInt(Enumeration const value)
-> typename std::underlying_type<Enumeration>::type
{
	return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

template <typename Enumeration>
auto intToEnum(int value)
-> typename Enumeration
{
	return static_cast<Enumeration>(value);
}

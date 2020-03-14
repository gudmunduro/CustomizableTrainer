/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

class XboxControl {
public:
	static inline const int INPUT_FRONTEND_DOWN = 97156178;
	static inline const int INPUT_FRONTEND_UP = 1662638961;
	static inline const int INPUT_FRONTEND_PAD_DOWN = 416407838;
	static inline const int INPUT_FRONTEND_PAD_UP = 1714166746;
	static inline const int INPUT_FRONTEND_PAD_LEFT = 575419516;
	static inline const int INPUT_FRONTEND_PAD_RIGHT = 2362840370;
	static inline const int INPUT_FRONTEND_LEFT = 2791226036;
	static inline const int INPUT_FRONTEND_RIGHT = 3736290067;
	static inline const int INPUT_FRONTEND_RDOWN = 1463068996;
	static inline const int INPUT_FRONTEND_RUP = 3621677854;
	static inline const int INPUT_FRONTEND_RLEFT = 959670863;
	static inline const int INPUT_FRONTEND_RRIGHT = 1531509048;
	static inline const int INPUT_FRONTEND_LDOWN = 2595139801;
	static inline const int INPUT_FRONTEND_LUP = 3861192820;
	static inline const int INPUT_FRONTEND_LLEFT = 493286666;
	static inline const int INPUT_FRONTEND_LRIGHT = 915256155;
	static inline const int INPUT_FRONTEND_AXIS_X = 4216773979;
	static inline const int INPUT_FRONTEND_AXIS_Y = 152139984;
	static inline const int INPUT_FRONTEND_RIGHT_AXIS_X = 1025725594;
	static inline const int INPUT_FRONTEND_RIGHT_AXIS_Y = 3946918111;
	static inline const int INPUT_FRONTEND_PAUSE = 3626896338;
	static inline const int INPUT_FRONTEND_PAUSE_ALTERNATE = 1250966545;
	static inline const int INPUT_FRONTEND_ACCEPT = 3350541322;
	static inline const int INPUT_FRONTEND_CANCEL = 359624985;
	static inline const int INPUT_FRONTEND_X = 1840825903;
	static inline const int INPUT_FRONTEND_Y = 2080465600;
	static inline const int INPUT_FRONTEND_LB = 3901091606;
	static inline const int INPUT_FRONTEND_RB = 398377320;
	static inline const int INPUT_FRONTEND_LT = 1360019509;
	static inline const int INPUT_FRONTEND_RT = 1877832124;
	static inline const int INPUT_FRONTEND_LS = 1137550768;
	static inline const int INPUT_FRONTEND_RS = 2107936042;
};

const Hash allControls[24] = {
	XboxControl::INPUT_FRONTEND_DOWN,
	XboxControl::INPUT_FRONTEND_UP,
	XboxControl::INPUT_FRONTEND_LEFT,
	XboxControl::INPUT_FRONTEND_RIGHT,
	XboxControl::INPUT_FRONTEND_RDOWN,
	XboxControl::INPUT_FRONTEND_RUP,
	XboxControl::INPUT_FRONTEND_RLEFT,
	XboxControl::INPUT_FRONTEND_RRIGHT,
	XboxControl::INPUT_FRONTEND_AXIS_X,
	XboxControl::INPUT_FRONTEND_AXIS_Y,
	XboxControl::INPUT_FRONTEND_RIGHT_AXIS_X,
	XboxControl::INPUT_FRONTEND_RIGHT_AXIS_Y,
	XboxControl::INPUT_FRONTEND_PAUSE,
	XboxControl::INPUT_FRONTEND_PAUSE_ALTERNATE,
	XboxControl::INPUT_FRONTEND_ACCEPT,
	XboxControl::INPUT_FRONTEND_CANCEL,
	XboxControl::INPUT_FRONTEND_X,
	XboxControl::INPUT_FRONTEND_Y,
	XboxControl::INPUT_FRONTEND_LB,
	XboxControl::INPUT_FRONTEND_RB,
	XboxControl::INPUT_FRONTEND_LT,
	XboxControl::INPUT_FRONTEND_RT,
	XboxControl::INPUT_FRONTEND_LS,
	XboxControl::INPUT_FRONTEND_RS
};

enum class MenuControl {
	MenuOptionPress,
	MenuUp,
	MenuDown,
	MenuGoBack,
	MenuOpen,
	MenuAdjustValueDown,
	MenuAdjustValueUp,
	MenuEditModeEnter,
	MenuEditModeExit,
	MenuEditModeExitAndSave,
	MenuEditModeMoveOptionn,
	MenuEditModeAddOption,
	MenuEditModeEditOption,
	MenuEditModeDeleteOption
};

enum class FunctionControl {
	PlayerRun,
	HorseJump,
	HorseFlyUp,
	HorseFlyDown,
	BindBoost,
	BoatFlyModeAccelerate,
	BoatFlyModeDecelerate,
	BoatFlyModeFlyUp,
	BoatFlyModeUp,
	BoatFlyModeDown,
	BoatFlyModeLeft,
	BoatFlyModeRight,
	BoatFlyModeYawLeft,
	BoatFlyModeYawRight,
	FreecamSpeedMode,
	FreecamMoveForward,
	FreecamMoveBackward,
	FreecamMoveLeft,
	FreecamMoveRight,
	SpawnerPitchUp,
	SpawnerPitchDown,
	SpawnerRollRight,
	SpawnerRollLeft,
	SpawnerSelectEntity,
	SpawnerCopyEntity
};

class Controls
{
public:
	static bool IsMenuControlPressed(MenuControl control);
	static bool IsHoldingMenuControl(MenuControl control);
	static bool IsHotkeyPressed(Hotkey hotkey);
	static bool IsUsingController();
	static void SetMenuControlsEnabled(bool value);
	static bool IsFunctionControlPressed(FunctionControl control);
	static bool IsFunctionControlJustReleased(FunctionControl control);
	static void CanceMenuControlslForThisFrame();
	static void ClearHotkeysPressed();
	static void Tick();
	static std::string GeyStringValueForKey(int key);
	static std::string GetStringValueForControl(Hash control);
	static std::string ControlStringFromHash(Hash control);
private:
	static inline bool shouldCancelForThisFrame = false;
	static inline std::vector<DWORD> hotkeysPressed;
};


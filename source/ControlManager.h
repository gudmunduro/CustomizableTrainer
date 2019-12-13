#pragma once
#include "pch.h"

class XboxControl {
public:
	static inline const int INPUT_FRONTEND_DOWN = 97156178;
	static inline const int INPUT_FRONTEND_UP = 1662638961;
	static inline const int INPUT_FRONTEND_LEFT = 2791226036;
	static inline const int INPUT_FRONTEND_RIGHT = 3736290067;
	static inline const int INPUT_FRONTEND_RDOWN = 1463068996;
	static inline const int INPUT_FRONTEND_RUP = 3621677854;
	static inline const int INPUT_FRONTEND_RLEFT = 959670863;
	static inline const int INPUT_FRONTEND_RRIGHT = 1531509048;
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
	MenuEditModeDeleteOption
};

enum class FunctionControl {
	PlayerRun,
	HorseJump,
	HorseFlyUp,
	HorseFlyDown,
	BindBoost
};

class ControlManager
{
public:
	static bool IsMenuControlPressed(MenuControl control);
	static bool IsHoldingMenuControl(MenuControl control);
	static bool IsHotkeyPressed(Hotkey hotkey);
	static bool IsUsingController();
	static void EnableMenuOpenControls();
	static void EnableMenuControls();
	static bool IsFunctionControlPressed(FunctionControl control);
	static bool IsFunctionControlJustReleased(FunctionControl control);
	static void CanceMenuControlslForThisFrame();
	static void Tick();
	static string ControlStringFromHash(Hash control);
private:
	static inline bool shouldCancelForThisFrame = false;
};


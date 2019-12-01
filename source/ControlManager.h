#pragma once
#include "pch.h"

class XboxControl {
public:
	static inline int INPUT_FRONTEND_DOWN = 97156178;
	static inline int INPUT_FRONTEND_UP = 1662638961;
	static inline int INPUT_FRONTEND_LEFT = 2791226036;
	static inline int INPUT_FRONTEND_RIGHT = 3736290067;
	static inline int INPUT_FRONTEND_RDOWN = 1463068996;
	static inline int INPUT_FRONTEND_RUP = 3621677854;
	static inline int INPUT_FRONTEND_RLEFT = 959670863;
	static inline int INPUT_FRONTEND_RRIGHT = 1531509048;
	static inline int INPUT_FRONTEND_AXIS_X = 4216773979;
	static inline int INPUT_FRONTEND_AXIS_Y = 152139984;
	static inline int INPUT_FRONTEND_RIGHT_AXIS_X = 1025725594;
	static inline int INPUT_FRONTEND_RIGHT_AXIS_Y = 3946918111;
	static inline int INPUT_FRONTEND_PAUSE = 3626896338;
	static inline int INPUT_FRONTEND_PAUSE_ALTERNATE = 1250966545;
	static inline int INPUT_FRONTEND_ACCEPT = 3350541322;
	static inline int INPUT_FRONTEND_CANCEL = 359624985;
	static inline int INPUT_FRONTEND_X = 1840825903;
	static inline int INPUT_FRONTEND_Y = 2080465600;
	static inline int INPUT_FRONTEND_LB = 3901091606;
	static inline int INPUT_FRONTEND_RB = 398377320;
	static inline int INPUT_FRONTEND_LT = 1360019509;
	static inline int INPUT_FRONTEND_RT = 1877832124;
	static inline int INPUT_FRONTEND_LS = 1137550768;
	static inline int INPUT_FRONTEND_RS = 2107936042;
};

enum class MenuControl {
	MenuOptionPress,
	MenuUp,
	MenuDown,
	MenuGoBack,
	MenuOpen,
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
	BindBoost
};

class ControlManager
{
public:
	static bool IsMenuControlPressed(MenuControl control);
	static bool IsUsingController();
	static void EnableMenuOpenControls();
	static void EnableMenuControls();
	static bool IsFunctionControlPressed(FunctionControl control);
	static bool IsFunctionControlJustReleased(FunctionControl control);
	static void CanceMenuControlslForThisFrame();
	// MARK: Events
	static void Tick();
private:
	static inline bool shouldCancelForThisFrame = false;
};


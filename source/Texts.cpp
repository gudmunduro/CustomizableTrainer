#include "pch.h"
#include "Texts.h"
#include "CustomBullets.h"

#pragma region On value change events

void Texts::OnBulletTypeValueChange(int from, int to)
{
	switch (to) {
	case 0:
		CustomBulletController::bulletType = CustomBulletType::Explosion;
		break;
	case 1:
		CustomBulletController::bulletType = CustomBulletType::LargeExplosion;
		break;
	case 2:
		CustomBulletController::bulletType = CustomBulletType::Fountain;
		break;
	case 3:
		CustomBulletController::bulletType = CustomBulletType::Gas;
		break;
	case 4:
		CustomBulletController::bulletType = CustomBulletType::Lightning;
		break;
	case 5:
		CustomBulletController::bulletType = CustomBulletType::Fire;
		break;
	case 6:
		CustomBulletController::bulletType = CustomBulletType::LargeFire;
		break;
	case 7:
		CustomBulletController::bulletType = CustomBulletType::Teleport;
		break;
	case 8:
		CustomBulletController::bulletType = CustomBulletType::Delete;
		break;
	case 9:
		CustomBulletController::bulletType = CustomBulletType::WaterHydrant;
		break;
	case 10:
		CustomBulletController::bulletType = CustomBulletType::Moonshine;
		break;
	}
}

void Texts::OnSnowCoverageTypeChange(int from, int to)
{
	switch (to) {
		case 0: GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0); break;
		case 1: GRAPHICS::_SET_SNOW_COVERAGE_TYPE(2); break;
		case 2: GRAPHICS::_SET_SNOW_COVERAGE_TYPE(3); break;
	}
}

#pragma endregion

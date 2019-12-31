#include "pch.h"
#include "CustomBullets.h"
#include "GameplayCamera.h"
#include "Raycast.h"

CustomBulletController::CustomBulletController(CustomBulletType type) : type(type)
{
}

// MARK: Bullet hit events

void CustomBulletController::OnBulletHitForExplosion(Vector3 pos)
{
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 0, 100.0f, true, false, true);
}

void CustomBulletController::OnBulletHitForLightning(Vector3 pos)
{
	GAMEPLAY::_FORCE_LIGHTNING_FLASH_AT_COORDS(pos.x, pos.y, pos.z);
}

void CustomBulletController::OnBulletHitForFire(Vector3 pos)
{
	FIRE::START_SCRIPT_FIRE(pos.x, pos.y, pos.z, 25, true, true, "", 10.0f, 0);
}

void CustomBulletController::OnBulletHitForForestFire(Vector3 pos)
{
	for (int x = pos.x - 5.0f; x < pos.x + 5.0f; x += 1.0f)
	{
		for (int y = pos.y - 5.0f; y < pos.y + 5.0f; y += 1.0f)
		{
			FIRE::START_SCRIPT_FIRE(x, y, pos.z, 25, true, true, "", 10.0f, 0);
		}
	}
}

// MARK: Other events

void CustomBulletController::PlayerDidShoot()
{
	Player player;

	if (player.IsShooting())
	{
		EntityId target;
		Vector3& camPos = GameplayCamera::Position();
		Vector3& camDir = GameplayCamera::DirectionFromScreenCentre();

		auto& ray = RaycastResult::Raycast(camPos, camDir, 15000.0f, IntersectOptions::Everything, player.GetPedId());

		if (ray.DidHitAnything()) {
			auto hitPos = ray.HitCoords();
			
			switch (type) {
				case CustomBulletType::Explosion:
					OnBulletHitForExplosion(hitPos);
					break;
				case CustomBulletType::Lightning:
					OnBulletHitForLightning(hitPos);
					break;
				case CustomBulletType::Fire:
					OnBulletHitForFire(hitPos);
					break;
			}
		}
	}
}

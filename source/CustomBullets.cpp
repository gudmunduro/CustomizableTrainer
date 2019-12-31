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

void CustomBulletController::OnBulletHitForLargeExplosion(Vector3 pos)
{
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 0, 100.0f, true, false, true);
}

void CustomBulletController::OnBulletHitForGas(Vector3 pos)
{
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 35, 100.0f, true, false, true);
}

void CustomBulletController::OnBulletHitForFountain(Vector3 pos)
{
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 10, 100.0f, true, false, true);
}

void CustomBulletController::OnBulletHitForLightning(Vector3 pos)
{
	GAMEPLAY::_FORCE_LIGHTNING_FLASH_AT_COORDS(pos.x, pos.y, pos.z);
}

void CustomBulletController::OnBulletHitForFire(Vector3 pos)
{
	FIRE::START_SCRIPT_FIRE(pos.x, pos.y, pos.z, 25, true, true, "", 10.0f, 0);
}

void CustomBulletController::OnBulletHitForLargeFire(Vector3 pos)
{
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 15, 100.0f, true, false, true);
}

void CustomBulletController::OnBulletHitForForestFire(Vector3 pos)
{
	for (int x = pos.x - 40.0f; x < pos.x + 40.0f; x += 4.0f)
	{
		for (int y = pos.y - 40.0f; y < pos.y + 40.0f; y += 4.0f)
		{
			FIRE::ADD_EXPLOSION(x, y, pos.z, 15, 100.0f, true, false, true);
			WAIT(1);
			// FIRE::START_SCRIPT_FIRE(x, y, pos.z, 25, true, true, "", 10.0f, 0);
		}
	}
}

int explosionTypeTest = 8;

void CustomBulletController::OnBulletHitForWaterHydrant(Vector3 pos)
{
	Game::PrintSubtitle(std::to_string(explosionTypeTest));
	FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, explosionTypeTest, 100.0f, true, false, true);
	explosionTypeTest++;
}

void CustomBulletController::OnBulletHitForTeleport(Vector3 pos)
{
	Player player;

	if (player.IsOnMount())
		player.Mount().SetCoords(pos);
	else if (player.IsInVehicle())
		player.CurrentVehicle().SetCoords(pos);
	else
		player.SetCoords(pos);
}

void CustomBulletController::OnBulletHitForDelete(EntityId entity)
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, false);
	ENTITY::DELETE_ENTITY(&entity);
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

		if (ray.DidHitEntity()) {
			auto hitEntity = ray.HitEntity();

			switch (type) {
				case CustomBulletType::Delete:
					OnBulletHitForDelete(hitEntity);
					return;
			}
		}

		if (ray.DidHitAnything()) {
			auto hitPos = ray.HitCoords();
			
			switch (type) {
				case CustomBulletType::Explosion:
					OnBulletHitForExplosion(hitPos);
					return;
				case CustomBulletType::LargeExplosion:
					OnBulletHitForLargeExplosion(hitPos);
					return;
				case CustomBulletType::Gas:
					OnBulletHitForGas(hitPos);
					return;
				case CustomBulletType::Lightning:
					OnBulletHitForLightning(hitPos);
					return;
				case CustomBulletType::Fire:
					OnBulletHitForFire(hitPos);
					return;
				case CustomBulletType::LargeFire:
					OnBulletHitForLargeFire(hitPos);
					return;
				case CustomBulletType::ForestFire:
					OnBulletHitForForestFire(hitPos);
					return;
				case CustomBulletType::Teleport:
					OnBulletHitForTeleport(hitPos);
					return;
				case CustomBulletType::WaterHydrant:
					OnBulletHitForWaterHydrant(hitPos);
					return;
			}
		}
	}
}
#pragma once

enum class CustomBulletType
{
	Explosion,
	LargeExplosion,
	Lightning,
	Teleport,
	Fountain,
	Gas,
	Moonshine,
	Fire,
	LargeFire,
	ForestFire,
	Delete,
	WaterHydrant
};

class CustomBulletController
{
public:
	static void OnBulletHitForExplosion(Vector3 pos);
	static void OnBulletHitForLargeExplosion(Vector3 pos);
	static void OnBulletHitForGas(Vector3 pos);
	static void OnBulletHitForMoonshine(Vector3 pos);
	static void OnBulletHitForFountain(Vector3 pos);
	static void OnBulletHitForLightning(Vector3 pos);
	static void OnBulletHitForFire(Vector3 pos);
	static void OnBulletHitForLargeFire(Vector3 pos);
	static void OnBulletHitForForestFire(Vector3 pos);
	static void OnBulletHitForWaterHydrant(Vector3 pos);
	static void OnBulletHitForTeleport(Vector3 pos);
	static void OnBulletHitForDelete(EntityId entity);

	static void PlayerDidShoot();

	static void Tick();

	static inline CustomBulletType bulletType = CustomBulletType::Explosion;
};


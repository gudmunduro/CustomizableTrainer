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

enum class CustomBulletType
{
	Explosion = 1,
	LargeExplosion = 2,
	Lightning = 3,
	Teleport = 4,
	Fountain = 5,
	Gas = 6,
	Moonshine = 7,
	Fire = 8,
	LargeFire = 9,
	ForestFire = 10,
	Delete = 11,
	WaterHydrant = 12
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


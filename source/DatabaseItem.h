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

namespace Spawner {
	class DatabaseItem {
	public:
		DatabaseItem(EntityId entityId, std::string model);

		std::string model;
		EntityId entityId;

		virtual void SetInvincible(bool enabled);
		virtual void SetVisible(bool visible);
		virtual void SetDynamic(bool dynamic);
		virtual void SetCollisionEnabled(bool enabled);
		virtual void SetFrozen(bool frozen);
		virtual void SetGravityEnabled(bool gravityEnabled);

		bool IsInvincible();
		bool IsVisible();
		bool IsDynamic();
		bool IsCollisionEnabled();
		bool IsFrozen();
		bool IsGravityEnabled();

	protected:
		// Options
		bool isInvincible = false;
		bool isVisible = true;
		bool isDynamic = true;
		bool isCollisionEnabled = true;
		bool isFrozen = false;
		bool isGravityEnabled = true;

	private:
		Entity entity;
	};

	class PedDatabaseItem
		: public DatabaseItem {
	public:
		PedDatabaseItem(PedId pedId, std::string model)
			: DatabaseItem(pedId, model), ped(pedId), isBodyguard(false) {}

		void SetBodyguard(bool toggle);

		bool IsBodyguard();

		std::vector<WeaponData> weapons;
		Ped ped;
	private:
		bool isBodyguard;
	};

	class VehicleDatabaseItem
		: public DatabaseItem {
	public:
		VehicleDatabaseItem(VehicleId vehicle, std::string model)
			: DatabaseItem(vehicle, model) {}

	};

	class ObjectDatabaseItem
		: public DatabaseItem {
	public:
		ObjectDatabaseItem(ObjectId object, std::string model);

	};
}

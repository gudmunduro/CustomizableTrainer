#pragma once
#include "pch.h"

namespace Spawner {

#pragma region Database

	class Database {
	public:
		void AddObject(Object object);
		void AddVehicle(Vehicle vehicle);
		void AddPed(Ped ped);

		void SpawnObject(Hash model, Vector3 position, float rotation);
		void SpawnVehicle(Hash model, Vector3 position, float rotation);
		void SpawnPed(Hash model, Vector3 position, float rotation);
	private:
		std::vector<Object> objects;
		std::vector<Vehicle> vehicles;
		std::vector<Ped> peds;
	};

#pragma endregion

#pragma region Camera

	class Camera {

	};

#pragma endregion

}

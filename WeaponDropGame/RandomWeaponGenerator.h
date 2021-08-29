#pragma once
#include <vector>
#include "RandomInteger.h"
#include "PistolData.h"
#include "RifleData.h"
#include "ShotgunData.h"

namespace ProfEmanuel {
	class RandomWeaponGenerator {
	private:
		std::vector<WeaponData*> vecWeaponData;
		RandomInteger randomInteger;

		WeaponData* Generate() {
			int n = randomInteger.GetInteger(0, 2);
			int weaponIndex = vecWeaponData.size();

			std::cout << std::endl;
			std::cout << "Constructing WeaponData " << weaponIndex << std::endl;

			if (n == 0) {
				PistolData* pistolData = new PistolData();
				return pistolData;
			}
			else if (n == 1) {
				ShotgunData* shotgunData = new ShotgunData();
				return shotgunData;
			}
			else if (n == 2) {
				RifleData* rifleData = new RifleData();
				return rifleData;
			}
		}

	public:
		RandomWeaponGenerator() {
			std::cout << "Constructing RandomWeaponGenerator." << std::endl;
		}

		~RandomWeaponGenerator() {
			//deallocate memory of vecWeaponData
			std::cout << std::endl;
			std::cout << "Destructing RandomWeaponGenerator." << std::endl;

			for (int i = 0; i < vecWeaponData.size(); i++) {
				int n = vecWeaponData[i]->GetWeaponID();

				std::cout << std::endl;
				std::cout << "WeaponData address: " << vecWeaponData[i] << std::endl;

				delete vecWeaponData[i];
			}
		}

		WeaponData* GetWeaponDrop() {
			WeaponData* data = Generate();

			int weaponIndex = vecWeaponData.size();
			data->InitializeWeaponData(weaponIndex);
			data->ToggleInitialized();
			vecWeaponData.push_back(data);

			std::cout << "weapon address: " << data << std::endl;

			return data;
		}
	};
}

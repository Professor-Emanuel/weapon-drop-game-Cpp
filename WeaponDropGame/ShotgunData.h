#pragma once
#include "WeaponData.h"
#include "ShotgunRender.h"

namespace ProfEmanuel {
	class ShotgunData :public WeaponData {
	public:
		~ShotgunData() override{
			std::cout << "Destructing Shotgun data: " << weaponID << std::endl;
			delete itemRender;
		}

		void InitializeWeaponData(int someIndex) override {
			SetWeaponID(someIndex);

			if (IsInitialized() == false) {
				std::cout << "Constructing ShotgunRender: " << weaponID << std::endl;
				itemRender = new ShotgunRender();
				itemRender->SetRenderID(weaponID);
			}
		}

		void Render() {
			itemRender->ShowImage();
		}
	};
}

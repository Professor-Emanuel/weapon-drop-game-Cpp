#pragma once
#include "WeaponData.h"
#include "RifleRender.h"
namespace ProfEmanuel {
	class RifleData :public WeaponData {
		~RifleData() override {
			std::cout << "Destructing RifleData." << weaponID << std::endl;
			delete itemRender;
		}

		void InitializeWeaponData(int someIndex) override {
			SetWeaponID(someIndex);

			if (isInitialized == false) {
				std::cout << "Constructing RifleRender: " << weaponID << std::endl;
				itemRender = new RifleRender();
				itemRender->SetRenderID(weaponID);
			}
		}

		void Render() {
			itemRender->ShowImage();
		}
	};
}

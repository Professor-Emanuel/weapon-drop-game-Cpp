#pragma once
#include "WeaponData.h"
#include "PistolRender.h"

namespace ProfEmanuel {
	class PistolData :public WeaponData {
	public:
		~PistolData() override {
			std::cout << "Destructing PistolData. " << weaponID <<std::endl;
			delete itemRender;
		}

		void InitializeWeaponData(int someIndex) override {
			SetWeaponID(someIndex);

			if (isInitialized == false) {
				std::cout << "Constructing PistolRender: " << weaponID << std::endl;
				itemRender = new PistolRender();
				itemRender->SetRenderID(weaponID);
			}
		}

		void Render() {
			itemRender->ShowImage();
		}
	};

}

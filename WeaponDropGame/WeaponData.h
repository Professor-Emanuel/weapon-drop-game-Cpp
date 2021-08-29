#pragma once
#include "ItemRender.h"
//ModsData.h not implemented yet!!!
//#include "ModsData.h"

namespace ProfEmanuel {
	class WeaponData {
	protected:
		int weaponID = 0;
		bool isInitialized = false;
		
		ItemRender* itemRender = nullptr;
		//ModsRender *modData = nullptr;

	public:
		virtual void InitializeWeaponData(int someIndex) = 0;

		virtual ~WeaponData() {

		}

		void Render() {
			itemRender->ShowImage();
		}

		void SetWeaponID(int someIndex) {
			weaponID = someIndex;
		}

		int GetWeaponID() {
			return weaponID;
		}

		bool IsInitialized() {
			return isInitialized;
		}

		void ToggleInitialized() {
			isInitialized = true;
		}
	};
}

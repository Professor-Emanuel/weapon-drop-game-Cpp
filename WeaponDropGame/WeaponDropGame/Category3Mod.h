#pragma once
#include "ModsData.h"

namespace ProfEmanuel {
	class Category3Mod :public ModsData {
		void InitializeModifierData() override {
			defaultModifierCount = 3;
			maxBonusMods = 3;
			modClass = "Legendary";
		}
	};
}
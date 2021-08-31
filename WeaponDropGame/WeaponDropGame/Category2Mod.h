#pragma once
#include "ModsData.h"

namespace ProfEmanuel {
	class Category2Mod :public ModsData {
		void InitializeModifierData() override {
			defaultModifierCount = 2;
			maxBonusMods = 1;
			modClass = "Rare";
		}
	};
}
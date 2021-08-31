#pragma once
#include "ModsData.h"

namespace ProfEmanuel {
	class Category1Mod :public ModsData {
		void InitializeModifierData() override {
			defaultModifierCount = 1;
			maxBonusMods = 0;
			modClass = "Common";
		}
	};
}
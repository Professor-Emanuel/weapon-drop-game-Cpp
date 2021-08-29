#pragma once
#include "ItemRender.h"
#include <iostream>


namespace ProfEmanuel {
	class RifleRender :public ItemRender {
	public:
		~RifleRender() override {
			std::cout << "destructing RifleRender: " << renderID << std::endl;
		}

		void ShowImage() override {
			std::cout << R"(
Here's an assault rifle.

                         .-----------------TTTT_-----_______
                       /''''''''''(______O] ----------____  \______/]_
    __...---'"""\_ --''   Q                               ___________@
|'''                   ._   _______________=---------"""""""
|                ..--''|   l L |_l   |
|          ..--''      .  /-___j '   '
|    ..--''           /  ,       '   '
|--''                /           `    \
                     L__'         \    -
                                   -    '-.
                                    '.    /
                                      '-./
)" << std::endl;
		}
	};
}

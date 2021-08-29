#pragma once
#include "PlayerInput.h"
#include "RandomWeaponGenerator.h"

namespace ProfEmanuel {
	class Game {
	public:
		void Run() {
			RandomWeaponGenerator randomWeaponGenerator;
			PlayerInput playerInput;

			char input = '0';

			while (input != 'q') {
				WeaponData* weaponData = randomWeaponGenerator.GetWeaponDrop();
				weaponData->Render();

				input = playerInput.GetInput();
			}
		}

		Game() {
			std::cout << "Constructing game.." << std::endl;
			std::cout << std::endl;
		}

		~Game() {
			std::cout << std::endl;
			std::cout << "Destructing game.." << std::endl;
		}
	};
}

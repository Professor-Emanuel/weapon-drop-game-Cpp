#pragma once
#include <iostream>
#include <random>

namespace ProfEmanuel {
	// check out https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
	class RandomInteger {
	public:
		RandomInteger()
		{
			std::cout << "Constructing randominteger." << std::endl;
			std::cout << std::endl;
		}

		~RandomInteger()
		{
			std::cout << std::endl;
			std::cout << "Destructing randominteger." << std::endl;
		}

		int GetInteger(int min, int max) {
			//device, generator & distribution can be any names, but these are more representative

			std::random_device device; //Will be used to obtain a seed for the random number engine
			std::mt19937 generator(device()); ////Standard mersenne_twister_engine seeded with device()
			std::uniform_int_distribution<int> distribution(min, max);

			return distribution(generator);
		}
	};
}

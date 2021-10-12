#include "Cat.hpp"
# define ARRAY_SIZE 5


int main() {
	{
		std::cout << "Deep Copy Test" << std::endl;
		Dog DogOne;
		Dog DogTwo = DogOne;
		std::cout << "DogOne Brain : " << DogOne.getBrain() << std::endl;
		std::cout << "DogTwo = DogOne" << std::endl;
		std::cout << "DogTwo Brain : " << DogTwo.getBrain() << std::endl;
	}
	std::cout << std::endl;
	{
		Animal*	animalArray[ARRAY_SIZE];

		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (i % 2 == 0)
				std::cout << "\e[31m";
			else
				std::cout << "\e[32m";
			if (i < ARRAY_SIZE / 2) {
				animalArray[i] = new Dog();
			}
			else {
				animalArray[i] = new Cat();
			}
			std::cout << std::endl;
		}

		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (i % 2 == 0)
				std::cout << "\e[31m";
			else
				std::cout << "\e[32m";
			delete animalArray[i];
			std::cout << std::endl;
		}
	}
}

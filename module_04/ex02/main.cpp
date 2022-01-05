#include "Cat.hpp"


int main() {
	// uncomment for compil error
	// {
	// 	Animal test;

	// 	test.makeSound();
	// }
	{
		Animal* test = new Dog();

		test->makeSound();	
		delete test;
	}
}

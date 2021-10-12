#include "Cat.hpp"


int main() {
	{
		Animal test;

		test.makeSound();
	}
	{
		Animal* test = new Dog();

		test->makeSound();	
		delete test;
	}
}

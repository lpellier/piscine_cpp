/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:57:19 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/06 15:21:32 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
public:
	virtual ~Base() {}	
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void) {
	int randomTest = 1 + std::rand() % 3;
	switch (randomTest) {
		case 1:
			std::cout << "Generated class is A" << std::endl;
			return new A;
		case 2:
			std::cout << "Generated class is B" << std::endl;
			return new B;
		case 3:
			std::cout << "Generated class is C" << std::endl;
			return new C;
		default:
			return NULL;
	}
}

void	identify(Base * p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "what" << std::endl;
}

void	identify(Base & p) {
	Base test;
	try {
		test = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		test = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		test = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {}
}

int main(void) {
	std::srand(std::time(NULL));
	Base * test = generate();
	identify(test);
	identify(*test);
	return (0);
}
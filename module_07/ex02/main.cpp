/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:49:49 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/06 15:53:35 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	Array<int> test1;
	Array<char> test2(10);
	Array<int> test3(10);

	std::cout << "Default value" << std::endl;
	std::cout << test1[0] << std::endl << std::endl;

	std::cout << "Modifying value from :" << std::endl;
	std::cout << (int)test2[5] << std::endl;
	std::cout << "to : " << std::endl;
	test2[5] = 'a';
	std::cout << (int)test2[5] << ' ' << test2[5] << std::endl;
	std::cout << std::endl;
	std::cout << "Testing exception" << std::endl;
	try {
		std::cout << test2[-1] << std::endl;
	} catch (std::exception & e) {
		std::cout << "Out of bounds" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Testing exception" << std::endl;
	try {
		std::cout << test3[11] << std::endl;
	} catch (std::exception & e) {
		std::cout << "Out of bounds" << std::endl;
	}
	std::cout << std::endl;
	
	for (unsigned int i = 0; i < test3.size(); i++)
		test3[i] = i;

	Array<int> test4(test3);
	test1 = test4;

	std::cout << "Original int array" << std::endl;
	std::cout << "Size : " << test3.size() << std::endl;
	for (unsigned int i = 0; i < test3.size(); i++)
		std::cout << test3[i] << " ";
	std::cout << std::endl;
	std::cout << "Copy constructor array" << std::endl;
	std::cout << "Size : " << test4.size() << std::endl;
	for (unsigned int i = 0; i < test4.size(); i++)
		std::cout << test4[i] << " ";
	std::cout << std::endl;
	std::cout << "Assignment operator array" << std::endl;
	std::cout << "Size : " << test1.size() << std::endl;
	for (unsigned int i = 0; i < test1.size(); i++)
		std::cout << test1[i] << " ";
	std::cout << std::endl;

	exit(0);
}
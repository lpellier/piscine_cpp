/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:57:19 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 15:38:58 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <iostream>

struct Data {
	std::string testStr;
	int			testInt;
	float		testFloat;
};

uintptr_t serialize(Data * ptr) {
	uintptr_t serialized = reinterpret_cast<uintptr_t>(ptr);

	return serialized;
}

Data * deserialize(uintptr_t raw) {
	Data * deserialized = reinterpret_cast<Data *>(raw);

	return deserialized;	
}

int main(void) {
	Data * test = new Data;
	
	test->testStr = "test";
	test->testInt = 123;
	test->testFloat = 1.234;

	uintptr_t serialized = serialize(test);
	std::cout << "ORIGINAL DATA STRUCT" << std::endl;
	std::cout << test->testStr << " " << test->testInt << " " <<  test->testFloat << std::endl;
	std::cout << test << std::endl << std::endl;
	std::cout << "UINTPTR_T SERIALIZED DATA STRUCT" << std::endl;
	std::cout << serialized << std::endl << std::endl;
	Data * deserialized = deserialize(serialized);
	std::cout << "DESERIALIZED DATA STRUCT" << std::endl;
	std::cout << deserialized->testStr << " " <<  test->testInt << " " <<  test->testFloat << std::endl;
	std::cout << deserialized << std::endl;
	return (0);
}
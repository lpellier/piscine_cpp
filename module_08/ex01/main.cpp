/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:38:44 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/06 16:41:59 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <time.h>

void	randomNbr(int & nbr) {
	nbr = rand() % 10000 + 1;
}

void	printSmt(int & nbr) {
	std::cout << nbr << std::endl;
}

// void	test(int nbr) {
// 	std::cout << nbr << std::endl;
// }

int main(void) {
	std::vector<int> vectorToBeAdded(10000);
	Span spanman(10000);
	
	std::srand(time(nullptr));
	std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), randomNbr);
	// std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), test);

	spanman.addNumber(vectorToBeAdded.begin(), vectorToBeAdded.end());

	// spanman.addNumber(*(vectorToBeAdded.begin() + 0));
	// spanman.addNumber(*(vectorToBeAdded.begin() + 1));
	// spanman.addNumber(*(vectorToBeAdded.begin() + 2));
	// spanman.addNumber(*(vectorToBeAdded.begin() + 3));
	// spanman.addNumber(*(vectorToBeAdded.begin() + 4));
	// spanman.addNumber(*(vectorToBeAdded.begin() + 5));
	std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), printSmt);

	std::cout << "Shortest span : " << spanman.shortestSpan() << std::endl;
	std::cout << "Longest span : " << spanman.longestSpan() << std::endl;
}
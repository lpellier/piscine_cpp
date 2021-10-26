/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:38:44 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/25 17:36:45 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <time.h>

void	randomNbr(int & nbr) {
	nbr = rand() % 10000 + 1;
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

	spanman.addNumber(vectorToBeAdded);

	std::cout << spanman.shortestSpan() << std::endl;
	std::cout << spanman.longestSpan() << std::endl;
}
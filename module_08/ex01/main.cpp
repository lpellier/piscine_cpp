/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:38:44 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/10 19:09:22 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <time.h>

# define _NBR 15

void	randomNbr(int & nbr) {
	nbr = std::rand() % _NBR + 1;
}

void	printSmt(int & nbr) {
	std::cout << nbr << std::endl;
}

void	test(int nbr) {
	std::cout << nbr << ' ';
}

int main(void) {
	std::vector<int> vectorToBeAdded(_NBR);
	Span spanman(_NBR);
	
	std::srand(time(NULL));
	std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), randomNbr);
	std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), test);
	std::cout << std::endl;

	spanman.addNumber(vectorToBeAdded.begin(), vectorToBeAdded.end());


	// // std::for_each(vectorToBeAdded.begin(), vectorToBeAdded.end(), printSmt);

	try {
		std::cout << "Shortest span : " << spanman.shortestSpan() << std::endl;
	} catch (std::exception & e) {
		std::cout << "not enough numbers in span " << std::endl;
	}
	try {
		std::cout << "Longest span : " << spanman.longestSpan() << std::endl;	
	} catch (std::exception & e) {
		std::cout << "not enough numbers in span " << std::endl;
	}
{
	// Span sp = Span(5);
	// sp.addNumber(3);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// sp.addNumber(5);
	// sp.addNumber(17);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
}

}
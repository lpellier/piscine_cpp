/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:46:32 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 17:56:28 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	toUpper(char & c) {
	c = std::toupper(c);
}

int main(void) {
	std::string test = "alooo";
	
	std::cout << test << std::endl;
	iter(test, test.length(), toUpper);
	std::cout << test << std::endl;

	int i[5] = {1, 2, 3, 4, 5};
	iter(i, 5, printSomething);
}

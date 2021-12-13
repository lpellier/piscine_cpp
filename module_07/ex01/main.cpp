/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:46:32 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 18:56:19 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	toUpper(char & c) {
	c = std::toupper(c);
}

int main(void) {
	int	array[5] = {1, 2, 3, 4, 5};
	char	test[3] = {'a', 'b', 'c'};
	
	iter(array, 5, printSomething);
	iter(test, 3, printSomething);
	iter(test, 3, toUpper);
	iter(test, 3, printSomething);

	// int i[5] = {1, 2, 3, 4, 5};
	// iter(i, 5, printSomething);
}
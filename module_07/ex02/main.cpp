/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:49:49 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 19:25:17 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	Array<int> test1;
	Array<char> test2(10);

	std::cout << test1[0] << std::endl;
	std::cout << (int)test2[5] << std::endl;
	test2[5] = 'a';
	std::cout << (int)test2[5] << ' ' << test2[5] << std::endl;
	std::cout << test2[11] << std::endl;
	exit(0);
}
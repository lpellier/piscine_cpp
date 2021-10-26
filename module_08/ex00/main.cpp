/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:50:05 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 20:10:35 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int>		testVector(10, 0);

	testVector[5] = 6;
	std::cout << easyfind(testVector, 6) << std::endl;
	std::list<int>		testList(10, 0);

	testList.push_back(6);
	std::cout << easyfind(testList, 7) << std::endl;
}
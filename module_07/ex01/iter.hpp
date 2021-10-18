/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:40:58 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 18:06:56 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// test function templates
template<typename T>
void	printSomething(T & a) {
	std::cout << a << std::endl;
}

// iter
template<typename A, typename F>
void	iter(A & address, int len, F & function) {
	for (int i = 0; i < len; i++) {
		function(address[i]);
	}
}

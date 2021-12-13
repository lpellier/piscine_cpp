/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:40:58 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 18:44:27 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>



// iter
template<typename T>
void	iter(T * array, size_t len, void (*f)(T &)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

// test function templates
template<typename U>
void	printSomething(U & a) {
	std::cout << a << std::endl;
}
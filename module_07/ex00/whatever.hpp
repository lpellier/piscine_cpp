/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:27:40 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 17:36:44 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	swap(T & a, T & b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		min(T & a, T & b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T		max(T & a, T & b) {
	if (a > b)
		return a;
	return b;
}

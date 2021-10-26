/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:40:31 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 20:10:17 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
int		easyfind(T haystack, int needle) throw (std::exception) {
	typename T::const_iterator found = std::find(haystack.begin(), haystack.end(), needle);
	try {
		if (found != haystack.end())
			return *found;
		else
			throw std::exception();
	} catch (std::exception & e) {
		std::cout << "didn't find requested number" << std::endl;
		return -1;
	}
}

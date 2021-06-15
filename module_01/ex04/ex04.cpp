/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:45:59 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 15:51:48 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "string (str)           : " << str << std::endl;
	std::cout << "pointer (*ptr = &str)  : " << *ptr << std::endl;
	std::cout << "reference (&ref = str) : " << ref << std::endl;
	exit(0);
}
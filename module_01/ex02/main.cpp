/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:22:45 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 11:39:32 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string *	stringPTR = &str;
	std::string &	stringREF = str;

	std::cout << "address of string (&str)       : " << &str << std::endl;
	std::cout << "address of string (stringPTR)  : " << stringPTR << std::endl;
	std::cout << "address of string (&stringREF) : " << &stringREF << std::endl << std::endl;

	std::cout << "string (str)                   : " << str << std::endl;
	std::cout << "pointer (*stringPTR)           : " << *stringPTR << std::endl;
	std::cout << "reference (stringREF)          : " << stringREF << std::endl;
	exit(0);
}
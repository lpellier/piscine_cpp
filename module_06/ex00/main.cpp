/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:57:19 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/07 21:02:39 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <climits>
#include <sstream>
#include <cfloat>
#include <stdlib.h>
#include <iomanip>

// inf +inf -inf inff +inff -inff nan nanf 10 10.0f 10.f 10f 10.0 'c'

bool	isNum(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

struct typeInfo
{
	bool	_infinite;
	bool	_nan;
	bool	_decimal;
	bool	_float;
	bool	_char;
	bool	_int;
	bool	_error;

	void	init(std::string str) {
		this->_infinite = (!str.compare("inf") || !str.compare("-inf") || !str.compare("+inf") || !str.compare("inff") || !str.compare("-inff") || !str.compare("+inff"));
		this->_nan = (!str.compare("nan") || !str.compare("nanf"));
		this->_decimal = (str.find('.') != std::string::npos);
		this->_float = (str.at(str.length() - 1) == 'f' && str.compare("inf") && str.compare("-inf") && str.compare("+inf"));
		this->_char = (str.length() == 3 && str.at(0) == '\'' && str.at(2) == '\'');
		this->_int = isNum(str);
		this->_error = (!this->_infinite && !this->_nan && !this->_decimal && !this->_float && !this->_float && !this->_char && !this->_int);
	}
};

std::ostream & operator<<(std::ostream & out, struct typeInfo & src) {
	out << "debug : ";
	out << "infinite " << src._infinite << " | ";
	out << "nan " << src._nan << " | ";
	out << "decimal " << src._decimal << " | ";
	out << "float " << src._float << " | ";
	out << "char " << src._char << " | ";
	out << "int " << src._int << " | ";
	out << "error " << src._error;
	return (out);
}

int main(int ac, char **av) {
	struct typeInfo info;

	if (ac != 2) {
		std::cout << "usage : ./convert [str]" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string str = av[1];
	info.init(str);
	std::cout << info << std::endl;

	if (info._float)
		str.erase(str.end() - 1);

	long double container;
	std::istringstream ss(str);
	if (info._char)
		container = str.at(1);
	else
		ss >> container;

	// char
	std::cout << "char : ";
	if (info._infinite || info._nan || container < CHAR_MIN || container > CHAR_MAX || info._error)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(container)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(container) << '\'' << std::endl;

	// int
	std::cout << "int : ";
	if (info._infinite || info._nan || container < INT_MIN || container > INT_MAX || info._error)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(container) << std::endl;

	// float
	std::cout << "float : ";
	if (!(info._infinite || info._nan) && (container < -FLT_MAX + 1 || container > FLT_MAX || info._error))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(container) << "f" << std::endl;

	// double
	std::cout << "double : ";
	if (!(info._infinite || info._nan) && (container < -DBL_MAX + 1 || container > DBL_MAX || info._error))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(container) << std::endl;
}

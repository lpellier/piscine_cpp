/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:57:19 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/10 12:08:00 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <climits>
#include <limits>
#include <sstream>
#include <cfloat>
#include <stdlib.h>
#include <iomanip>

// inf +inf -inf inff +inff -inff nan nanf 10 10.0f 10.f 10f 10.0 'c'

// errors
// char -> impossible
// -inff +inff

bool	isNum(std::string str) {
	int i = 0;

	if (str[i] == '-')
		i++;
	while (str[i]) {
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

bool	isFloat(std::string str) {
	int i = 0;
	int point = 0;

	if (!str.compare("f"))
		return false;
	if (!str.compare("inff") || !str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (true);
	if (str[i] == '-')
		i++;
	while (str[i]) {
		if (str[i] == '.')
			point++;
		if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.')
			return false;
		i++;
	}
	if (point > 1)
		return false;
	return true;
}

struct typeInfo
{
	bool	_negative;
	bool	_infinite;
	bool	_nan;
	bool	_float;
	bool	_char;
	bool	_int;
	bool	_error;

	void	init(std::string str) {
		this->_negative = (str.at(0) == '-');
		this->_infinite = (!str.compare("inf") || !str.compare("-inf") || !str.compare("+inf") || !str.compare("inff") || !str.compare("-inff") || !str.compare("+inff"));
		this->_nan = (!str.compare("-nan") || !str.compare("-nanf") || !str.compare("nan") || !str.compare("nanf"));
		this->_float = isFloat(str);
		this->_char = (str.length() == 1);
		this->_int = isNum(str);
		this->_error = (!this->_infinite && !this->_nan && !this->_float && !this->_char && !this->_int);
		if (!str.compare(""))
			this->_error = true;
	}
};

std::ostream & operator<<(std::ostream & out, struct typeInfo & src) {
	out << "debug : ";
	out << "infinite " << src._infinite << " | ";
	out << "nan " << src._nan << " | ";
	out << "float " << src._float << " | ";
	out << "char " << src._char << " | ";
	out << "int " << src._int << " | ";
	out << "error " << src._error;
	return (out);
}

long double	str_to_ld(std::string str) {
	long double ret = 0;
	int neg = 0;
	int i = 0;

	if (str.at(0) == '-') {
		neg = 1;
		i++;
	}
	while (str[i]) {
		ret = ret * 10 + str[i] - 48;
		i++;
	}
	if (neg)
		ret *= -1;
	return ret;
}

int main(int ac, char **av) {
	struct typeInfo info;

	if (ac != 2) {
		std::cout << "usage : ./convert [str]" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string str = av[1];
	info.init(str);

	long double container;
	if (info._nan && info._negative)
		container = -std::numeric_limits<double>::quiet_NaN();
	else if (info._nan)
		container = std::numeric_limits<double>::quiet_NaN();
	else if (info._infinite && info._negative)
		container = -std::numeric_limits<double>::infinity();
	else if (info._infinite)
		container = std::numeric_limits<double>::infinity();
	else if (info._char)
		container = str.at(0);
	else {
		std::istringstream ss(str);
		ss >> container;
	}
	// std::cout << str << ' ' << container << std::endl;

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
	if (!(info._infinite || info._nan) && ((container > 0 && container < FLT_MIN) || container < -FLT_MAX + 1 || container > FLT_MAX || info._error))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(container) << "f" << std::endl;

	// double
	std::cout << "double : ";
	if (!(info._infinite || info._nan) && ((container > 0 && container < DBL_MIN) || container < -DBL_MAX + 1 || container > DBL_MAX || info._error))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(container) << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:45:50 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/04 19:26:11 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = n << this->_binaryPoint;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(n * (1 << this->_binaryPoint));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}

float	Fixed::toFloat(void) const {
	return (float)this->_fixedValue / (1 << this->_binaryPoint);
}

int		Fixed::toInt(void) const {
	return this->_fixedValue >> this->_binaryPoint;
}

std::ostream &	operator<<(std::ostream & os, const Fixed & n) {
	return os << n.toFloat();
}

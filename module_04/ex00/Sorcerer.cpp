/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:05:12 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/18 16:11:07 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("defautName"), _title("defaultTitle") {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	this->_name = src.getName();
	this->_title = src.getTitle();
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & src) {
	std::cout << "Assignment operator called" << std::endl;
	this->_name = src.getName();
	this->_title = src.getTitle();
	return *this;
}

std::string	Sorcerer::getName() const {
	return this->_name;
}

std::string	Sorcerer::getTitle() const {
	return this->_title;
}

void		Sorcerer::polymorph(Victim const & vicos) const {
	vicos.getPolymorphed();
}

std::ostream &	operator<<(std::ostream & output, Sorcerer const & sorcerer) {
	return output << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
}

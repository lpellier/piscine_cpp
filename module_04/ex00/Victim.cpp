/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:28:04 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/18 16:27:27 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("defaultName") {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;	
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const & src) {
	this->_name = src.getName();
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

std::string	Victim::getName() const {
	return this->_name;
}

Victim &	Victim::operator=(Victim const & src) {
	std::cout << "Assignment operator called" << std::endl;
	this->_name = src.getName();
	return *this;
}

void		Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &	operator<<(std::ostream & output, Victim const & victim) {
	return output << "I am " << victim.getName() << ", and I like otters!" << std::endl;
}



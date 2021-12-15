/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:19 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/15 15:32:48 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "Basic Frag";
	std::cout << "FR4G-TP " << this->_name << " : Default constructor called : hi :)" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	std::cout << "FR4G-TP " << this->_name << " : Parameter constructor called : hi :)" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->_name << " : Destructor called : frag trap only wanted to love..." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	this->_name = src.getName();
	std::cout << "FR4G-TP " << this->_name << " : Copy constructor called : hi (:" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = 30;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {
	this->_name = src.getName();
	std::cout << "FR4G-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = 30;
	return *this;
}

void		FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " : hey mister... wanna high five ??" << std::endl;
}

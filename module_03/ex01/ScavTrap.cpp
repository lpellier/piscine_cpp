/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:17 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 13:19:56 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Basic Scav";
	std::cout << "SC4V-TP " << this->_name << " : Default constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	std::cout << "SC4V-TP " << this->_name << " : Parameter constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << this->_name << " : Destructor called : scav trap only wanted to hate..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	this->_name = src.getName();
	std::cout << "SC4V-TP " << this->_name << " : Copy constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = 20;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src) {
	this->_name = src.getName();
	std::cout << "SC4V-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = 20;
	return *this;
}

void		ScavTrap::guardGate(void) {
	std::cout << "SC4V-TP " << this->_name << " is guarding the gate! That's right, he's in gate keeper mode." << std::endl;
}

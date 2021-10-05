/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:19 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 13:20:04 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Basic Clap") {
	std::cout << "CL4P-TP " << this->_name << " : Default constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "CL4P-TP " << this->_name << " : Parameter constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << this->_name << " : Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	this->_name = src.getName();
	std::cout << "CL4P-TP " << this->_name << " : Copy constructor called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src) {
	this->_name = src.getName();
	std::cout << "CL4P-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	return *this;
}

std::string	ClapTrap::getName() const {
	return (this->_name);
}

int			ClapTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

void		ClapTrap::attack(std::string const & target) const {
	std::cout << "CL4P-TP " << this->_name << " jumps in the air and takes three huge rocket launchers out of his outlet hole and fires them all at " << target << " causing " << this->_attackDamage << " damage." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= (unsigned int)this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "CL4P-TP " << this->_name << " took a hit causing " << amount << " damage !" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "CL4P-TP " << this->_name << " : \"i just wanted to looooove... *dies*\"" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	int	repairAmount = amount;
	// if (repairAmount + this->_hitPoints >= 100)
	// 	repairAmount = 100 - this->_hitPoints;
	this->_hitPoints += repairAmount;
	std::cout << "CL4P-TP " << this->_name << " was repaired for " << repairAmount << " hit points !" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:19 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 16:01:33 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Basic Fuck") {
	std::cout << "CL4P-TP " << this->_name << " : Default constructor called : claaaaaptraaaaap :)" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "CL4P-TP " << this->_name << " : Default constructor called : claaaaaptraaaaap :)" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << this->_name << " : Destructor called : clap trap only wanted to laugh..." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	this->_name = src.getName();
	std::cout << "CL4P-TP " << this->_name << " : Copy constructor called : claaaaaptraaaaap (:" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 100;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this ->_armorDamageReduction = 5;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src) {
	this->_name = src.getName();
	std::cout << "CL4P-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 100;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this ->_armorDamageReduction = 5;
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

int			ClapTrap::getLevel() const {
	return (this->_level);
}

void		ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "CL4P-TP " << this->_name << " jumps in the air and takes three huge rocket launchers out of his outlet hole and fires them all at " << target << " causing " << this->_rangedAttackDamage << " damage." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "CL4P-TP " << this->_name << " rolls over to " << target << " and slashes them with his electrical sword causing " << this->_meleeAttackDamage << " damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	int	damageTaken = (amount - this->_armorDamageReduction);
	if (damageTaken >= this->_hitPoints)
		damageTaken = this->_hitPoints;
	this->_hitPoints -= damageTaken;
	std::cout << "CL4P-TP " << this->_name << " took a hit causing " << damageTaken << " damage !" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "CL4P-TP " << this->_name << " : \"i just wanted to lauuuugh...\" *dies*" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	int	repairAmount = amount;
	if (repairAmount + this->_hitPoints >= 100)
		repairAmount = 100 - this->_hitPoints;
	this->_hitPoints += repairAmount;
	std::cout << "CL4P-TP " << this->_name << " was repaired for " << repairAmount << " hit points !" << std::endl;
}

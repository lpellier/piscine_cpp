/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:07:33 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 18:19:26 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	this->_name = "basic fuck";
	std::cout << "NIJ4-TP " << this->_name << " : Default constructor called : niiiinja!" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name) {
	this->_name = name;
	std::cout << "NIJ4-TP " << this->_name << " : Default constructor called : niiiinja!" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NIJ4-TP " << this->_name << " : Destructor called : niiiinja!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	this->_name = src.getName();
	std::cout << "NIJ4-TP " << this->_name << " : Copy constructor called : niiiinja!" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 60;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 120;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this ->_armorDamageReduction = 0;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & src) {
	this->_name = src.getName();
	std::cout << "NIJ4-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 60;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 120;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this ->_armorDamageReduction = 0;
	return *this;
}

void		NinjaTrap::meleeAttack(std::string const & target) const {
	std::cout << "NIJ4-TP " << this->_name << " slashes " << target << " with his katana causing " << this->_rangedAttackDamage << " damage." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap const & src) {
	std::cout << "NIJ4-TP " << this->_name << " takes CL4P-TP " << src.getName() << " and body slams it." << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap const & src) {
	std::cout << "NIJ4-TP " << this->_name << " takes FR4G-TP " << src.getName() << " and monkey flips it." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const & src) {
	std::cout << "NIJ4-TP " << this->_name << " takes SC4V-TP " << src.getName() << " and powerbombs it." << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const & src) {
	std::cout << "NIJ4-TP " << this->_name << " takes NIJ4-TP " << src.getName() << " and chokeslams it." << std::endl;
}

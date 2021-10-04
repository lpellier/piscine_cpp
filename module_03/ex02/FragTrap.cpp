/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:19 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 17:24:53 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "basic fuck";
	std::cout << "FR4G-TP " << this->_name << " : Default constructor called : hi :)" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	std::cout << "FR4G-TP " << this->_name << " : Default constructor called : hi :)" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->_name << " : Destructor called : frag trap only wanted to love..." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	this->_name = src.getName();
	std::cout << "FR4G-TP " << this->_name << " : Copy constructor called : hi (:" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 100;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this ->_armorDamageReduction = 5;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {
	this->_name = src.getName();
	std::cout << "FR4G-TP " << this->_name << " : Assignement operator called" << std::endl;
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[5] = {
		" spins around ",
		" winks at ",
		" lies down in front of ",
		" goes into a rage and chops ",
		" finds rocks on the ground and starts a rock collecion, then befriends "
	};

	std::string attackSequel[5] = {
		" at such a speed that his adversary explodes as he tries to comprehend the speed at which the FR4G-TP is going",
		" whick makes the target fall in love with the FR4G-TP",
		" which does nothing",
		" into a thousand little meat pieces and drinks all the blood through his adversary's skull",
		" as they also like rocks but then, as the target drops his guard, the FR4G-TP throws one pebble at them"
	};

	if (this->_energyPoints - 25 < 0) {
		std::cout << "FR4G-TP " << this->_name << " doesn't have enough energy to attack!" << std::endl;
	}
	else {
		int	randAttack = rand() % 5;
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP " << this->_name << attacks[randAttack] << target << attackSequel[randAttack] << " causing " << this->_meleeAttackDamage << " damage." << std::endl;
	 }
}

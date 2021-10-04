/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:17 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 15:57:59 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() _name("basic scav") {
	std::cout << "SC4V-TP " << this->_name << " : Default constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name) : _name(name) {
	std::cout << "SC4V-TP " << this->_name << " : Default constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << this->_name << " : Destructor called : scav trap only wanted to hate..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	this->_name = src.getName();
	std::cout << "SC4V-TP " << this->_name << " : Copy constructor called : scav trap in da house" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 50;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this ->_armorDamageReduction = 3;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src) {
	this->_name = src.getName();
	std::cout << "SC4V-TP " << this->_name << " : Assignement operator called" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 50;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this ->_armorDamageReduction = 3;
	return *this;
}

std::string	ScavTrap::getName() const {
	return (this->_name);
}

int			ScavTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int			ScavTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int			ScavTrap::getLevel() const {
	return (this->_level);
}

void		ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "SC4V-TP " << this->_name << " takes his stamp collection and throws it at " << target << " causing " << this->_rangedAttackDamage << " damage." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "SC4V-TP " << this->_name << " body slams " << target << " causing " << this->_meleeAttackDamage << " damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	int	damageTaken = (amount - this->_armorDamageReduction);
	if (damageTaken >= this->_hitPoints)
		damageTaken = this->_hitPoints;
	this->_hitPoints -= damageTaken;
	std::cout << "SC4V-TP " << this->_name << " took a hit causing " << damageTaken << " damage !" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "SC4V-TP " << this->_name << " : \"bruh\"" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	int	repairAmount = amount;
	if (repairAmount + this->_hitPoints >= this->_maxHitPoints)
		repairAmount = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += repairAmount;
	std::cout << "SC4V-TP " << this->_name << " was repaired for " << repairAmount << " hit points !" << std::endl;
}

void		ScavTrap::challengeNewcomer() {
	std::string challenges[2] = {
		"rock, paper, scissors",
		"coinflip"
	};

	int	randChal = rand() % 2;

	std::cout << "SC4V-TP " << this->_name << " challenges you to a " << challenges[randChal] << " duel." << std::endl;
	if (randChal == 0) {
		std::string	answer;
		std::cout << "hey boyo rock, papers and scissors, ya ready ? i don't care lets go" << std::endl;
		std::cout << "*you should write either \'r\', \'p\' or \'s\', if you type any other input, it will be ignored*" << std::endl;
		std::cin >> answer;
		if (answer == "r")
			std::cout << "*you have rock but " << this->_name << " has paper. you lose.*" << std::endl;
		else if (answer == "p")
			std::cout << "*you have paper but " << this->_name << " has scissors. you lose.*" << std::endl;
		else if (answer == "s")
			std::cout << "*you have scissors but " << this->_name << " has rock. you lose.*" << std::endl;
		else
			std::cout << "you lose, too bad." << std::endl;
	}
	else if (randChal == 1) {
		std::string chosenCoin;
		std::cout << "hey boyo coinflip, ya ready ? i don't care lets go" << std::endl;
		std::cout << "*you should write either \'h\' or \'t\', if you type any other input, it will be ignored*" << std::endl;
		std::cin >> chosenCoin;
		if (chosenCoin == "h")
			std::cout << "*you predicted heads but the coin landed on tails, you lost.*" << std::endl;
		else if (chosenCoin == "t")
			std::cout << "*you predicted tails but the coin landed on heads, you lost.*" << std::endl;
		else
			std::cout << "you lose, too bad." << std::endl;
	}
}

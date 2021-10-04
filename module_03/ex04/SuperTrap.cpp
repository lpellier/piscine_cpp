#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->_name = "super fuck";
	std::cout << "SUP3R-TP " << this->_name << " : Default constructor called : supertrap!" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
	std::cout << "SUP3R-TP " << this->_name << " : Default constructor called : supertrap!" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}


SuperTrap::~SuperTrap(void) {
	std::cout << "SUP3R-TP " << this->_name << " : Destructor called : supertrap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
	this->_name = src.getName();
	std::cout << "SUP3R-TP " << this->_name << " : Copy constructor called : supertrap!" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 120;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

SuperTrap &	SuperTrap::operator=(SuperTrap const & src) {
	this->_name = src.getName();
	std::cout << "SUP3R-TP " << this->_name << " : Assignement operator called : supertrap!" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_maxHitPoints = 100;
	this->_energyPoints = src.getEnergyPoints();
	this->_maxEnergyPoints = 120;
	this->_level = src.getLevel();
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	return *this;
}

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	this->_name = "Basic Diamond";
	this->_clapTrapName = ClapTrap::_name + "_clap_name";
	std::cout << "DI4MD-TP " << this->_name << " : Default constructor called : DiamondTrap!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	this->_clapTrapName = ClapTrap::_name + "_clap_name";
	std::cout << "DI4MD-TP " << this->_name << " : Parameter constructor called : DiamondTrap!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}


DiamondTrap::~DiamondTrap(void) {
	std::cout << "DI4MD-TP " << this->_name << " : Destructor called : DiamondTrap!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	this->_name = src.getName();
	this->_clapTrapName = src.ClapTrap::_name + "_clap_name";
	std::cout << "DI4MD-TP " << this->_name << " : Copy constructor called : DiamondTrap!" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & src) {
	this->_name = src.getName();
	this->_clapTrapName = src.ClapTrap::_name + "_clap_name";
	std::cout << "DI4MD-TP " << this->_name << " : Assignement operator called : DiamondTrap!" << std::endl;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return *this;
}

void			DiamondTrap::whoAmI(void) {
	std::cout << "DI4MD-TP " << this->_name << " : my claptrap name is " << this->_clapTrapName << std::endl; 
}

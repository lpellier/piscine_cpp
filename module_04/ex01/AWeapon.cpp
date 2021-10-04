#include "AWeapon.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

AWeapon::AWeapon(void) : _name("defaultWeapon"), _apcost(0), _damage(0) {
	// std::cout << "Default constructor called" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	// std::cout << "Parameter constructor called" << std::endl;
}

AWeapon::~AWeapon(void) {
	// std::cout << "Destructor called" << std::endl;
}

AWeapon::AWeapon(AWeapon const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_apcost = src.getAPcost();
	this->_damage = src.getDamage();
}

AWeapon & AWeapon::operator=(AWeapon const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_apcost = src.getAPcost();
	this->_damage = src.getDamage();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string const   AWeapon::getName() const {
	return this->_name;
}

int                 AWeapon::getAPcost() const {
	return this->_apcost;
}

int                 AWeapon::getDamage() const {
	return this->_damage;
}

//    __  __       _        _                   //
//   |  \/  |_   _| |_ __ _| |_ ___  _ __ ___   //
//   | |\/| | | | | __/ _  | __/ _ \|  __/ __|  //
//   | |  | | |_| | || (_| | || (_) | |  \__ \ //
//   |_|  |_|\__,_|\__\__,_|\__\___/|_|  |___/  //

void                AWeapon::setAPcost(int apcost) {
	this->_apcost = apcost;
}

void                AWeapon::setDamage(int damage) {
	this->_damage = damage;
}


#include "Character.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Character::Character(void) : _name("defaultName"), _actionPoints(40), _currentWeapon(NULL) {
	// std::cout << "Default constructor called" << std::endl;
}

Character::Character(std::string const & name) : _name(name), _actionPoints(40), _currentWeapon(NULL) {
	// std::cout << "Parameter constructor called" << std::endl;
}

Character::~Character(void) {
	// std::cout << "Destructor called" << std::endl;
}

Character::Character(Character const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_actionPoints = src.getActionPoints();
	this->_currentWeapon = src.getCurrentWeapon();
}

Character & Character::operator=(Character const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_actionPoints = src.getActionPoints();
	this->_currentWeapon = src.getCurrentWeapon();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string const	Character::getName() const {
	return this->_name;
}

int					Character::getActionPoints() const {
	return this->_actionPoints;
}

AWeapon*			Character::getCurrentWeapon() const {
	return this->_currentWeapon;
}

void				Character::recoverAP() {
	this->_actionPoints += 10;
	if (this->_actionPoints > 40)
		this->_actionPoints = 40;
}

// methods

void				Character::equip(AWeapon *newWeapon) {
	this->_currentWeapon = newWeapon;
}

void				Character::attack(Enemy *target) {
	if (!this->_currentWeapon || !target)
		return ;
	std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_currentWeapon->getName() << std::endl;
	target->takeDamage(this->_currentWeapon->getDamage());
	this->_actionPoints -= this->_currentWeapon->getAPcost();
	if (this->_actionPoints < 0)
		this->_actionPoints = 0;
	this->_currentWeapon->attack();
	if (target->getHp() == 0) {
		delete target;
	}
}

std::ostream &		operator<<(std::ostream & out, Character const & dude) {
	
	if (dude.getCurrentWeapon()) {
		// NAME has AP_NUMBER AP and wields a WEAPON_NAME
		out << dude.getName() << " has " << dude.getActionPoints() << " AP and wields a " << dude.getCurrentWeapon()->getName() << std::endl;
	}
	else {
		// NAME has AP_NUMBER AP and is unarmed
		out << dude.getName() << " has " << dude.getActionPoints() << " AP and is unarmed" << std::endl;
	}	
	return out;
}	

#include "Character.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Character::Character(void) : _name("null") {
	std::cout << "Character : Default constructor called" << std::endl;
	this->_inventory = new AMateria *[4];
}

Character::Character(std::string const & name) : \
	_name(name) {
	this->_inventory = new AMateria *[4];
	std::cout << "Character : Parameter constructor called" << std::endl;
}

Character::~Character(void) {
	std::cout << "Character : Destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	delete [] this->_inventory;
	this->_inventory = NULL;
}

Character::Character(Character const & src) : _name(src.getName()) {
	std::cout << "Character : Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
 		}
	}
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src.getInventory()[i]->clone();
	}
}

Character & Character::operator=(Character const & src) {
	std::cout << "Character : Assignment operator called" << std::endl;
	this->_name = src.getName();
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src.getInventory()[i]->clone();
	}
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string const &	Character::getName() const {
	return (this->_name);
}

AMateria **			Character::getInventory() const {
	return (this->_inventory);
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void				Character::equip(AMateria * m) {
	for (int idx = 0; idx < 4; idx++) {
		if (!this->_inventory[idx]) {
			this->_inventory[idx] = m;
			std::cout << this->_name << " equipped " << m->getType() << std::endl;
			break;
		}
	}
}

void				Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && this->_inventory[idx]) {
		std::cout << this->_name << " unequipped " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter & target) {
	if (idx >= 0 && idx <= 3 && this->_inventory[idx]) {
		std::cout << this->_name << " : ";
		this->_inventory[idx]->use(target);
	}
}

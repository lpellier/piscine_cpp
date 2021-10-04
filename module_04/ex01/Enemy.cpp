#include "Enemy.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Enemy::Enemy(void) : _hp(10), _type("defaultType") {
	// std::cout << "Default constructor called" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	// std::cout << "Parameter constructor called" << std::endl;
}

Enemy::~Enemy(void) {
	// std::cout << "Destructor called" << std::endl;
}

Enemy::Enemy(Enemy const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_hp = src.getHp();
}

Enemy & Enemy::operator=(Enemy const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_hp = src.getHp();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

int                 Enemy::getHp() const {
	return this->_hp;
}

std::string const   Enemy::getType() const {
	return this->_type;
}

//    __  __       _        _                   //
//   |  \/  |_   _| |_ __ _| |_ ___  _ __ ___   //
//   | |\/| | | | | __/ _  | __/ _ \|  __/ __|  //
//   | |  | | |_| | || (_| | || (_) | |  \__ \ //
//   |_|  |_|\__,_|\__\__,_|\__\___/|_|  |___/  //

void                Enemy::setHp(int hp) {
	this->_hp = hp;
}

void				Enemy::takeDamage(int amount) {
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
}

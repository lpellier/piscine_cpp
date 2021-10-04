#include "RadScorpion.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	// std::cout << "Default constructor called" << std::endl;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
	// std::cout << "Destructor called" << std::endl;
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_hp = src.getHp();
}

RadScorpion & RadScorpion::operator=(RadScorpion const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_hp = src.getHp();
	return *this;
}

void		RadScorpion::takeDamage(int amount) {
	amount -= 3;
	if (amount < 0)
		amount = 0;
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
}

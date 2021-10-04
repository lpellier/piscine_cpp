#include "PowerFist.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50), _attackOutput("* pschhh... SBAM! *") {
	// std::cout << "Default constructor called" << std::endl;
}

PowerFist::~PowerFist(void) {
	// std::cout << "Destructor called" << std::endl;
}

PowerFist::PowerFist(PowerFist const & src) {
	(void)src;
	// std::cout << "Copy constructor called" << std::endl;
}

PowerFist & PowerFist::operator=(PowerFist const & src) {
	(void)src;
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string const 	PowerFist::getAttackOutput() const {
	return this->_attackOutput;
}

void				PowerFist::attack(void) const {
	std::cout << this->_attackOutput << std::endl;
}

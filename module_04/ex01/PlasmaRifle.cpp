#include "PlasmaRifle.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21), _attackOutput("* piouuu piouuu piouuu *") {
	// std::cout << "Default constructor called" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void) {
	// std::cout << "Destructor called" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	(void)src;
	// std::cout << "Copy constructor called" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src) {
	(void)src;
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string const	PlasmaRifle::getAttackOutput() const {
	return this->_attackOutput;
}

void				PlasmaRifle::attack(void) const {
	std::cout << this->_attackOutput << std::endl;
}

#include "TacticalMarine.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	// *this = src;
	(void)src;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	// *this = src;
	(void)src;
	return *this;
}

// Function members

ISpaceMarine*		TacticalMarine::clone() const {
	ISpaceMarine* copy = new TacticalMarine(*this);

	return copy;
}

void				TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

#include "AssaultTerminator.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	// *this = src;
	(void)src;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	// *this = src;
	(void)src;
	return *this;
}

// Function members

ISpaceMarine*		AssaultTerminator::clone() const {
	ISpaceMarine* copy = new AssaultTerminator(*this);

	return copy;
}

void				AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

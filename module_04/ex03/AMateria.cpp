#include "AMateria.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

AMateria::AMateria(void) : _xp(0), _type("defaultType") {
	std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) {
	std::cout << "Parameter constructor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "Destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_xp = src.getXp();
}

AMateria & AMateria::operator=(AMateria const & src) {
	std::cout << "Assignment operator called" << std::endl;
	this->_xp = src.getXp();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string const      AMateria::getType() const {
	return this->_type;
}

unsigned int                 AMateria::getXp() const {
	return this->_xp;
}

//    __  __       _        _                   //
//   |  \/  |_   _| |_ __ _| |_ ___  _ __ ___   //
//   | |\/| | | | | __/ _  | __/ _ \|  __/ __|  //
//   | |  | | |_| | || (_| | || (_) | |  \__ \ //
//   |_|  |_|\__,_|\__\__,_|\__\___/|_|  |___/  //

void                AMateria::setXp(unsigned int xp) {
	this->_xp = xp;
}


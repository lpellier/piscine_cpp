#include "Zombie.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Zombie::Zombie(void) {
	// std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	// std::cout << "Parameter constructor called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called - " << this->_name << " died." << std::endl;
}

Zombie::Zombie(Zombie const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_name = src.getName();
}

Zombie & Zombie::operator=(Zombie const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_name = src.getName();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string         Zombie::getName() const {
	return this->_name;
}

//    __  __       _        _                   //
//   |  \/  |_   _| |_ __ _| |_ ___  _ __ ___   //
//   | |\/| | | | | __/ _  | __/ _ \|  __/ __|  //
//   | |  | | |_| | || (_| | || (_) | |  \__ \ //
//   |_|  |_|\__,_|\__\__,_|\__\___/|_|  |___/  //

void                Zombie::setName(std::string name) {
	this->_name = name;
}

// Methods

void				Zombie::announce(void) {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
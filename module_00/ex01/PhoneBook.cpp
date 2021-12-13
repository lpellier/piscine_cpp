#include "PhoneBook.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

PhoneBook::PhoneBook(void) {
	int i = 0;

	while (i < 8) {
		this->contacts[i] = Contact();
		i++;
	}
	// std::cout << "Default constructor called" << std::endl;
}

PhoneBook::PhoneBook(Contact contacts[8]) {
	int i = 0;
	
	while (i < 8) {
		this->contacts[i] = contacts[i];
		i++;
	}
	// std::cout << "Parameter constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor called" << std::endl;
}

PhoneBook::PhoneBook(PhoneBook const & src) {
	int i = 0;

	while (i < 8) {
		this->contacts[i] = src.contacts[i];
		i++;
	}
	// std::cout << "Copy constructor called" << std::endl;
}

PhoneBook & PhoneBook::operator=(PhoneBook const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	int i = 0;

	while (i < 8) {
		this->contacts[i] = src.contacts[i];
		i++;
	}
	return *this;
}

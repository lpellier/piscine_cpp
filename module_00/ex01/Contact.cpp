#include "Contact.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Contact::Contact(void) : _firstName("null"), _lastName("null"), _nickname("null"), _phoneNumber("null"), _darkestSecret("null") {
	// std::cout << "Default constructor called" << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) : _firstName(firstName), _lastName(lastName), _nickname(nickname), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {
	// std::cout << "Parameter constructor called" << std::endl;
}

Contact::~Contact(void) {
	// std::cout << "Destructor called" << std::endl;
}

Contact::Contact(Contact const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_firstName = src.getFirstName();
	this->_lastName = src.getLastName();
	this->_nickname = src.getNickname();
	this->_phoneNumber = src.getPhoneNumber();
	this->_darkestSecret = src.getDarkestSecret();
}

Contact & Contact::operator=(Contact const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_firstName = src.getFirstName();
	this->_lastName = src.getLastName();
	this->_nickname = src.getNickname();
	this->_phoneNumber = src.getPhoneNumber();
	this->_darkestSecret = src.getDarkestSecret();
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

std::string         Contact::getFirstName() const {
	return this->_firstName;
}

std::string         Contact::getLastName() const {
	return this->_lastName;
}

std::string         Contact::getNickname() const {
	return this->_nickname;
}

std::string         Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

std::string         Contact::getDarkestSecret() const {
	return this->_darkestSecret;
}

//    __  __       _        _                   //
//   |  \/  |_   _| |_ __ _| |_ ___  _ __ ___   //
//   | |\/| | | | | __/ _  | __/ _ \|  __/ __|  //
//   | |  | | |_| | || (_| | || (_) | |  \__ \ //
//   |_|  |_|\__,_|\__\__,_|\__\___/|_|  |___/  //

void                Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

void                Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

void                Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

void                Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void                Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}


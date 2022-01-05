#include "AMateria.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

AMateria::AMateria(void) {
	std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria : Parameter constructor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria : Destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	(void)src;
	std::cout << "AMateria : Copy constructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src) {
	(void)src;
	std::cout << "AMateria : Assignment operator called" << std::endl;
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string const &	AMateria::getType(void) const {
	return this->_type;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //


#include "Cure.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure : Default constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Cure : Destructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	(void)src;
	std::cout << "Cure : Copy constructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & src) {
	(void)src;
	std::cout << "Cure : Assignment operator called" << std::endl;
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

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

AMateria *		Cure::clone() const {
	return (new Cure());
}

void			Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *'" << std::endl;
}

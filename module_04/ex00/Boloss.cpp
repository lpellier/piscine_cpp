#include "Boloss.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Boloss::Boloss(void) {
	std::cout << "im a boloss whatsuuuup" << std::endl;
}

Boloss::Boloss(std::string name) : Victim(name) {
	std::cout << "im a boloss whatsuuuup" << std::endl;
}

Boloss::~Boloss(void) {	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;

	std::cout << "oi bruv im dead init" << std::endl;
}

Boloss::Boloss(Boloss const & src) {
	this->_name = src.getName();
	std::cout << "im a boloss whatsuuuup" << std::endl;
}

Boloss & Boloss::operator=(Boloss const & src) {
	std::cout << "Assignment operator called" << std::endl;
	this->_name = src.getName();
	return *this;
}

void		Boloss::getPolymorphed() const {
	std::cout << this->_name << " has been turned nothingness!" << std::endl;
}


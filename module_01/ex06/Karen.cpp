#include "Karen.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Karen::Karen(void) {
	// std::cout << "Default constructor called" << std::endl;
}

Karen::~Karen(void) {
	// std::cout << "Destructor called" << std::endl;
}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	struct	complainLvl	cmpLvl[4];

	cmpLvl[0].ptr = &Karen::debug;
	cmpLvl[0].lvl = std::string("debug");
	cmpLvl[1].ptr = &Karen::info;
	cmpLvl[1].lvl = std::string("info");
	cmpLvl[2].ptr = &Karen::warning;
	cmpLvl[2].lvl = std::string("warning");
	cmpLvl[3].ptr = &Karen::error;
	cmpLvl[3].lvl = std::string("error");

	int i = 0;
	while (i < 4) {
		if (!level.compare(cmpLvl[i].lvl)) {
			(this->*cmpLvl[i].ptr)();
			i++;
			while (i < 4) {
				(this->*cmpLvl[i].ptr)();
				i++;
			}
			return ;
		}
		i++;
	}
}
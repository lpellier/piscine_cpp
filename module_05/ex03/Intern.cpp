#include "Intern.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Intern::Intern(void) {
	// std::cout << "Default constructor called" << std::endl;
	forms[0].form = new ShrubberyCreationForm();
	forms[0].formName = "shrubbery creation";
	forms[1].form = new RobotomyRequestForm();
	forms[1].formName = "robotomy request";
	forms[2].form = new PresidentialPardonForm();
	forms[2].formName = "presidential pardon";
}

Intern::~Intern(void) {
	// std::cout << "Destructor called" << std::endl;
	for (int i = 0; i < 3; i++) {
		delete forms[i].form;
	}
}

Intern::Intern(Intern const & src) {
	(void)src;
	// std::cout << "Copy constructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & src) {
	(void)src;
	// std::cout << "Assignment operator called" << std::endl;
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

Form *		Intern::makeForm(std::string formName, std::string formTarget) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->forms[i].formName) {
			std::cout << "Intern creates " << formName << std::endl;
			this->forms[i].form->setTarget(formTarget);
			return this->forms[i].form;
		}
	}
	std::cout << "couldn't find required form" << std::endl;
	return (NULL);
}

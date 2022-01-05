#include "PresidentialPardonForm.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidentialPardonForm", 25, 5) {
	// std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : \
	Form("presidentialPardonForm", 25, 5), _target(target) {
	// std::cout << "Parameter constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	// std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("presidentialPardonForm", 25, 5), _target("null") {
	// std::cout << "Copy constructor called" << std::endl;
	this->_target = src.getTarget();
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_target = src.getTarget();
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string	PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

void			PresidentialPardonForm::setTarget(std::string target) {
	this->_target = target;
}

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try {
		if (executor.getGrade() > this->getExecutionGrade())
			throw GradeTooLowException();
		else if (!this->getIsSigned())
			throw FormNotSignedException();
		else {
			std::cout << this->_target << " has been pardonned by Zafod Beeblebrox. Well done" << std::endl;
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

#include "RobotomyRequestForm.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomyRequestForm", 72, 45) {
	std::srand(std::time(NULL));
	// std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : \
	Form("robotomyRequestForm", 72, 45), _target(target) {
	// std::cout << "Parameter constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	// std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("robotomyRequestForm", 72, 45), _target("null") {
	// std::cout << "Copy constructor called" << std::endl;
	this->_target = src.getTarget();
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_target = src.getTarget();
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string	RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

void			RobotomyRequestForm::setTarget(const std::string & target) {
	this->_target = target;
}

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecutionGrade())
		throw GradeTooLowException();
	else if (!this->getIsSigned())
		throw FormNotSignedException();
	else {
		int randy = 1 + std::rand() / ((RAND_MAX + 1u) / 2);
		std::cout << "*BRRZZZZT* *VROOOOOOOOOOOOOM*" << std::endl << this->_target;
		switch (randy)  {
			case 1:
				std::cout << " has been successfully robotomized." << std::endl;
				break;
			case 2:
				std::cout << " has died from surgery. Oops" << std::endl;
				break;
		}
	}
}

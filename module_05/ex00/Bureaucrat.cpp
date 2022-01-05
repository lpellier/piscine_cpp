#include "Bureaucrat.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Bureaucrat::Bureaucrat(void) : _name("null"), _grade(1) {
	// std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	_grade = 0;
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else
		this->_grade = grade;
	// std::cout << "Parameter constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	// std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_grade = src.getGrade();
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_grade = src.getGrade();
	return *this;
}

std::ostream & operator<<(std::ostream & out, const Bureaucrat & src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (out);
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string const	Bureaucrat::getName(void) const {
	return this->_name;
}

int				Bureaucrat::getGrade(void) const {
	return this->_grade;
}

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void			Bureaucrat::decrementGrade(void) {
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

void			Bureaucrat::incrementGrade(void) {
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

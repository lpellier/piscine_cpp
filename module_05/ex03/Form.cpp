#include "Form.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Form::Form(void) : _name("null"), _isSigned(false), _signatureGrade(150), _executionGrade(150) {
	// std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string const name, int const signatureGrade, int const executionGrade) : \
	_name(name), _isSigned(false), _signatureGrade(signatureGrade), _executionGrade(executionGrade) {
	try {
		if (signatureGrade < 1 || executionGrade < 1) {
			throw GradeTooLowException();
		} else if (signatureGrade > 150 || executionGrade > 150) {
			throw GradeTooHighException();
		}
	} catch (GradeTooLowException & e) {
		std::cout << "Grade is too low (1 - 150)" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	// std::cout << "Parameter constructor called" << std::endl;
}

Form::~Form(void) {
	// std::cout << "Destructor called" << std::endl;
}

// Form::Form(Form const & src) {
// 	// std::cout << "Copy constructor called" << std::endl;
// 	this->_name = src.getName();
// 	this->_isSigned = src.getIsSigned();
// 	this->_signatureGrade = src.getSignatureGrade();
// 	this->_executionGrade = src.getExecutionGrade();
// }

// Form & Form::operator=(Form const & src) {
// 	// std::cout << "Assignment operator called" << std::endl;
// 	this->_name = src.getName();
// 	this->_isSigned = src.getIsSigned();
// 	this->_signatureGrade = src.getSignatureGrade();
// 	this->_executionGrade = src.getExecutionGrade();
// 	return *this;
// }

std::ostream &		operator<<(std::ostream & out, Form & src) {
	out << src.getName() << ", form : min grade for signature " << src.getSignatureGrade() << ", min grade for execution " << src.getExecutionGrade() << ". Signed ? " << src.getIsSigned() << std::endl;
	return (out);
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string const	Form::getName(void) const {
	return this->_name;
}

bool				Form::getIsSigned(void) const {
	return this->_isSigned;
}

int					Form::getSignatureGrade(void) const {
	return this->_signatureGrade;
}

int					Form::getExecutionGrade(void) const {
	return this->_executionGrade;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

void				Form::setIsSigned(bool isSigned) {
	this->_isSigned = isSigned;
}


//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void				Form::beSigned(Bureaucrat & bureaucrat) {
	try {
		if (bureaucrat.getGrade() <= this->_signatureGrade)
			this->_isSigned = true;
		else
			throw GradeTooLowException();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}
}

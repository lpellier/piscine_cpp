#include "ShrubberyCreationForm.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubberyCreationForm", 145, 137), _target("null") {
	// std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : \
	Form("shrubberyCreationForm", 145, 137), _target(target) {
	// std::cout << "Parameter constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	// std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("shrubberyCreationForm", 145, 137), _target("null") {
	// std::cout << "Copy constructor called" << std::endl;
	this->_target = src.getTarget();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_target = src.getTarget();
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::string	ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

void			ShrubberyCreationForm::setTarget(const std::string & target) {
	this->_target = target;
}

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void			ShrubberyCreationForm::drawTree(std::ofstream & file) const {
	file << "                                             ." << std::endl;
	file << "                                  .         ;  " << std::endl;
	file << "     .              .              ;%     ;;   " << std::endl;
	file << "       ,           ,                :;%  %;   " << std::endl;
	file << "        :         ;                   :;%;'     .,   " << std::endl;
	file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	file << " ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "  %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	file << "   ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "    `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "     `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "        `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "          `@%:.  :;%.         ;@@%;'   " << std::endl;
	file << "            `@%.  `;@%.      ;@@%;         " << std::endl;
	file << "              `@%%. `@%%    ;@@%;        " << std::endl;
	file << "                ;@%. :@%%  %@@%;       " << std::endl;
	file << "                  %@bd%%%bd%%:;     " << std::endl;
	file << "                    #@%%%%%:;;" << std::endl;
	file << "                    %@@%%%::;" << std::endl;
	file << "                    %@@@%(o);  . '         " << std::endl;
	file << "                    %@@@o%;:(.,'         " << std::endl;
	file << "                `.. %@@@o%::;         " << std::endl;
	file << "                   `)@@@o%::;         " << std::endl;
	file << "                    %@@(o)::;        " << std::endl;
	file << "                   .%@@@@%::;         " << std::endl;
	file << "                   ;%@@@@%::;.          " << std::endl;
	file << "                  ;%@@@@%%:;;;. " << std::endl;
	file << "              ...;%@@@@@%%:;;;;,.. " << std::endl;
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		if (executor.getGrade() > this->getExecutionGrade())
			throw GradeTooLowException();
		else if (!this->getIsSigned())
			throw FormNotSignedException();
		else {
			std::ofstream shrubberyFile((this->_target + "_shrubbery").c_str());
			if (!shrubberyFile) {
				std::cout << "Error with the shrub file." << std::endl;
				return ;
			}
			drawTree(shrubberyFile);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
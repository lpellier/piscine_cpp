#include "Form.hpp"

int main(void) {
	Bureaucrat basic("basic", 150);
	Bureaucrat moderate("moderate", 100);
	Bureaucrat expert("expert", 50);
	Bureaucrat master("master", 1);

	Form	fakeForm("fakeForm", -1, 120);
	Form	wrongForm("wrongForm", 160, 10);
	std::cout << std::endl;

	Form	basicForm("basicForm", 150, 100);
	Form	moderateForm("moderateForm", 100, 50);
	Form	expertForm("expertForm", 50, 1);
	Form	masterForm("masterForm", 1, 1);

	std::cout << basicForm << basic;
	try {
		basicForm.beSigned(basic);
		std::cout << "expert form signed by basic" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}
	std::cout << basicForm;
	std::cout << std::endl;

	std::cout << expertForm << moderate;
	try {
		expertForm.beSigned(moderate);
		std::cout << "expert form signed by moderate" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}
	std::cout << expertForm;
	std::cout << std::endl;

	std::cout << moderateForm << expert; 
	try {
		expert.signForm(moderateForm);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}
	std::cout << moderateForm;
	std::cout << std::endl;

	try {
		expert.signForm(masterForm);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}
	std::cout << masterForm << expert; 
	std::cout << masterForm;
	std::cout << std::endl;
}
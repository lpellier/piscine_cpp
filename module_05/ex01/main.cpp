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
	basicForm.beSigned(basic);
	std::cout << basicForm;
	std::cout << std::endl;

	std::cout << expertForm << moderate;
	expertForm.beSigned(moderate);
	std::cout << expertForm;
	std::cout << std::endl;

	std::cout << moderateForm << expert; 
	expert.signForm(moderateForm);
	std::cout << moderateForm;
	std::cout << std::endl;

	std::cout << masterForm << expert; 
	expert.signForm(masterForm);
	std::cout << masterForm;
	std::cout << std::endl;
}
#include "PresidentialPardonForm.hpp"

int main(void) {
	{
		Bureaucrat	executor("executor", 137);
		ShrubberyCreationForm test("shrubman");

		executor.signForm(test);
		try {
			test.execute(executor);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try {
			executor.executeForm(test);
		}
		catch (std::exception & e) {
			std::cout << executor.getName() << " couldn't execute " << test.getName() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat	executor("executor", 1);
		RobotomyRequestForm test("michel");

		executor.signForm(test);
		try {
			test.execute(executor);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try {
			executor.executeForm(test);
		}
		catch (std::exception & e) {
			std::cout << executor.getName() << " couldn't execute " << test.getName() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat	executor("executor", 5);
		PresidentialPardonForm test("turkey");

		executor.signForm(test);
		try {
			test.execute(executor);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		try {
			executor.executeForm(test);
		}
		catch (std::exception & e) {
			std::cout << executor.getName() << " couldn't execute " << test.getName() << std::endl;
		}
	}
}

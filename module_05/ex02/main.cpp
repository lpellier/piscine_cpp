#include "PresidentialPardonForm.hpp"

int main(void) {
	{
		Bureaucrat	executor("executor", 137);
		ShrubberyCreationForm test("shrubman");

		executor.signForm(test);
		test.execute(executor);
		std::cout << std::endl;
		executor.executeForm(test);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Bureaucrat	executor("executor", 100);
		RobotomyRequestForm test("michel");

		executor.signForm(test);
		test.execute(executor);
		std::cout << std::endl;
		executor.executeForm(test);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Bureaucrat	executor("executor", 5);
		PresidentialPardonForm test("turkey");

		executor.signForm(test);
		test.execute(executor);
		std::cout << std::endl;
		executor.executeForm(test);
	}
}

#include "Intern.hpp"

int main(void) {
	{
		Bureaucrat michel("michel", 1);
		Intern man;
		Form *test;

		test = man.makeForm("shrubbery creation", "alex");
		if (test) {
			michel.signForm(*test);
			michel.executeForm(*test);
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat michel("michel", 1);
		Intern man;
		Form *test;

		test = man.makeForm("robotomy request", "alex");
		if (test) {
			michel.signForm(*test);
			michel.executeForm(*test);
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat michel("michel", 1);
		Intern man;
		Form *test;

		test = man.makeForm("presidential pardon", "alex");
		if (test) {
			michel.signForm(*test);
			michel.executeForm(*test);
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat michel("michel", 1);
		Intern man;
		Form *test;

		test = man.makeForm("teeeest", "alex");
		if (test) {
			michel.signForm(*test);
			michel.executeForm(*test);
		}
	}
	std::cout << std::endl;
}
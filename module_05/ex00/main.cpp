#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat tooLow("tooLow", -1);
	Bureaucrat tooHigh("tooHigh", 160);
	Bureaucrat justRight("justRight", 1);

	std::cout << tooLow << tooHigh;
	std::cout << std::endl;
	std::cout << justRight;
	justRight.decrementGrade();
	std::cout << justRight;
	justRight.incrementGrade();
	justRight.incrementGrade();
	std::cout << justRight;
	while (justRight.getGrade() < 150)
		justRight.decrementGrade();
	std::cout << justRight;
	justRight.decrementGrade();
	std::cout << justRight;
}
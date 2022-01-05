#include "Bureaucrat.hpp"

int main(void) {


	try {
		Bureaucrat tooLow("tooLow", -1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << "Please instantiate a correct Bureaucrat." << std::endl;
	}
	try {
		Bureaucrat tooHigh("tooHigh", 160);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << "Please instantiate a correct Bureaucrat." << std::endl;
	}
	try {
		Bureaucrat justRight("justRight", 1);
		justRight.decrementGrade();
		std::cout << justRight;
		justRight.incrementGrade();
		try {
			justRight.incrementGrade();
		}
		catch (std::exception & e) {
			std::cout << "You tried to increment a maxxed out bureaucrat" << std::endl;
		}
		std::cout << justRight;
		while (justRight.getGrade() < 150)
			justRight.decrementGrade();
		std::cout << justRight;
		try {
			justRight.decrementGrade();
		}
		catch (std::exception & e) {
			std::cout << "You tried to decrement the lowest bureaucrat" << std::endl;
		}
		std::cout << justRight;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << "Please instantiate a correct Bureaucrat." << std::endl;
	}
}
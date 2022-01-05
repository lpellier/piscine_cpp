#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm : public Form {
private:
	// data
	std::string	_target;

public:
	// default constructor
	RobotomyRequestForm(void);
	// parameter constructor
	RobotomyRequestForm(std::string target);
	// destructor
	virtual ~RobotomyRequestForm(void);
	// copy constructor
	RobotomyRequestForm(RobotomyRequestForm const & src);
	// assignment operator
	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

	// accessors
	std::string	getTarget(void) const;
	// mutators
	void			setTarget(std::string target);

	// methods
	void	execute(Bureaucrat const & executor) const;
};

#endif

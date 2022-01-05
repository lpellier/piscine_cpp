#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm : public Form {
private:
	// data
	std::string	_target;

public:
	// default constructor
	PresidentialPardonForm(void);
	// parameter constructor
	PresidentialPardonForm(std::string target);
	// destructor
	virtual ~PresidentialPardonForm(void);
	// copy constructor
	PresidentialPardonForm(PresidentialPardonForm const & src);
	// assignment operator
	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);

	// accessors
	std::string	getTarget(void) const;
	// mutators
	void			setTarget(std::string target);

	// methods
	void			execute(Bureaucrat const & executor) const;
};

#endif

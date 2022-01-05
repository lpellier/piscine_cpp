#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"

struct formStruct {
	std::string	formName;
	Form	*form;
};

class Intern {
private:
	formStruct forms[3];
public:
	// default constructor
	Intern(void);
	// parameter constructor
	// Intern();
	// destructor
	~Intern(void);
	// copy constructor
	Intern(Intern const & src);
	// assignment operator
	Intern & operator=(Intern const & src);


	// methods
	Form *	makeForm(std::string formName, std::string formTarget);
};

#endif

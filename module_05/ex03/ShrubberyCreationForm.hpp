#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	// data
	std::string	_target;

public:
	// default constructor
	ShrubberyCreationForm(void);
	// parameter constructor
	ShrubberyCreationForm(std::string target);
	// destructor
	virtual ~ShrubberyCreationForm(void);
	// copy constructor
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	// assignment operator
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

	// accessors
	std::string		getTarget(void) const;
	// mutators
	void			setTarget(const std::string & target);

	// methods
	void	execute(Bureaucrat const & executor) const;
	void	drawTree(std::ofstream & file) const;
};

#endif

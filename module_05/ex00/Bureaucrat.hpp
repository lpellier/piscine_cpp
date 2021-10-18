#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
protected:
	// data
	std::string const	_name;
	int				_grade;

public:
	// default constructor
	Bureaucrat(void);
	// parameter constructor
	Bureaucrat(std::string const name, int grade);
	// destructor
	~Bureaucrat(void);
	// copy constructor
	Bureaucrat(Bureaucrat const & src);
	// assignment operator
	Bureaucrat & operator=(Bureaucrat const & src);

	// accessors
	std::string const	getName(void) const;
	int					getGrade(void) const;

	// methods
	void				decrementGrade(void);
	void				incrementGrade(void);

	// exceptions
	class	GradeTooLowException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low (1 - 150)");
			}
	};

	class	GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too high (1 - 150)");
			}
	};
};

std::ostream &	operator<<(std::ostream & out, const Bureaucrat & src);

#endif

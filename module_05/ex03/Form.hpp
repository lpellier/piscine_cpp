#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	// data
	std::string const	_name;
	bool				_isSigned;
	int const			_signatureGrade;
	int const			_executionGrade;

public:
	// default constructor
	Form(void);
	// parameter constructor
	Form(std::string const name, int const signatureGrade, int const executionGrade);
	// destructor
	virtual ~Form(void);
	// copy constructor
	// Form(Form const & src);
	// assignment operator
	// Form & operator=(Form const & src);

	// accessors
	std::string const	getName(void) const;
	bool				getIsSigned(void) const;
	int 				getSignatureGrade(void) const;
	int 				getExecutionGrade(void) const;

	// mutators
	void				setIsSigned(bool isSigned);

	// methods
	void				beSigned(Bureaucrat & bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;
	virtual void		setTarget(std::string target) = 0;

	// exception
	class	GradeTooLowException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low for minimum signature/execution grade");
			}
	};
	
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too high (1 - 150)");
			}
	};
	
	class	FormNotSignedException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Form cannot be executed if it's not signed.");
			}
	};
};

std::ostream &		operator<<(std::ostream & out, Form & src);

#endif

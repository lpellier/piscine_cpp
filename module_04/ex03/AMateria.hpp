#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
protected:
	// data
	const std::string	_type;

public:
	// default constructor
	AMateria(void);
	// parameter constructor
	AMateria(std::string const & type);
	// destructor
	virtual ~AMateria(void);
	// copy constructor
	AMateria(AMateria const & src);
	// assignment operator
	AMateria & operator=(AMateria const & src);

	// accessors
	std::string const &	getType(void) const;

	// methods
	virtual AMateria *	clone() const = 0;
	virtual void		use(ICharacter & target) = 0;
};

#endif

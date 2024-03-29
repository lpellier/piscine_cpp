#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
	// data
	std::string	_type;

public:
	// default constructor
	Animal(void);
	// parameter constructor
	Animal(std::string type);
	// destructor
	virtual ~Animal(void);
	// if this isnt virtual, when an instance of Animal * is deleted, this destructor will be called instead of the derived class
	// copy constructor
	Animal(Animal const & src);
	// assignment operator
	Animal & operator=(Animal const & src);

	// accessors
	std::string	getType(void) const;
	// mutators
	void			setType(std::string type);

	// methods
	virtual void	makeSound() const;
};

#endif

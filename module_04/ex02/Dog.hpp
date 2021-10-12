#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain*	_brain;
public:
	// default constructor
	Dog(void);
	// destructor
	~Dog(void);
	// copy constructor
	Dog(Dog const & src);
	// assignment operator
	Dog & operator=(Dog const & src);

	// accessors
	Brain*	getBrain(void) const;

	// methods
	virtual void	makeSound() const;
};

#endif

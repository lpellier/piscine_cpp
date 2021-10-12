#ifndef CAT_HPP
# define CAT_HPP

#include "Dog.hpp"

class Cat : public Animal {
private:
	Brain*	_brain;
public:
	// default constructor
	Cat(void);
	// destructor
	~Cat(void);
	// copy constructor
	Cat(Cat const & src);
	// assignment operator
	Cat & operator=(Cat const & src);

	// accessors
	Brain*	getBrain(void) const;

	// methods
	virtual void	makeSound() const;
};

#endif

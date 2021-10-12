#ifndef CAT_HPP
# define CAT_HPP

#include "Dog.hpp"
#include "WrongCat.hpp"

class Cat : public Animal {
public:
	// default constructor
	Cat(void);
	// destructor
	~Cat(void);
	// copy constructor
	Cat(Cat const & src);
	// assignment operator
	Cat & operator=(Cat const & src);

	// methods
	virtual void	makeSound() const;
};

#endif

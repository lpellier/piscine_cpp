#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	// default constructor
	WrongCat(void);
	// destructor
	~WrongCat(void);
	// copy constructor
	WrongCat(WrongCat const & src);
	// assignment operator
	WrongCat & operator=(WrongCat const & src);

	void	makeSound() const;
};

#endif

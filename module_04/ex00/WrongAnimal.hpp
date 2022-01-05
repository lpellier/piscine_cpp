#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	// data
	std::string	_type;

public:
	// default constructor
	WrongAnimal(void);
	// parameter constructor
	WrongAnimal(std::string type);
	// destructor
	~WrongAnimal(void);
	// copy constructor
	WrongAnimal(WrongAnimal const & src);
	// assignment operator
	WrongAnimal & operator=(WrongAnimal const & src);

	// accessors
	std::string	getType(void) const;
	// mutators
	void			setType(std::string type);

	// methods
	void	makeSound() const;
};

#endif

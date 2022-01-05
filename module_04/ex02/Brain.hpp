#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
	// data
	std::string	_ideas[100];

public:
	// default constructor
	Brain(void);
	// parameter constructor
	Brain(std::string ideas[100]);
	// destructor
	~Brain(void);
	// copy constructor
	Brain(Brain const & src);
	// assignment operator
	Brain & operator=(Brain const & src);

	// accessors
	const std::string *	getIdeas(void) const;
	// mutators

	// methods
};

#endif

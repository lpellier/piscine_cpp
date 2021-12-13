#include <iostream>
#include <string>
#include <stdlib.h>

class Zombie {
private:
	// data
	std::string         _name;

public:
	// default constructor
	Zombie              (void);
	// parameter constructor
	Zombie              (std::string name);
	// destructor
	~Zombie              (void);
	// copy constructor
	Zombie              (Zombie const & src);
	// assignment operator
	Zombie               & operator=(Zombie const & src);

	// accessors
	std::string         getName(void) const;
	// mutators
	void                setName(std::string name);

	// methods
	void				announce(void);
};

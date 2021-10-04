#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
private:
	// data

public:
	// default constructor
	SuperTrap(void);
	SuperTrap(std::string name);
	// destructor
	~SuperTrap(void);
	// copy constructor
	SuperTrap(SuperTrap const & src);
	// assignment operator
	SuperTrap & operator=(SuperTrap const & src);

	// methods
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};

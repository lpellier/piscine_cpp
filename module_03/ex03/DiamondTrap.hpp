#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	// data
	std::string _clapTrapName;

public:
	// default constructor
	DiamondTrap(void);
	DiamondTrap(std::string name);
	// destructor
	~DiamondTrap(void);
	// copy constructor
	DiamondTrap(DiamondTrap const & src);
	// assignment operator
	DiamondTrap & operator=(DiamondTrap const & src);

	// methods
	using		ScavTrap::attack;
	void		whoAmI(void);
};

#include "PlasmaRifle.hpp"

class PowerFist : public AWeapon {
private:
	// data
	std::string const	_attackOutput;

public:
	// default constructor
	PowerFist         (void);
	// destructor
	~PowerFist         (void);
	// copy constructor
	PowerFist         (PowerFist const & src);
	// assignment operator
	PowerFist          & operator=(PowerFist const & src);

	// accessors
	std::string const  getAttackOutput() const;

	// methods
	void				attack(void) const;
};

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
private:
	// data
	std::string const _attackOutput;

public:
	// default constructor
	PlasmaRifle         (void);
	// destructor
	~PlasmaRifle         (void);
	// copy constructor
	PlasmaRifle         (PlasmaRifle const & src);
	// assignment operator
	PlasmaRifle          & operator=(PlasmaRifle const & src);

	// accessors
	std::string const    getAttackOutput() const;

	// methods
	void				attack(void) const;
};

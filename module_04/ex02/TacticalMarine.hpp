#include "AssaultTerminator.hpp"

class TacticalMarine : public ISpaceMarine {
private:
	// data

public:
	// default constructor
	TacticalMarine      (void);
	// destructor
	~TacticalMarine      (void);
	// copy constructor
	TacticalMarine      (TacticalMarine const & src);
	// assignment operator
	TacticalMarine       & operator=(TacticalMarine const & src);

	// methods
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

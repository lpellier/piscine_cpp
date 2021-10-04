#include "ISquad.hpp"

class AssaultTerminator : public ISpaceMarine {
private:
	// data

public:
	// default constructor
	AssaultTerminator      (void);
	// destructor
	~AssaultTerminator      (void);
	// copy constructor
	AssaultTerminator      (AssaultTerminator const & src);
	// assignment operator
	AssaultTerminator       & operator=(AssaultTerminator const & src);

	// methods
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

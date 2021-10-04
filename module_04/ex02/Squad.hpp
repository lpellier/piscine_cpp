#include "TacticalMarine.hpp"

class Squad : public ISquad {
private:
	// data
	ISpaceMarine**		_army;
	int					_count;

public:
	// default constructor
	Squad               (void);
	// destructor
	~Squad               (void);
	// copy constructor
	Squad               (Squad const & src);
	// assignment operator
	Squad                & operator=(Squad const & src);

	// getters
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	ISpaceMarine**		getArmy() const;

	// methods
	virtual int push(ISpaceMarine*);
};

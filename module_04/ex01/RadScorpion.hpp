#include "SuperMutant.hpp"

class RadScorpion : public Enemy {
private:
	// data

public:
	// default constructor
	RadScorpion         (void);
	// destructor
	~RadScorpion         (void);
	// copy constructor
	RadScorpion         (RadScorpion const & src);
	// assignment operator
	RadScorpion          & operator=(RadScorpion const & src);

	// methods
	virtual void		takeDamage(int amount);
};

#include "Enemy.hpp"

class SuperMutant : public Enemy {
private:
	// data

public:
	// default constructor
	SuperMutant         (void);
	// destructor
	~SuperMutant         (void);
	// copy constructor
	SuperMutant         (SuperMutant const & src);
	// assignment operator
	SuperMutant          & operator=(SuperMutant const & src);

	// methods
	virtual void		takeDamage(int amount);
};

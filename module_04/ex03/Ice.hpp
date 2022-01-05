#ifndef ICE_HPP
# define ICE_HPP

#include "Cure.hpp"

class Ice : public AMateria {
public:
	// default constructor
	Ice(void);
	// destructor
	virtual ~Ice(void);
	// copy constructor
	Ice(Ice const & src);
	// assignment operator
	Ice & operator=(Ice const & src);


	// methods
	virtual AMateria *		clone() const;
	virtual void			use(ICharacter & target);
};

#endif

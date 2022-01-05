#ifndef CURE_HPP
# define CURE_HPP

#include "Character.hpp"

class Cure : public AMateria {
public:
	// default constructor
	Cure(void);
	// destructor
	virtual ~Cure(void);
	// copy constructor
	Cure(Cure const & src);
	// assignment operator
	Cure & operator=(Cure const & src);

	// methods
	virtual AMateria *		clone() const;
	virtual void			use(ICharacter & target);
};

#endif

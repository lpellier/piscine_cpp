#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	// data
	AMateria **	_materiaKnowledge;

public:
	// default constructor
	MateriaSource(void);
	// destructor
	~MateriaSource(void);
	// copy constructor
	MateriaSource(MateriaSource const & src);
	// assignment operator
	MateriaSource & operator=(MateriaSource const & src);

	// accessors
	AMateria **	getMateriaKnowledge(void) const;
	// mutators

	// methods
	void		learnMateria(AMateria * src);
	AMateria *	createMateria(std::string const & type);
};

#endif

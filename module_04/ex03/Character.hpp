#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
protected:
	// data
	std::string		_name;
	AMateria **		_inventory;

public:
	// data
	// default constructor
	Character(void);
	// parameter constructor
	Character(std::string const & name);
	// destructor
	~Character(void);
	// copy constructor
	Character(Character const & src);
	// assignment operator
	Character &			operator=(Character const & src);

	// accessors
	std::string const &	getName() const;
	AMateria **			getInventory() const;

	// methods
	void				equip(AMateria * m);
	void				unequip(int idx);
	void				use(int idx, ICharacter & target);
};

#endif

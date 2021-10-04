#include <iostream>
#include <string>

class AMateria {
private:
	// data
	std::string const       _type;
	unsigned int                 _xp;

public:
	// default constructor
	AMateria            (void);
	// parameter constructor
	AMateria            (std::string const & type);
	// destructor
	~AMateria            (void);
	// copy constructor
	AMateria            (AMateria const & src);
	// assignment operator
	AMateria             & operator=(AMateria const & src);

	// accessors
	std::string const       getType() const;
	unsigned int                 getXp() const;
	// mutators
	void                setXp(unsigned int xp);

	// methods
	virtual				AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

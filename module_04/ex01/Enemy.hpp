#include <iostream>
#include <string>

class Enemy {
protected:
	// data
	int                 _hp;
	std::string const   _type;

public:
	// default constructor
	Enemy               (void);
	// parameter constructor
	Enemy               (int hp, std::string const & type);
	// destructor
	virtual ~Enemy      (void);
	// copy constructor
	Enemy               (Enemy const & src);
	// assignment operator
	Enemy                & operator=(Enemy const & src);

	// accessors
	int                 getHp() const;
	std::string const   getType() const;
	// mutators
	void                setHp(int hp);

	// methods
	virtual void		takeDamage(int amount);
};

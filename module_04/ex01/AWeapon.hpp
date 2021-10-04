#include <iostream>
#include <fstream>
#include <string>

class AWeapon {
protected:
	// data
	std::string const   _name;
	int                 _apcost;
	int                 _damage;

public:
	// default constructor
	AWeapon             (void);
	// parameter constructor
	AWeapon             (std::string const & name, int apcost, int damage);
	// destructor
	virtual	~AWeapon	(void);
	// copy constructor
	AWeapon             (AWeapon const & src);
	// assignment operator
	AWeapon              & operator=(AWeapon const & src);

	// accessors
	std::string const   getName() const;
	int                 getAPcost() const;
	int                 getDamage() const;
	// mutators
	void                setAPcost(int apcost);
	void                setDamage(int damage);

	// methods
	virtual void		attack() const = 0;
};

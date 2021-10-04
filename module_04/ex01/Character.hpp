#include "RadScorpion.hpp"
#include "PowerFist.hpp"

class Character {
private:
	// data
	std::string const		_name;
	int						_actionPoints;
	AWeapon*				_currentWeapon;

public:
	// default constructor
	Character           (void);
	// parameter constructor
	Character           (std::string const & name);
	// destructor
	~Character           (void);
	// copy constructor
	Character           (Character const & src);
	// assignment operator
	Character            & operator=(Character const & src);

	// accessors
	std::string const	getName() const;
	int                 getActionPoints() const;
	AWeapon*         	getCurrentWeapon() const;
	
	// methods
	void				recoverAP();
	void				equip(AWeapon* newWeapon);
	void				attack(Enemy* target);
};

std::ostream &			operator<<(std::ostream & out, Character const & dude);
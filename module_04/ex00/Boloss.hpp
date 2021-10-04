#include "Sorcerer.hpp"

class Boloss : public Victim {
private:
	// data

public:
	// default constructor
	Boloss              (void);
	Boloss(std::string name);
	// destructor
	~Boloss              (void);
	// copy constructor
	Boloss              (Boloss const & src);
	// assignment operator
	Boloss               & operator=(Boloss const & src);

	// methods
	virtual void		getPolymorphed() const;
};

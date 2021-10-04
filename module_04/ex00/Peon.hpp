#include "Victim.hpp"

class Peon : public Victim {
private:
	// data

public:
	// default constructor
	Peon                (void);
	Peon                (std::string);
	// destructor
	~Peon                (void);
	// copy constructor
	Peon                (Peon const & src);
	// assignment operator
	Peon                 & operator=(Peon const & src);

	// methods
	virtual void		getPolymorphed() const;
};

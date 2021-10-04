#include <iostream>
#include <string>


class Karen {
private:
	// data
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	// default constructor
	Karen               (void);
	// destructor
	~Karen               (void);
	// copy constructor
	Karen               (Karen const & src);
	// assignment operator
	Karen                & operator=(Karen const & src);

	// methods
	void				complain(std::string level);
};

struct complainLvl {
	void			(Karen::*ptr)(void);
	std::string		lvl;
};
#include "Boloss.hpp"

int	main(int ac, char **av) {
	(void)ac;
	(void)av;
	
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Boloss idiot("Idiot");
	Boloss null;
	std::cout << robert << jim << joe << idiot << null;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(idiot);
	robert.polymorph(null);
	return 0;
}

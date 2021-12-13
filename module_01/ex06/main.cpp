#include <stdlib.h>
#include "Karen.hpp"

int	filter_to_int(std::string filter) {
	if (!filter.compare("DEBUG"))
		return (0);
	else if (!filter.compare("INFO"))
		return (1);
	else if (!filter.compare("WARNING"))
		return (2);
	else if (!filter.compare("ERROR"))
		return (3);
	else
		return (4);
}

int	main(int ac, char **av) {
	Karen karen;
	
	if (ac > 2) {
		std::cout << "no more than 2 arguments" << std::endl;
		exit(0);
	}
	else if (ac == 1) {
		std::cout << "need one argument" << std::endl;
		exit(0);
	}
	std::string filter = std::string(av[1]);
	switch (filter_to_int(filter)) {
		case 0:
			karen.complain("debug");
			break;
		case 1:
			karen.complain("info");
			break;
		case 2:
			karen.complain("warning");
			break;
		case 3:
			karen.complain("error");
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	exit(0);
}

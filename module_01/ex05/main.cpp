#include "Karen.hpp"

int	main(int ac, char **av) {
	(void)ac;
	(void)av;

	Karen karen;

	karen.complain("debug");
	karen.complain("warning");
	karen.complain("info");
	karen.complain("error");
}

#include <iostream>
#include <string>
#include <cctype>

std::string checkDoubleSpaces(std::string str)
{
	std::string::size_type i = 0;

	while ((i = str.find("  ")) != std::string::npos)
	{
		str.erase(i, 1);
	}
	return (str);
}

std::string upperCase(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}

// Checkout string and cctype (string manipulation) libraries
int main(int ac, char **av) 
{
	std::string output;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		for (int i = 1; i < ac; i++)
		{
			output += av[i];
			if (av[i][0] == '"')
				i++;
			else if (i != ac - 1)
				output += ' ';
		}
		output = upperCase(output);
		output = checkDoubleSpaces(output);
		std::cout << output << '\n';
	} 
}
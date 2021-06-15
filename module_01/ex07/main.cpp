/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:54:34 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/15 12:42:08 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Need 3 arguments : filename | s1 | s2" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	reader(((std::string)av[1]).c_str());
	std::ofstream	output(((std::string)av[1] + ".replace").c_str());

	if (!reader || !output) {
		std::cout << "There was an issue with either the file opened or the file created." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string s2 = av[3];
	std::string s1 = av[2];
	if (s1 == "" || s2 == "") {
		std::cout << "There was an issue with one of the strings provided." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string	read;
	while (std::getline(reader, read)) {
		size_t	pos;
		while ((pos = read.find(s1)) != read.npos) {
			read.replace(pos, s1.length(), s2);
		}
		output << read << std::endl;
	}
	exit(EXIT_SUCCESS);
}

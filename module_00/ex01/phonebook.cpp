/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:43:30 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/10 18:03:00 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	multipleWords(std::string cmd) {
	int		wordCount = 0;
	bool	inWord = false;

	for (size_t i = 0; i < cmd.length(); i++) {
		if (cmd[i] == 32)
			inWord = false;
		else if (inWord == false) {
			inWord = true;
			wordCount++;
		}
	}
	if (wordCount > 1)
		return (true);
	return (false);
}

bool	unknownCmd(std::string cmd) {
	if (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
		return (true);
	return (false);
}

void	addContact(Contact *contact) {
	std::cout << CYAN"Please enter your contact's "RED"first name"CYAN" : ";
	std::cin >> contact->firstName;
	std::cout << CYAN"Please enter your contact's "RED"last name"CYAN" : ";
	std::cin >> contact->lastName;
	std::cout << CYAN"Please enter your contact's "RED"nickname"CYAN" : ";
	std::cin >> contact->nickname;
	std::cout << CYAN"Please enter your contact's "RED"login"CYAN" : ";
	std::cin >> contact->login;
	std::cout << CYAN"Please enter your contact's "RED"postal address"CYAN" : ";
	std::cin >> contact->postalAddress;
	std::cout << CYAN"Please enter your contact's "RED"email address"CYAN" : ";
	std::cin >> contact->emailAddress;
	std::cout << CYAN"Please enter your contact's "RED"phone number"CYAN" : ";
	std::cin >> contact->phoneNumber;
	std::cout << CYAN"Please enter your contact's "RED"birthday date"CYAN" : ";
	std::cin >> contact->birthdayDate;
	std::cout << CYAN"Please enter your contact's "RED"favorite meal"CYAN" : ";
	std::cin >> contact->favoriteMeal;
	std::cout << CYAN"Please enter your contact's "RED"underwear color"CYAN" : ";
	std::cin >> contact->underwearColor;
	std::cout << CYAN"Please enter your contact's "RED"darkest secret"CYAN" : ";
	std::cin >> contact->darkestSecret;
}

int		main(int ac, char **av) {
	std::string cmd;
	Contact		contacts[8];
	int			contactCount = 0;

	(void)av;
	if (ac > 1) {
		std::cout << "no arguments supported";
		exit(EXIT_FAILURE);
	}
	std::cout << CYAN"Welcome to your "RED"Awesome Phonebook"CYAN"!" << std::endl;
	std::cout << CYAN"You're welcome to add up to "RED"EIGHT"CYAN" contacts." << std::endl;
	std::cout << CYAN"You can use the commands "RED"ADD"CYAN", "RED"SEARCH"CYAN" or "RED"EXIT"CYAN"." << std::endl;
	while (42) {
		std::cout << CYAN"AwePB ~ "RED;
		std::getline(std::cin, cmd);
		if (multipleWords(cmd) || unknownCmd(cmd)) {
			std::cout << RED"COMMAND UNKNOWN"RESET << std::endl;
			continue ;
		} else if (cmd == "EXIT") {
			std::cout << CYAN"Sad to see you go.\n"RED"Bye-bye"RESET << std::endl;
			exit(EXIT_SUCCESS);
		} else if (cmd == "ADD") {
			addContact(&contacts[contactCount]);
			contactCount++;
		}
	}
	exit(EXIT_SUCCESS);
}
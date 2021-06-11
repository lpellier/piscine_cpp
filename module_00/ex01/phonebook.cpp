/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:43:30 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 11:06:12 by lpellier         ###   ########.fr       */
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
	std::cout << CYAN"Please enter your contact's "RED"first name"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->firstName);
	std::cout << CYAN"Please enter your contact's "RED"last name"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->lastName);
	std::cout << CYAN"Please enter your contact's "RED"nickname"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->nickname);
	std::cout << CYAN"Please enter your contact's "RED"login"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->login);
	std::cout << CYAN"Please enter your contact's "RED"postal address"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->postalAddress);
	std::cout << CYAN"Please enter your contact's "RED"email address"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->emailAddress);
	std::cout << CYAN"Please enter your contact's "RED"phone number"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->phoneNumber);
	std::cout << CYAN"Please enter your contact's "RED"birthday date"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->birthdayDate);
	std::cout << CYAN"Please enter your contact's "RED"favorite meal"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->favoriteMeal);
	std::cout << CYAN"Please enter your contact's "RED"underwear color"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->underwearColor);
	std::cout << CYAN"Please enter your contact's "RED"darkest secret"CYAN"." << RED << std::endl;
	std::getline(std::cin, contact->darkestSecret);
	std::cout << RED << contact->firstName << " " << contact->lastName << CYAN" entered in phonebook." << std::endl;
}

void	outputContact(Contact contact) {
	std::cout << CYAN << "First name      : " << RED << contact.firstName << std::endl;
	std::cout << CYAN << "Last name       : " << RED << contact.lastName << std::endl;
	std::cout << CYAN << "Nickname        : " << RED << contact.nickname << std::endl;
	std::cout << CYAN << "Login           : " << RED << contact.login << std::endl;
	std::cout << CYAN << "Postal address  : " << RED << contact.postalAddress << std::endl;
	std::cout << CYAN << "Email address   : " << RED << contact.emailAddress << std::endl;
	std::cout << CYAN << "Phone number    : " << RED << contact.phoneNumber << std::endl;
	std::cout << CYAN << "Birthday date   : " << RED << contact.birthdayDate << std::endl;
	std::cout << CYAN << "Favorite meal   : " << RED << contact.favoriteMeal << std::endl;
	std::cout << CYAN << "Underwear color : " << RED << contact.underwearColor << std::endl;
	std::cout << CYAN << "Darkest secret  : " << RED << contact.darkestSecret << std::endl;
}

void	searchContacts(Contact contacts[8], int contactCount) {
	int		desiredIndex;
	
	if (contactCount == 0) {
		std::cout << CYAN << "No contacts are registered in your " << RED << "Awesome Phonebook" << CYAN << "." << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << CYAN << "|" << RED << std::setw(10) << "index" << CYAN << "|";
	std::cout << RED << std::setw(10) << "first name" << CYAN << "|";
	std::cout << RED << std::setw(10) << "last name" << CYAN << "|";
	std::cout << RED << std::setw(10) << "nickname" << CYAN << "|" << std::endl;
	for (int line = 0; line < contactCount; line++) {
		std::cout << CYAN << "|" << RED << std::setw(10) << line + 1 << CYAN << "|";
		if (contacts[line].firstName.length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].firstName.substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].firstName;
		std::cout << CYAN << "|";
		if (contacts[line].lastName.length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].lastName.substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].lastName;
		std::cout << CYAN << "|";
		if (contacts[line].nickname.length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].nickname.substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].nickname;
		std::cout << CYAN << "|" << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << CYAN << "Please enter the index associated to the person you wish to see the information of." << RED << std::endl;
	while (42) {
		std::cout << "Index : ";
		std::cin >> desiredIndex;
		if (!std::cin) {
			std::cout << CYAN << "Please enter an integer." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} else if (desiredIndex > contactCount || desiredIndex == 0) {
			std::cout << CYAN << "Please enter an index in the range of 1 to " << RED << contactCount << std::endl;
		} else {
			break ;
		}
	}
	outputContact(contacts[desiredIndex - 1]);
}

int		main(int ac, char **av) {
	std::string cmd;
	Contact		contacts[8];
	int			contactCount = 0;

	(void)av;
	if (ac > 1) {
		std::cout << "no arguments supported" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << CYAN"Welcome to your "RED"Awesome Phonebook"CYAN"!" << std::endl;
	std::cout << CYAN"You're welcome to add up to "RED"EIGHT"CYAN" contacts." << std::endl;
	std::cout << CYAN"You can use the commands "RED"ADD"CYAN", "RED"SEARCH"CYAN" or "RED"EXIT"CYAN"." << std::endl;
	while (42) {
		std::cout << CYAN"AwePB ~ "RED;
		std::cin >> cmd;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (cmd == "EXIT") {
			std::cout << CYAN"Sad to see you go.\n"RED"Bye-bye"RESET << std::endl;
			exit(EXIT_SUCCESS);
		} else if (cmd == "ADD") {
			if (contactCount >= 8) {
				std::cout << CYAN"Contact capacity reached. This phonebook sucks." << std::endl;
			} else {
				addContact(&contacts[contactCount]);
				contactCount++;
			}
		} else if (cmd == "SEARCH") {
			searchContacts(contacts, contactCount);
		}
	}
	exit(EXIT_SUCCESS);
}
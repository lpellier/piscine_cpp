/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:43:30 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 11:14:29 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# define RED "\033[31m"
# define BLUE "\033[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

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
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	
	std::cout << CYAN"Please enter your contact's " << RED"first name" << CYAN"." << RED << std::endl;
	std::getline(std::cin, firstName);
	std::cout << CYAN"Please enter your contact's " << RED"last name" << CYAN"." << RED << std::endl;
	std::getline(std::cin, lastName);
	std::cout << CYAN"Please enter your contact's " << RED"nickname" << CYAN"." << RED << std::endl;
	std::getline(std::cin, nickname);
	std::cout << CYAN"Please enter your contact's " << RED"phone number" << CYAN"." << RED << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << CYAN"Please enter your contact's " << RED"darkest secret" << CYAN"." << RED << std::endl;
	std::getline(std::cin, darkestSecret);

	contact->setFirstName(firstName);
	contact->setLastName(lastName);
	contact->setNickname(nickname);
	contact->setPhoneNumber(phoneNumber);
	contact->setDarkestSecret(darkestSecret);
	std::cout << RED << contact->getFirstName() << " " << contact->getLastName() << CYAN" entered in phonebook." << std::endl;
}

void	outputContact(Contact contact) {
	std::cout << CYAN << "First name      : " << RED << contact.getFirstName() << std::endl;
	std::cout << CYAN << "Last name       : " << RED << contact.getLastName() << std::endl;
	std::cout << CYAN << "Nickname        : " << RED << contact.getNickname() << std::endl;
	std::cout << CYAN << "Phone number    : " << RED << contact.getPhoneNumber() << std::endl;
	std::cout << CYAN << "Darkest secret  : " << RED << contact.getDarkestSecret() << std::endl;
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
		if (contacts[line].getFirstName().length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].getFirstName().substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].getFirstName();
		std::cout << CYAN << "|";
		if (contacts[line].getLastName().length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].getLastName().substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].getLastName();
		std::cout << CYAN << "|";
		if (contacts[line].getNickname().length() > 9)
			std::cout << RED << std::setw(10) << contacts[line].getNickname().substr(0, 9) + "."; 
		else
			std::cout << RED << std::setw(10) << contacts[line].getNickname();
		std::cout << CYAN << "|" << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << CYAN << "Please enter the index associated to the person you wish to see the information of." << RED << std::endl;
	while (42) {
		std::cout << RED << "Index : ";
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
	PhoneBook phonebook;
	int			contactCount = 0;

	(void)av;
	if (ac > 1) {
		std::cout << "no arguments supported" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << CYAN"Welcome to your " << RED << "Awesome Phonebook" << CYAN << "!" << std::endl;
	std::cout << CYAN"You're welcome to add up to " << RED << "EIGHT" << CYAN << " contacts." << std::endl;
	std::cout << CYAN"You can use the commands " << RED << "ADD" << CYAN << ", " << RED << "SEARCH" << CYAN << " or " << RED << "EXIT" << CYAN << "." << std::endl;
	while (42) {
		std::cout << CYAN"AwePB ~ " << RED;
		std::cin >> cmd;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (cmd == "EXIT") {
			std::cout << CYAN"Sad to see you go.\n" << RED << "Bye-bye" << RESET << std::endl;
			exit(EXIT_SUCCESS);
		} else if (cmd == "ADD") {
			if (contactCount >= 8) {
				std::cout << CYAN"Contact capacity reached. This phonebook sucks." << std::endl;
			} else {
				addContact(&phonebook.contacts[contactCount]);
				contactCount++;
			}
		} else if (cmd == "SEARCH") {
			searchContacts(phonebook.contacts, contactCount);
		}
	}
	exit(EXIT_SUCCESS);
}
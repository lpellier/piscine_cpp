/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:43:17 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 10:58:36 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Contact.class.hpp"

# define RED "\033[31m"
# define BLUE "\033[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

bool	multipleWords(std::string cmd);
bool	unknownCmd(std::string cmd);
void	addContact(Contact *contact);
void	outputContact(Contact contact);
void	searchContacts(Contact contacts[8], int contactCount);

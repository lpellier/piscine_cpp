/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:02:08 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/04 12:46:23 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
public:
	Contact             contacts[8];
	// default constructor
	PhoneBook           (void);
	// parameter constructor
	PhoneBook           (Contact contacts[8]);
	// destructor
	~PhoneBook           (void);
	// copy constructor
	PhoneBook           (PhoneBook const & src);
	// assignment operator
	PhoneBook            & operator=(PhoneBook const & src);

};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:27:59 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/18 16:27:00 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Victim {
protected:
	std::string _name;

public:
	// default constructor
	Victim(void);
	Victim(std::string name);
	// destructor
	~Victim(void);
	// copy constructor
	Victim(Victim const & src);
	// assignment operator
	Victim & operator=(Victim const & src);

	// getters
	std::string		getName() const;

	// methods
	virtual void			getPolymorphed() const;
};

std::ostream &	operator<<(std::ostream & output, const Victim & victim);

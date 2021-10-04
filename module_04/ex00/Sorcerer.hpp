/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:48:59 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/17 14:29:31 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

class Sorcerer {
private:
	std::string		_name;
	std::string		_title;

public:
	// default constructor
					Sorcerer(void);
					Sorcerer(std::string name, std::string title);
	// destructor
					~Sorcerer(void);
	// copy constructor
					Sorcerer(Sorcerer const & src);
	// assignment operator
	Sorcerer &		operator=(Sorcerer const & src);

	// getters
	std::string		getName() const;
	std::string		getTitle() const;

	// methods
	void			polymorph(Victim const &) const;
};

std::ostream &		operator<<(std::ostream & output, const Sorcerer & sorcerer);

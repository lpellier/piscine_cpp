/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 16:00:24 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
private:

public:
	// default constructor
	ScavTrap();
	ScavTrap(std::string name);
	// destructor
	~ScavTrap();
	// copy constructor
	ScavTrap(ScavTrap const & src);
	// assignment operator
	ScavTrap & operator=(ScavTrap const & src);

	// this functions activates a random challenge hopefully fun
	void		challengeNewcomer();
};

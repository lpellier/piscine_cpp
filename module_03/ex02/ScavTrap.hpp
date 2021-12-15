/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/15 15:24:09 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

	// this functions lets ScavMan guard the gate ya know
	void		guardGate();
	void		attack(std::string const & target) const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 14:54:42 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
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
};

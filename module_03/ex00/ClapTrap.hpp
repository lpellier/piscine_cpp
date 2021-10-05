/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:20 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 15:15:38 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
private:
	// hit points number cannot exceed maxHitPoints or fall below 0
	int			_hitPoints;
	// energy points number cannot exceed maxEnergyPoints or fall below 0
	int			_energyPoints;
	std::string	_name;
	int			_attackDamage;

public:
	// constructors / destructors
				ClapTrap();
				ClapTrap(std::string name);
				ClapTrap(ClapTrap const & src);

				~ClapTrap();

				ClapTrap & operator=(ClapTrap const & src);

	// actions
	void		attack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	// accessors
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
};



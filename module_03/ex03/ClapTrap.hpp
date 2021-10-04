/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:20 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 17:51:31 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap {
protected:
	// hit points number cannot exceed maxHitPoints or fall below 0
	int			_hitPoints;
	int			_maxHitPoints;
	// energy points number cannot exceed maxEnergyPoints or fall below 0
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	// will be applied to each hit taken
	int			_armorDamageReduction;

public:
	// constructors / destructors
				ClapTrap();
				ClapTrap(std::string name);
				ClapTrap(ClapTrap const & src);

				~ClapTrap();

				ClapTrap & operator=(ClapTrap const & src);

	// actions
	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	// accessors
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getLevel() const;
};



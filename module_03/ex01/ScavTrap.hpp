/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:59:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 14:59:15 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ScavTrap {
private:
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
	// default constructor
	ScavTrap();
	ScavTrap(std::string name);
	// destructor
	~ScavTrap();
	// copy constructor
	ScavTrap(ScavTrap const & src);
	// assignment operator
	ScavTrap & operator=(ScavTrap const & src);

	// actions
	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	// this functions activates a random challenge hopefully fun
	void		challengeNewcomer();

	// accessors
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getLevel() const;
};

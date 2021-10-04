/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:20 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 17:22:49 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	// constructors / destructors
				FragTrap();
				FragTrap(std::string name);
				FragTrap(FragTrap const & src);

				~FragTrap();

				FragTrap & operator=(FragTrap const & src);

	// this functions activates a random attack (among 5 possible ones) on the target
	// the attack costs 25 energy points. 
	void		vaulthunter_dot_exe(std::string const & target);
};



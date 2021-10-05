/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:20 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 13:13:23 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	// constructors / destructors
				FragTrap();
				FragTrap(std::string name);
				FragTrap(FragTrap const & src);

				~FragTrap();

				FragTrap & operator=(FragTrap const & src);

	void		highFivesGuys(void);
};



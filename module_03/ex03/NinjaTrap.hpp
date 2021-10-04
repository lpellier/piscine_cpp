/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:07:00 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 17:51:28 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
private:
	// data

public:
	// default constructor
	NinjaTrap(void);
	NinjaTrap(std::string name);
	// destructor
	~NinjaTrap(void);
	// copy constructor
	NinjaTrap(NinjaTrap const & src);
	// assignment operator
	NinjaTrap & operator=(NinjaTrap const & src);

	// methods
	void		ninjaShoebox(ClapTrap const & src);
	void		ninjaShoebox(FragTrap const & src);
	void		ninjaShoebox(ScavTrap const & src);
	void		ninjaShoebox(NinjaTrap const & src);
};

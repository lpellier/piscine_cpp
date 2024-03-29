/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:42:42 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 11:41:44 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB {
private:
	std::string const	_name;
	Weapon *			_weapon;
public:
	HumanB(std::string const name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon &weapon);
};
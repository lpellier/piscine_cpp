/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:37:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 20:41:57 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
private:
	std::string const	_name;
	Weapon&				_weapon;
public:
	HumanA(std::string const name, Weapon &weapon);
	~HumanA();

	void	attack() const;
};

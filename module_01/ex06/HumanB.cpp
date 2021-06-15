/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:43:10 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 20:49:27 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

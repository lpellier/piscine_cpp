/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:26:33 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 19:37:38 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string const	&Weapon::getType() const {
	std::string const &weaponRef = this->_type;
	return (weaponRef);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}
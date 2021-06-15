/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:41 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:05:05 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(std::string message) const {
	std::cout << "<" << this->name << " (" << this->type << ")> " << message << std::endl;
}

Zombie::Zombie(std::string p1, std::string p2) : name(p1), type(p2) {
	this->announce("braiiiinnnnnnssss....");
}

Zombie::~Zombie() {
	this->announce("ughhhhhhhhh im dyiiiiing");
}
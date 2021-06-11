/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:41 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 13:12:47 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(std::string message) 
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << message << std::endl;
}

Zombie::Zombie()
{
	this->name = "boyo";
	this->type = "basic bitch";
	this->announce("braiiiinnnnnnssss....");
}

Zombie::~Zombie()
{
	this->announce("ughhhhhhhhh im dyiiiiing");
}
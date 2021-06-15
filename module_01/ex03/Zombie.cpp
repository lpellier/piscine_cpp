/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:41 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:00:48 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(std::string message) const {
	std::cout << "<" << this->name << " (" << this->type << ")> " << message << std::endl;
}

Zombie::Zombie() {
	std::string		names[10] = {"jean-mi", "jean-henri", "jean-tom", "jean-alice", "jean", "jeanne", "jean-pierre alias jp", "jean quête", "jean c*le", "jeantil"};
	std::string		types[5] = {"le zonzon", "le big boi", "le petit boi", "le rat", "le bon a rien"};
	static int				randName, randType;
	int						oldRandName, oldRandType;
	
	oldRandName = randName;
	oldRandType = randType;
	randName = rand() % 10;
	randType = rand() % 5;
	if (randName == oldRandName)
		randName = rand() % 10;
	if (randType == oldRandType)
		randType = rand() % 5;
	this->name = names[randName];
	this->type = names[randType];
}

Zombie::~Zombie() {
	this->announce("ughhhhhhhhh im dyiiiiing");
}

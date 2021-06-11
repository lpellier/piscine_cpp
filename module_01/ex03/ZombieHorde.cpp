/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:48:33 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 13:25:39 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->zombieNbr = n;
	this->Horde = new Zombie[n];
}

ZombieHorde::~ZombieHorde() {
	delete [] this->Horde;
}

void	ZombieHorde::announce(std::string message) {
	for (int i = 0; i < this->zombieNbr; i++)
		this->Horde[i].announce(message);
}
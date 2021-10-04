/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:48:33 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/04 15:20:02 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int n, std::string name) {
	Zombie *horde;
	int i = 0;
	
	horde = new Zombie[n];
	while (i < n) {
		horde[i].setName(name);
		i++;
	}
	return horde;
}

// ZombieHorde::~ZombieHorde() {
// 	delete [] this->Horde;
// }

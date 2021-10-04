/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:54:53 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/04 15:20:46 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int n, std::string name);

int		main() {
	Zombie *horde = zombieHorde(5, "zaomby");

	int i = 0;
	while (i < 5) {
		horde[i].announce();
		i++;
	}
	delete [] horde;
	exit(0);
}

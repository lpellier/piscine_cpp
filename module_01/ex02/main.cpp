/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:54:53 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:02:29 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main() {
	ZombieEvent	events;
	Zombie	*notype = events.newZombie("notype man");

	events.setZombieType(notype, "typeguy");
	notype->announce("braiiiiinnnnns.... (i got a type now dont be jealous)");
	delete notype;
	std::cout << std::endl;

	srand(time(0));
	events.randomChump();
	std::cout << std::endl;
	events.randomChump();
	std::cout << std::endl;
	events.randomChump();
	std::cout << std::endl;
	events.randomChump();
	std::cout << std::endl;
	events.randomChump();
	exit(0);
}

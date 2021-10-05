/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 13:14:21 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	srand(time(0));
	{
		ClapTrap claptp("Idiot");
		ClapTrap claptpTwo;

		ClapTrap claptpThree(claptpTwo);
		claptpTwo = claptp;
		claptp.attack("dummyOne");
		claptp.attack("dummyTwo");
		std::cout << "CL4P-TP " << claptp.getName() << " has " << claptp.getHitPoints() << " HP and " << claptp.getEnergyPoints() << " EP." << std::endl;
		claptp.beRepaired(10);
		std::cout << "CL4P-TP " << claptp.getName() << " has " << claptp.getHitPoints() << " HP and " << claptp.getEnergyPoints() << " EP." << std::endl;
		claptp.takeDamage(99);
		std::cout << "CL4P-TP " << claptp.getName() << " has " << claptp.getHitPoints() << " HP and " << claptp.getEnergyPoints() << " EP." << std::endl;
		claptp.beRepaired(150);
		std::cout << "CL4P-TP " << claptp.getName() << " has " << claptp.getHitPoints() << " HP and " << claptp.getEnergyPoints() << " EP." << std::endl;

		claptp.takeDamage(666);
	}
	std::cout << std::endl << std::endl;
	{
		ScavTrap scavtp("Fucker");
		ScavTrap scavtpTwo;

		ScavTrap scavtpThree(scavtpTwo);
		scavtpTwo = scavtp;
		scavtp.attack("dummyOne");
		scavtp.attack("dummyTwo");
		std::cout << "SC4V-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.beRepaired(10);
		std::cout << "SC4V-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.takeDamage(99);
		std::cout << "SC4V-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.beRepaired(150);
		std::cout << "SC4V-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;

		scavtp.guardGate();
		scavtp.takeDamage(666);
	}
	exit(0);
}
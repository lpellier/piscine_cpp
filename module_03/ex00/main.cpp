/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/05 11:25:04 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	exit(0);
}
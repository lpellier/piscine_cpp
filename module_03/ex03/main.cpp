/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/15 15:29:10 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
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
	std::cout << std::endl << std::endl;
	{
		FragTrap fragtp("Jean-Mi");
		FragTrap fragtpTwo;

		FragTrap fragtpThree(fragtpTwo);
		fragtpTwo = fragtp;
		fragtp.attack("dummyOne");
		fragtp.attack("dummyTwo");
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.beRepaired(10);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.takeDamage(99);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.beRepaired(150);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;

		fragtp.highFivesGuys();
		fragtp.takeDamage(666);
	}	
	std::cout << std::endl << std::endl;
	{
		DiamondTrap diamdtp("Eudes");
		DiamondTrap diamdtpTwo;

		DiamondTrap diamdtpThree(diamdtpTwo);
		diamdtpTwo = diamdtp;
		diamdtp.attack("dummyOne");
		diamdtp.attack("dummyTwo");
		std::cout << "DI4MD-TP " << diamdtp.getName() << " has " << diamdtp.getHitPoints() << " HP and " << diamdtp.getEnergyPoints() << " EP." << std::endl;
		diamdtp.beRepaired(10);
		std::cout << "DI4MD-TP " << diamdtp.getName() << " has " << diamdtp.getHitPoints() << " HP and " << diamdtp.getEnergyPoints() << " EP." << std::endl;
		diamdtp.takeDamage(99);
		std::cout << "DI4MD-TP " << diamdtp.getName() << " has " << diamdtp.getHitPoints() << " HP and " << diamdtp.getEnergyPoints() << " EP." << std::endl;
		diamdtp.beRepaired(150);
		std::cout << "DI4MD-TP " << diamdtp.getName() << " has " << diamdtp.getHitPoints() << " HP and " << diamdtp.getEnergyPoints() << " EP." << std::endl;

		diamdtp.guardGate();
		diamdtp.highFivesGuys();
		diamdtp.whoAmI();
		diamdtp.takeDamage(666);
	}
}
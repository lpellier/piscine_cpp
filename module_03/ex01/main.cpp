/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 15:33:02 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	srand(time(0));
	{
		FragTrap fragtp("fragotrapo");
		FragTrap fragtpTwo;

		FragTrap fragtpThree(fragtpTwo);
		fragtpTwo = fragtp;
		fragtp.rangedAttack("dummyOne");
		fragtp.meleeAttack("dummyTwo");
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.beRepaired(10);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.takeDamage(99);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;
		fragtp.beRepaired(150);
		std::cout << "FR4G-TP " << fragtp.getName() << " has " << fragtp.getHitPoints() << " HP and " << fragtp.getEnergyPoints() << " EP." << std::endl;

		for (int i = 0; i < 5; i++) {
			fragtp.vaulthunter_dot_exe("fucker");
		}
		fragtp.takeDamage(105);
	}
	{
		ScavTrap scavtp("scavtrapini");
		ScavTrap scavtpTwo;

		ScavTrap scavtpThree(scavtpTwo);
		scavtpTwo = scavtp;
		scavtp.rangedAttack("dummyOne");
		scavtp.meleeAttack("dummyTwo");
		std::cout << "FR4G-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.beRepaired(10);
		std::cout << "FR4G-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.takeDamage(99);
		std::cout << "FR4G-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;
		scavtp.beRepaired(150);
		std::cout << "FR4G-TP " << scavtp.getName() << " has " << scavtp.getHitPoints() << " HP and " << scavtp.getEnergyPoints() << " EP." << std::endl;

		scavtp.challengeNewcomer();
		scavtp.takeDamage(105);
	}
	exit(0);
}
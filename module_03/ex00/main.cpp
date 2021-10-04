/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 12:54:52 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	srand(time(0));
	{
		FragTrap fragtp("Idiot");
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
	exit(0);
}
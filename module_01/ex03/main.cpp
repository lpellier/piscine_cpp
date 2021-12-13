/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:09:29 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 11:49:54 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main() {
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA bob("Bob", club); 
		// Because HumanA should ALWAYS be armed, a reference fits his profile
		// References cannot be null
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon		club = Weapon("crude spiked club");

		HumanB jim("Jim");
		// Because HumanB doesn't take a weapon in his constructor, his weapon might be NULL
		// This is why a pointer fits hits profile since we can set it to NULL
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	exit(0);
}

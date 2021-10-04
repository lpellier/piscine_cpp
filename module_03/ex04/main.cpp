/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:33:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 18:22:12 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int	main(void) {
	srand(time(0));
	{
		SuperTrap sprtp("michel");
		sprtp.meleeAttack("targetOne");
		sprtp.rangedAttack("targetTwo");
		sprtp.getEnergyPoints();
		sprtp.getHitPoints();
	}
	exit(0);
}
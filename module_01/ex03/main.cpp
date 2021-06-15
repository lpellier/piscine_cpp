/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:54:53 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:01:18 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main() {
	srand(time(0));
	ZombieHorde *horde = new ZombieHorde(5);

	horde->announce("brainnns.. lol");
	std::cout << std::endl;
	delete horde;
	exit(0);
}

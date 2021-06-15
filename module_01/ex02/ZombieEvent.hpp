/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:30 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:01:41 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"

class ZombieEvent {
public:
	void	setZombieType(Zombie *zombie, std::string type) const;
	Zombie	*newZombie(std::string name) const;
	void	randomChump() const;
};

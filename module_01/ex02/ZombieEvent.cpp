/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:50 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 12:45:04 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	zombie->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, "basic bitch");
	return (zombie);
}

void	ZombieEvent::randomChump()
{
	std::string		names[10] = {"jean-mi", "jean-henri", "jean-tom", "jean-alice", "jean", "jeanne", "jean-pierre alias jp", "jean quête", "jean c*le", "jeantil"};
	std::string		types[5] = {"le zonzon", "le big boi", "le petit boi", "le rat", "le bon a rien"};
	static int				randName, randType;
	int						oldRandName, oldRandType;
	
	oldRandName = randName;
	oldRandType = randType;
	randName = rand() % 10;
	randType = rand() % 5;
	if (randName == oldRandName)
		randName = rand() % 10;
	if (randType == oldRandType)
		randType = rand() % 5;
	Zombie newChump = Zombie(names[randName], types[randType]);
	newChump.announce("im a random chump and i need brainnnnnnnnssss.....");
}

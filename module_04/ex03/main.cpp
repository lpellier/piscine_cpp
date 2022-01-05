/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:26:49 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/05 16:55:36 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp" 

int main() {
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	ICharacter *player = new Character("player");
	ICharacter *enemy = new Character("enemy");

	player->equip(ice);
	player->equip(cure);
	player->use(0, *enemy);
	player->use(1, *player);
	player->unequip(0);
	player->unequip(2); // does nothing
	enemy->use(2, *player); // does nothing
	enemy->equip(ice->clone());
	enemy->use(0, *player);

	player->equip(ice);
	player->use(0, *player); // should output ice msg

	delete player;
	delete enemy;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

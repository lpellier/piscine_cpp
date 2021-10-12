/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:26:49 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/12 15:16:01 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp" 

int main() {
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	ICharacter *player = new Character("player");
	ICharacter *ennemy = new Character("enemy");

	player->equip(ice);
	player->equip(cure);
	player->use(0, *ennemy);
	player->use(1, *player);
	player->unequip(0);
	player->unequip(2); // does nothing
	ennemy->use(2, *player); // does nothing
	ennemy->equip(ice);
	ennemy->use(0, *player);

	*cure = *ice; // don't know if can make this work
	cure = ice;
	player->equip(cure);
	player->use(0, *ennemy); // should output ice msg

	std::cout << std::endl;

	{
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
}

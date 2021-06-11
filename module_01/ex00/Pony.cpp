/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:07:59 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 12:56:32 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void) {
	Pony pony = Pony("brown", "short", "white spots", "bojack", "brown", "male", 155, 54);

	std::cout << "pfrrrrttttt im " << pony.name << " the pony pfrrrt" << std::endl;
	std::cout << "im " << pony.color << " and i got " << pony.pattern << " ooh and a " << pony.mane << " mane" << std::endl;
	std::cout << "im a " << pony.sex <<", obviously. my eyes are " << pony.eyeColor << std::endl;
	std::cout << "btw im " << pony.age << " and i weigh " << pony.weightKg << " kilos yo" << std::endl;
	std::cout << "ALLOCATED ON THE STACK BABYYYY PFRRRRTTTT *pony sounds*" << std::endl;
}

void	ponyOnTheHeap(void) {
	Pony *pony = new Pony("white", "long and curly", "a uniform color", "horsey", "grey", "male", 120, 16);

	std::cout << "pfrrrrttttt im " << pony->name << " the pony pfrrrt" << std::endl;
	std::cout << "im " << pony->color << " and i got " << pony->pattern << " ooh and a " << pony->mane << " mane" << std::endl;
	std::cout << "im a " << pony->sex <<", obviously. my eyes are " << pony->eyeColor << std::endl;
	std::cout << "btw im " << pony->age << " and i weigh " << pony->weightKg << " kilos yo" << std::endl;
	std::cout << "ALLOCATED ON THE HEAP BABYYYY PFRRRRTTTT *pony sounds*" << std::endl;
	delete pony;
}

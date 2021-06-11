/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:08:02 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 12:56:34 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony {
	public:
		std::string	color;
		std::string	mane;
		std::string	pattern;
		std::string name;
		std::string	eyeColor;
		std::string	sex;
		int			weightKg;
		int			age;

		Pony(std::string color, std::string mane, std::string pattern, std::string name, 
			std::string eyeColor, std::string sex, int weightKg, int age) : 
			color(color), mane(mane), pattern(pattern), name(name), eyeColor(eyeColor), 
			sex(sex), weightKg(weightKg), age(age)
		{}
};

void	ponyOnTheStack(void);
void	ponyOnTheHeap(void);


#endif

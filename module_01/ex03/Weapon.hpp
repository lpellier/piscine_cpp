/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:24:07 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 11:40:48 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType() const;
		void				setType(std::string);
};

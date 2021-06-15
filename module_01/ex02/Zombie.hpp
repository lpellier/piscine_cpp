/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:55:24 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:04:41 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
	public:
		std::string name;
		std::string type;
		Zombie(std::string p1, std::string p2);
		~Zombie();
		void	announce(std::string message) const;
};
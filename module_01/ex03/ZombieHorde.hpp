/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:48:28 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 16:00:19 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde {
	private:
		int		zombieNbr;
	public:
		Zombie	*Horde;

		ZombieHorde(int n);
		~ZombieHorde();
		void	announce(std::string message) const;
};
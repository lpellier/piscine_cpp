/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:28:31 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 19:18:11 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include <string>
#include <iostream>

class	Brain {
	public:
		Brain();
		~Brain();

		void	*identify() const;
};

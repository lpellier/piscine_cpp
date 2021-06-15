/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:28:20 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 19:18:05 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain " << this->identify() << " has been instantiated." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain " << this->identify() << " has died" << std::endl;
}

void	*Brain::identify() const {
	return (void *)this;
}

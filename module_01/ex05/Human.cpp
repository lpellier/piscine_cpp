/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:44:42 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 19:17:13 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "A human with brain " << this->_brain.identify() << " is born." << std::endl;
}

Human::~Human() {
	std::cout << "A human with brain " << this->_brain.identify() << " has died." << std::endl;
}

void*	Human::identify() const {
	return this->_brain.identify();
}

Brain const	&Human::getBrain() const {
	return this->_brain;
}

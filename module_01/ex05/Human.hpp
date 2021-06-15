/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:44:46 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 19:18:17 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human {
private:
	Brain const _brain;
public:
	Human();
	~Human();

	void*	identify() const;
	Brain const	&getBrain() const;
};


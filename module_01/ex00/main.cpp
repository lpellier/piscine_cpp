/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:07:42 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/11 11:46:18 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(int ac, char **av) {
	(void)ac;
	(void)av;
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	exit(0);
}
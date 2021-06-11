/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:43:24 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/10 15:43:27 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

// Checkout string and cctype (string manipulation) libraries
int main(int ac, char **av) {
	std::string output;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		for (int i = 1; i < ac; i++) {
			output += av[i];
		}
		for (size_t i = 0; i < output.length(); i++) {
			output[i] = std::toupper(output[i]);
		}
		std::cout << output;
	}
}
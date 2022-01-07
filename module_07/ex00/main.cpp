/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:29:23 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/06 15:27:36 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	{
		std::cout << "SWAP" << std::endl;
		std::string s1 = "first";
		std::string s2 = "second";
		std::cout << s1 << " " << s2 << std::endl;
		swap(s1, s2);
		std::cout << s1 << " " << s2 << std::endl;	

		int		i1 = 1;
		int		i2 = 2;
		std::cout << i1 << " " << i2 << std::endl;
		swap(i1, i2);
		std::cout << i1 << " " << i2 << std::endl;

		float	f1 = 1.11;
		float	f2 = 2.22;
		std::cout << f1 << " " << f2 << std::endl;
		swap(f1, f2);
		std::cout << f1 << " " << f2 << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "MIN" << std::endl;
		std::string s1 = "first";
		std::string s2 = "second";
		std::cout << s1 << " " << s2 << std::endl;
		std::cout << "min : " << min(s1, s2) << std::endl;	

		int		i1 = 1;
		int		i2 = 2;
		std::cout << i1 << " " << i2 << std::endl;
		std::cout << "min : " << min(i1, i2) << std::endl;	

		float	f1 = 1.11;
		float	f2 = 2.22;
		std::cout << f1 << " " << f2 << std::endl;
		std::cout << "min : " << min(f1, f2) << std::endl;	
		std::cout << std::endl;
	}
	{
		std::cout << "MAX" << std::endl;
		std::string s1 = "first";
		std::string s2 = "second";
		std::cout << s1 << " " << s2 << std::endl;
		std::cout << "max : " << max(s1, s2) << std::endl;	

		int		i1 = 1;
		int		i2 = 2;
		std::cout << i1 << " " << i2 << std::endl;
		std::cout << "max : " << max(i1, i2) << std::endl;	

		float	f1 = 1.11;
		float	f2 = 2.22;
		std::cout << f1 << " " << f2 << std::endl;
		std::cout << "max : " << max(f1, f2) << std::endl;	
		std::cout << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:45:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:52 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	
	private:
		int					_fixedValue;
		static const int	_binaryPoint = 8;

	public:
				Fixed();
				Fixed(const int n);
				Fixed(const float n);
				~Fixed();
				Fixed(Fixed const & src);
		Fixed &	operator=(Fixed const & src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&	operator<<(std::ostream & os, const Fixed & n);

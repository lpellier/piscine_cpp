/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:45:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/13 15:03:53 by lpellier         ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed &	operator=(Fixed const & src);
		bool	operator>(const Fixed & src) const;
		bool	operator<(const Fixed & src) const;
		bool	operator>=(const Fixed & src) const;
		bool	operator<=(const Fixed & src) const;
		bool	operator==(const Fixed & src) const;
		bool	operator!=(const Fixed & src) const;
		Fixed	operator+(const Fixed & src) const;
		Fixed	operator-(const Fixed & src) const;
		Fixed	operator*(const Fixed & src) const;
		Fixed	operator/(const Fixed & src) const;
		Fixed &	operator++(void);
		Fixed &	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed &	min(Fixed &a, Fixed &b);
		Fixed &	max(Fixed &a, Fixed &b);
		const static Fixed & min(const Fixed &a, const Fixed &b);
		const static Fixed & max(const Fixed &a, const Fixed &b);
};

std::ostream	&	operator<<(std::ostream & os, const Fixed & n);

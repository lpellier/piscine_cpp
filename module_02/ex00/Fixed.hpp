/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:45:52 by lpellier          #+#    #+#             */
/*   Updated: 2021/12/15 17:07:01 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
	
	private:
		int					_fixedValue;
		static const int	_binaryPoint = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed &		operator=(Fixed const & src);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:41:16 by lpellier          #+#    #+#             */
/*   Updated: 2021/06/10 17:59:55 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact {
	public:

		std::string 
			firstName, 
			lastName, 
			nickname, 
			login, 
			postalAddress, 
			emailAddress, 
			phoneNumber, 
			birthdayDate, 
			favoriteMeal, 
			underwearColor, 
			darkestSecret;

		Contact( void );
		~Contact( void );
};

#endif

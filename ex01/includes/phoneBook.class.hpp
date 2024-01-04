/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:34:51 by motoko            #+#    #+#             */
/*   Updated: 2024/01/04 13:32:38 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "main.hpp"
#include "contact.class.hpp"

class PhoneBook {

	public :
		
		PhoneBook(void);
		PhoneBook(PhoneBook const &cpy);
		PhoneBook& operator=(PhoneBook const &cpy);
		~PhoneBook(void);

		Contact&	getContactList();

	private :
		Contact _contact_list[8];
};

#endif

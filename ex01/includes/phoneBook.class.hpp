/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:34:51 by motoko            #+#    #+#             */
/*   Updated: 2024/01/15 14:36:04 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "main.hpp"
#include "contact.class.hpp"

class PhoneBook {

	public :

		PhoneBook(void);
		~PhoneBook(void);

		void	create_contact(void);
		void	get_contact_list(void);

	private :

		Contact		_contact_list[9];
		int			_i;
};

#endif

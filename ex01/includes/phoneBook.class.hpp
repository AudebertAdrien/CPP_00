/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:34:51 by motoko            #+#    #+#             */
/*   Updated: 2024/01/03 14:35:11 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "main.hpp"

class PhoneBook {

	public :
		
		int	foo;

		PhoneBook(void);
		PhoneBook(int i);
		~PhoneBook(void);

		void	print_public(int i) const;

	private :

		int		_boo;
		void	_print_private(void) const;
};

#endif


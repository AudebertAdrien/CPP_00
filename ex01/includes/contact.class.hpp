/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:34:51 by motoko            #+#    #+#             */
/*   Updated: 2024/01/04 11:54:48 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact {

	public :
		
		Contact(void);
		Contact(Contact const &cpy);
		Contact& operator=(Contact const &cpy);
		~Contact(void);

	private :

		//string _frist_name;
		//string	_last_name;
		//string	_nick_name;
		//int		_phone_number;
		//string	_darkest_secret;
};

#endif

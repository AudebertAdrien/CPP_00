/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/15 16:22:29 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phoneBook.class.hpp"
#include "contact.class.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phone_book;
	std::string str;

	while (1)
	{
		std::cout << "INPUT USER : " << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str == "ADD")
			phone_book.create_contact();
		if (str == "SEARCH")
			phone_book.get_contact_list();
		if (str == "EXIT")
			break ;
	}
	return (0);
}

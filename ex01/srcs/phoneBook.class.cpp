/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/10 17:27:28 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Phone Book!" << std::endl;
	_i = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Phone Book!" << std::endl;
	_i = 0;
}

void	PhoneBook::create_contact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string darkest_secret;
	std::string	phone_number;	
	int			len;

	std::cout << "first name : " << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "last name : " << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "nick name : " << std::endl;
	std::getline(std::cin, nick_name);
	std::cout << "darkest secret : " << std::endl;
	std::getline(std::cin, darkest_secret);
	std::cout << "phone number : " << std::endl;
	std::getline(std::cin, phone_number);
	for (int i = 0; i < _contact_list[i].is_initialized(); i++)
		len++;
	if (len == 8)
		_contact_list[7] = Contact(first_name, last_name, nick_name, darkest_secret, phone_number);
	else
		_contact_list[_i] = Contact(first_name, last_name, nick_name, darkest_secret, phone_number);
	_i++;
}


void	PhoneBook::get_contact_list(void)
{
	int	i;

	std::cout << "PICK AND INDEX BETWEEN 0 and 7" << std::endl;
	std::cin >> i;
	std::cin.ignore();
	if (_contact_list[i].is_initialized())
		_contact_list[i].get_user_infos();
	std::cout << "NOT INITIALIZED !!!" << std::endl;
}

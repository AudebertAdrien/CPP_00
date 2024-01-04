/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/04 13:31:43 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Phone Book!" << std::endl;
	this->_contact_list[8];
}

PhoneBook::PhoneBook(PhoneBook const &cpy) {
	std::cout << "Copy Constructor Phone Book!" << std::endl;
	*this = cpy;
	return ;
}

PhoneBook& PhoneBook::operator=(const PhoneBook &src) {
	std::cout << "Assign Constructor Phone Book!" << std::endl;
	return *this;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Phone Book!" << std::endl;
}

Contact&	PhoneBook::getContactList()
{
	return this->_contact_list;
}

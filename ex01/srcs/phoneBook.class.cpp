/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/03 17:28:11 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Phone Book!" << std::endl;
}

PhoneBook::PhoneBook(PhoneBook const &cpy) {
	std::cout << "Copy Constructor Phone Book!" << std::endl;
	*this = cpy;
	return ;
}

PhoneBook & PhoneBook::operator=(const PhoneBook &src) {
	std::cout << "Assign Constructor Phone Book!" << std::endl;
	return *this;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Phone Book!" << std::endl;
}

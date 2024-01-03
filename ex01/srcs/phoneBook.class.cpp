/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/02 20:44:38 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor 1 Phone Book!" << std::endl;
	this->foo = 43;
}

PhoneBook::PhoneBook(const int f) : _boo(f) {
	std::cout << "Constructor 2 Phone Book!" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Phone Book!" << std::endl;
}

void	PhoneBook::print_public(void) const {
	std::cout << "My string public" << std::endl;
	_print_private();
	return ;
}

void	PhoneBook::_print_private(void) const {
	std::cout << "My string private : " << this->_boo << std::endl;
	return ;
}

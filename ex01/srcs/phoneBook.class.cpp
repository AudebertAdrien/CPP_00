/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/02 18:35:49 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Phone Book!" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Phone Book!" << std::endl;
}

void	PhoneBook::print_string(void) {
	std::cout << "my string" << std::endl;
	return ;
}

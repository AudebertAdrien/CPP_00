/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/04 12:02:33 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.class.hpp"

Contact::Contact(void) {
	std::cout << "Constructor Contact!" << std::endl;
}

Contact::Contact(Contact const &cpy) {
	std::cout << "Copy Constructor Contact!" << std::endl;
	*this = cpy;
}

Contact & Contact::operator=(const Contact &src) {
	std::cout << "Assign Constructor Contact!" << std::endl;
	return *this;
}

Contact::~Contact(void) {
	std::cout << "Destructor Contact!" << std::endl;
}

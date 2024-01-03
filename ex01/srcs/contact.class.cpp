/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/03 17:27:43 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

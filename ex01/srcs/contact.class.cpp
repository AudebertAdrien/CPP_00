/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/04 14:21:09 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.class.hpp"

Contact::Contact(void) {
	std::cout << "Constructor Contact!" << std::endl;
}

Contact::Contact(std::string first_name) : _first_name(first_name) {
	std::cout << "Constructor Contact with Params!" << std::endl;
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

void	Contact::get_user_list() const
{
	std::cout << this->_first_name << std::endl;
}
